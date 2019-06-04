// Fill out your copyright notice in the Description page of Project Settings.


#include "PathfindingManager.h"
#include "Runtime/Engine/Public/DrawDebugHelpers.h"
#include "Runtime/Engine/Classes/Components/BoxComponent.h"

DEFINE_LOG_CATEGORY(PathfindingLog);

// Sets default values
APathfindingManager::APathfindingManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PreviewBoxExtent = CreateDefaultSubobject<UBoxComponent>(TEXT("PreviewBoxExtent"));
	PreviewBoxExtent->SetupAttachment(RootComponent);
	PreviewBoxExtent->SetCollisionProfileName(FName("NoCollision"));

	RootBoxSize = 1000.f;
	BoxHeight = 1000.f;
	bDrawDebug = false;
	VoxelIndex = 0;
	BlockCount = 0;
	ChildBoxSum = 5;
	MaxLevel = 0;
	MinimumBoxSize = 100.f;
	AfterInit = false;
}

// Called when the game starts or when spawned
void APathfindingManager::BeginPlay()
{
	Super::BeginPlay();

	VoxelCollisionObjectParams.AddObjectTypesToQuery(ECollisionChannel::ECC_WorldStatic);
	VoxelCollisionObjectParams.AddObjectTypesToQuery(ECollisionChannel::ECC_WorldDynamic);
	VoxelCollisionObjectParams.AddObjectTypesToQuery(ECollisionChannel::ECC_Visibility);

	VoxelCollisionQueryParams = FCollisionQueryParams(FName("DonCollisionQuery", false));
	VoxelCollisionQueryParams.AddIgnoredActors(ActorToIgnore);

	//InitNavigationArea();
}

// Called every frame
void APathfindingManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APathfindingManager::OnConstruction(const FTransform & Transform)
{
	Super::OnConstruction(Transform);

	PreviewBoxExtent->SetBoxExtent(FVector(RootBoxSize / 2, RootBoxSize / 2, 500.f));
}

void APathfindingManager::InitNavigationArea()
{
	VoxelTree.Empty();
	FVoxelArrayInLevel* VoxelArrayStruct = new FVoxelArrayInLevel();
	VoxelTree.Add(0, VoxelArrayStruct);

	MinBoxSize = RootBoxSize;
	GetChildVoxel(PreviewBoxExtent->GetComponentLocation(), RootBoxSize, ChildBoxSum, 0, VoxelArrayStruct);

	if (bPrintInfo)
	{
		UE_LOG(PathfindingLog, Warning, TEXT("VoxelCount: %d"), VoxelIndex);
		UE_LOG(PathfindingLog, Warning, TEXT("BlockedCount: %d"), BlockCount);
		UE_LOG(PathfindingLog, Warning, TEXT("VoxelTreeLength: %d"), VoxelTree.Num());
		UE_LOG(PathfindingLog, Warning, TEXT("MaxLevel: %d"), MaxLevel);
	}

	AfterInit = true;
}

void APathfindingManager::GetChildVoxel(FVector CenterLocation, float BoxSize, int ChildBoxNum, int32 LevelNow, FVoxelArrayInLevel* VoxelArrayStruct, FPathfindingVoxel* InputParentVoxel)
{
	FVector LeftUp = FVector(CenterLocation.X + BoxSize / 2, CenterLocation.Y - BoxSize / 2, CenterLocation.Z);

	TArray<FPathfindingVoxel*> VoxelArrayInFunc;

	int32 ArrayPositionNow = VoxelArrayStruct->VoxelArray.Num();

	ChildBoxCountInLine = ChildBoxNum;
	float ChildBoxSize = BoxSize / ChildBoxNum;

	for (int i = 0; i < ChildBoxNum; i++)
	{
		for (int j = 0; j < ChildBoxNum; j++)
		{
			FVector NewCenterLocation = FVector(LeftUp.X - (ChildBoxSize * (2 * i + 1)) / 2, LeftUp.Y + (ChildBoxSize * (2 * j + 1)) / 2, LeftUp.Z);

			FPathfindingVoxel* Voxel = new FPathfindingVoxel();
			Voxel->CenterLocation = NewCenterLocation;
			Voxel->BoxSize = ChildBoxSize;
			if (InputParentVoxel)
			{
				Voxel->ParentVoxel = InputParentVoxel;
				InputParentVoxel->ChildrenVoxelArray.Add(Voxel);
			}
			TArray<FOverlapResult> OutOverlaps;
			if (GetWorld()->OverlapMultiByObjectType(OutOverlaps, NewCenterLocation, FQuat::Identity, VoxelCollisionObjectParams,
				FCollisionShape::MakeBox(FVector(ChildBoxSize / 2, ChildBoxSize / 2, BoxHeight / 2)), VoxelCollisionQueryParams))
			{
				Voxel->bIsBlock = true;
				//UE_LOG(PathfindingLog, Warning, TEXT("VoxelIndex %d is block"), VoxelIndex);
				BlockCount++;
				if (bDrawDebug && GEngine->GetNetMode(GetWorld()) != NM_DedicatedServer)
				{
					DrawDebugBox(GetWorld(), NewCenterLocation, FVector(ChildBoxSize / 2, ChildBoxSize / 2, BoxHeight / 2), FColor(255, 0, 0, 0), false, DebugParam.LineDuration, 0, DebugParam.LineThickness);
				}
			}
			else
			{
				if (bDrawDebug && GEngine->GetNetMode(GetWorld()) != NM_DedicatedServer)
				{
					DrawDebugBox(GetWorld(), NewCenterLocation, FVector(ChildBoxSize / 2, ChildBoxSize / 2, BoxHeight / 2), DebugParam.Color, false, DebugParam.LineDuration, 0, DebugParam.LineThickness);
				}
			}
			Voxel->Level = LevelNow;
			Voxel->Index = VoxelIndex;
			VoxelIndex++;

			VoxelArrayInFunc.Add(Voxel);
		}
	}
	VoxelArrayStruct->VoxelArray.Append(VoxelArrayInFunc);

	if (LevelNow > MaxLevel)
		MaxLevel = LevelNow;
	if (MinBoxSize > ChildBoxSize)
		MinBoxSize = ChildBoxSize;

	if (ChildBoxSize > MinimumBoxSize)
	{
		FVoxelArrayInLevel* NewVoxelArrayStruct;
		int32 NextLevel = ++LevelNow;

		if (!VoxelTree.Contains(NextLevel))
		{
			NewVoxelArrayStruct = new FVoxelArrayInLevel();
			VoxelTree.Add(NextLevel, NewVoxelArrayStruct);
		}
		else
		{
			NewVoxelArrayStruct = VoxelTree[NextLevel];
		}
		for (FPathfindingVoxel* VoxelPtr : VoxelArrayInFunc)
		{
			if(VoxelPtr->bIsBlock)
				GetChildVoxel(VoxelPtr->CenterLocation, ChildBoxSize, ChildBoxNum, NextLevel, NewVoxelArrayStruct, VoxelPtr);
		}
	}
}

bool APathfindingManager::IsInThisVoxel(FPathfindingVoxel * InputVoxel, FVector InputLocation)
{
	FVector CenterLocation = InputVoxel->CenterLocation;
	float BoxSize = InputVoxel->BoxSize;
	if ((CenterLocation.X - BoxSize / 2) < InputLocation.X && (CenterLocation.X + BoxSize / 2) > InputLocation.X &&
		(CenterLocation.Y - BoxSize / 2) < InputLocation.Y && (CenterLocation.Y + BoxSize / 2) > InputLocation.Y)
		return true;

	return false;
}

FPathfindingVoxel * APathfindingManager::GetVoxelPtrByLocation(FVector InputLocation, int32 MaxLevelInFunc)
{
	int32 LevelNowInFunc = 0;
	TArray<FPathfindingVoxel*> VoxelArray = VoxelTree[LevelNowInFunc]->VoxelArray;
	bool bIsLastLevel = false;
	FPathfindingVoxel* FoundVoxel = nullptr;
	
	while(!bIsLastLevel)
	{
		bool bIsFound = false;
		for (FPathfindingVoxel* VoxelPtr : VoxelArray)
		{
			if (IsInThisVoxel(VoxelPtr, InputLocation))
			{
				if (LevelNowInFunc == MaxLevelInFunc)
					return VoxelPtr;

				if (VoxelPtr->ChildrenVoxelArray.Num() > 0)
				{
					VoxelArray.Empty();
					VoxelArray.Append(VoxelPtr->ChildrenVoxelArray);
					LevelNowInFunc++;
				}
				else
				{
					bIsLastLevel = true;
					FoundVoxel = VoxelPtr;
				}
				bIsFound = true;
				break;
			}
		}

		if (!bIsFound)
			return nullptr;
	}

	return FoundVoxel;
}

void APathfindingManager::DrawVoxelWithLocation(FVector InputLocation)
{
	FPathfindingVoxel* VoxelPtr = GetVoxelPtrByLocation(InputLocation);

	if (VoxelPtr && GEngine->GetNetMode(GetWorld()) != NM_DedicatedServer)
	{
		DrawDebugBox(GetWorld(), VoxelPtr->CenterLocation, FVector(VoxelPtr->BoxSize / 2, VoxelPtr->BoxSize / 2, BoxHeight / 2), FColor(0, 0, 255, 0), false, 50.f, 0, 10.f);
		//UE_LOG(PathfindingLog, Warning, TEXT("BoxSize: %f"), VoxelPtr->BoxSize);
	}
}

void APathfindingManager::DrawDebug(TArray<FPathfindingVoxel> InputVoxelArray, bool DrawVoxel, const FPathfindingDebugParams& VoxelDebugParam, bool DrawLine, const FPathfindingDebugParams& LineDebugParam)
{
	FPathfindingVoxel PreVoxel;
	PreVoxel.Index = -1;
	for (FPathfindingVoxel Voxel : InputVoxelArray)
	{
		if (GEngine->GetNetMode(GetWorld()) != NM_DedicatedServer)
		{
			if (DrawVoxel)
			{
				DrawDebugBox(GetWorld(), Voxel.CenterLocation, FVector(Voxel.BoxSize / 2, Voxel.BoxSize / 2, BoxHeight / 2), VoxelDebugParam.Color, false, VoxelDebugParam.LineDuration, 0, VoxelDebugParam.LineThickness);
				//UE_LOG(PathfindingLog, Warning, TEXT("BoxSize: %f"), VoxelPtr->BoxSize);
			}

			if (DrawLine)
			{
				if (PreVoxel.Index != -1)
				{
					DrawDebugLine(GetWorld(), PreVoxel.CenterLocation, Voxel.CenterLocation, LineDebugParam.Color, false, LineDebugParam.LineDuration, 0, LineDebugParam.LineThickness);
				}
				PreVoxel = Voxel;
			}
		}
	}
}

bool APathfindingManager::FindPath(FVector StartLocation, FVector EndLocation, TArray<FPathfindingVoxel>& PathArray, bool TryRemoveExcessVoxel)
{
	if (!AfterInit)
		return false;

	FPathfindingVoxel* StartVoxel = GetVoxelPtrByLocation(StartLocation);
	FPathfindingVoxel* EndVoxel = GetVoxelPtrByLocation(EndLocation);
	if (StartVoxel->bIsBlock || EndVoxel->bIsBlock)
		return false;

	FPathfindingVoxel VoxelNow = *StartVoxel;

	TArray<FPathfindingVoxel> OpenArray;
	TArray<FPathfindingVoxel> CloseArray;

	OpenArray.Add(VoxelNow);

	while (true)
	{
		int32 IndexInCloseArray = CloseArray.Add(VoxelNow);
		OpenArray.Remove(VoxelNow);

		if (VoxelNow == *EndVoxel)
		{
			PathArray = TryRemoveExcessVoxel ? RemoveExcessVoxel(GetPathFromCloseArray(CloseArray)) : GetPathFromCloseArray(CloseArray);
			if(bPrintInfo)
				UE_LOG(PathfindingLog, Warning, TEXT("FoundVoxelSum: %d"), PathArray.Num());
			return true;
		}

		TArray<FPathfindingVoxel> FoundNeighbours = GetNeighbours(VoxelNow);
		for (FPathfindingVoxel Neighbour : FoundNeighbours)
		{
			if (!Neighbour.bIsBlock && !CloseArray.Contains(Neighbour))
			{
				Neighbour.ParentVoxelIndexInCloseArray = IndexInCloseArray;
				Neighbour.CostCount = GetEstimatedCost(*StartVoxel, Neighbour) + GetEstimatedCost(Neighbour, *EndVoxel);
				OpenArray.Add(Neighbour);
			}
		}

		if (OpenArray.Num() > 0)
		{
			int32 MinCost = OpenArray[0].CostCount;
			FPathfindingVoxel FoundVoxel = OpenArray[0];
			for (FPathfindingVoxel OpenVoxel : OpenArray)
			{
				if (OpenVoxel.CostCount < MinCost)
				{
					FoundVoxel = OpenVoxel;
					MinCost = OpenVoxel.CostCount;
				}
			}
			OpenArray.Remove(FoundVoxel);
			VoxelNow = FoundVoxel;
		}
		else
		{
			return false;
		}
	}

	return false;
}

TArray<FPathfindingVoxel> APathfindingManager::GetNeighbours(FPathfindingVoxel InputVoxel) 
{
	TArray<FPathfindingVoxel> NeighboursVoxel;
	FVector NewLocation;
	EOneSideChildrenDirection ChildrenDirection;

	for (int32 i = 0; i < 4; i++)
	{	
		switch (i)
		{
		case 0:
			NewLocation = InputVoxel.CenterLocation + FVector(0, InputVoxel.BoxSize, 0);//E
			ChildrenDirection = EOneSideChildrenDirection::_W;
			break;
		case 1:
			NewLocation = InputVoxel.CenterLocation + FVector(-InputVoxel.BoxSize, 0, 0);//S
			ChildrenDirection = EOneSideChildrenDirection::_N;
			break;
		case 2:
			NewLocation = InputVoxel.CenterLocation + FVector(0, -InputVoxel.BoxSize, 0);//W
			ChildrenDirection = EOneSideChildrenDirection::_E;
			break;
		case 3:
			NewLocation = InputVoxel.CenterLocation + FVector(InputVoxel.BoxSize, 0, 0);//N
			ChildrenDirection = EOneSideChildrenDirection::_S;
			break;
		}

		FPathfindingVoxel* NewVoxel = GetVoxelPtrByLocation(NewLocation, InputVoxel.Level);
		if (NewVoxel != nullptr)
		{
			if (NewVoxel->ChildrenVoxelArray.Num() != 0)
			{
				NeighboursVoxel.Append(GetOneSideVoxel(*NewVoxel, ChildrenDirection));

			}
			else
			{
				NeighboursVoxel.Add(*NewVoxel);
			}
		}
	}

	return NeighboursVoxel;
}

TArray<FPathfindingVoxel> APathfindingManager::GetOneSideVoxel(FPathfindingVoxel InputVoxel, EOneSideChildrenDirection ChildrenDireciton)
{
	TArray<FPathfindingVoxel> VoxelArrayToReturn;

	if (InputVoxel.ChildrenVoxelArray.Num() == 0)
	{
		VoxelArrayToReturn.Add(InputVoxel);
		return VoxelArrayToReturn;
	}

	switch (ChildrenDireciton)
	{
	case EOneSideChildrenDirection::_E:
		for (int i = 1; i <= ChildBoxSum; i++)
		{
			VoxelArrayToReturn.Append(GetOneSideVoxel(*InputVoxel.ChildrenVoxelArray[ChildBoxSum * i - 1], ChildrenDireciton));
		}
		break;
	case EOneSideChildrenDirection::_S:
		for (int i = 0; i < ChildBoxSum; i++)
		{
			VoxelArrayToReturn.Append(GetOneSideVoxel(*InputVoxel.ChildrenVoxelArray[ChildBoxSum * (ChildBoxSum - 1) + i], ChildrenDireciton));
		}
		break;
	case EOneSideChildrenDirection::_W:
		for (int i = 0; i < ChildBoxSum; i++)
		{
			VoxelArrayToReturn.Append(GetOneSideVoxel(*InputVoxel.ChildrenVoxelArray[ChildBoxSum * i], ChildrenDireciton));
		}
		break;
	case EOneSideChildrenDirection::_N:
		for (int i = 0; i < ChildBoxSum; i++)
		{
			VoxelArrayToReturn.Append(GetOneSideVoxel(*InputVoxel.ChildrenVoxelArray[i], ChildrenDireciton));
		}
		break;
	}

	return VoxelArrayToReturn;
}

int32 APathfindingManager::GetEstimatedCost(FPathfindingVoxel InputVoxel, FPathfindingVoxel EndVoxel)
{
	return (int)(FMath::Abs(InputVoxel.CenterLocation.X - EndVoxel.CenterLocation.X) / MinBoxSize) + (int)(FMath::Abs(InputVoxel.CenterLocation.Y - EndVoxel.CenterLocation.Y) / MinBoxSize);
}

int32 APathfindingManager::GetVoxelCost(FPathfindingVoxel InputVoxel)
{
	return (MaxLevel + 1 - InputVoxel.Level) * ChildBoxCountInLine;
}

void APathfindingManager::Test(FVector InputLocation)
{
	FPathfindingVoxel* VoxelPtr = GetVoxelPtrByLocation(InputLocation);

	if (VoxelPtr && GEngine->GetNetMode(GetWorld()) != NM_DedicatedServer)
	{
		DrawDebugBox(GetWorld(), VoxelPtr->CenterLocation, FVector(VoxelPtr->BoxSize / 2, VoxelPtr->BoxSize / 2, 500.f), FColor(0, 0, 255, 0), false, 50.f, 0, 10.f);

		FPathfindingVoxel* NewVoxel = GetVoxelPtrByLocation(FVector(VoxelPtr->CenterLocation.X + VoxelPtr->BoxSize, VoxelPtr->CenterLocation.Y, VoxelPtr->CenterLocation.Z), VoxelPtr->Level);

		TArray<FPathfindingVoxel> VoxelArray = GetNeighbours(*VoxelPtr);
		//TArray<FPathfindingVoxel> VoxelArray = GetOneSideVoxel(*NewVoxel, EOneSideChildrenDirection::_S);
		UE_LOG(PathfindingLog, Warning, TEXT("FoundVoxelCount: %d"), VoxelArray.Num());
		for (FPathfindingVoxel Voxel : VoxelArray)
		{
			DrawDebugBox(GetWorld(), Voxel.CenterLocation, FVector(Voxel.BoxSize / 2, Voxel.BoxSize / 2, 500.f), FColor(255, 0, 0, 0), false, 50.f, 0, 10.f);
		}
	}	
}

TArray<FPathfindingVoxel> APathfindingManager::GetPathFromCloseArray(TArray<FPathfindingVoxel> CloseArray)
{
	if (CloseArray.Num() > 2)
	{
		TArray<FPathfindingVoxel> OutArray;

		FPathfindingVoxel VoxelNow = CloseArray[CloseArray.Num() - 1];
		OutArray.Add(VoxelNow);

		while (VoxelNow.ParentVoxelIndexInCloseArray != -1)
		{
			VoxelNow = CloseArray[VoxelNow.ParentVoxelIndexInCloseArray];
			OutArray.Add(VoxelNow);
		}

		return OutArray;
	}

	return CloseArray;
}

TArray<FPathfindingVoxel> APathfindingManager::RemoveExcessVoxel(TArray<FPathfindingVoxel> InputArray)
{
	if (InputArray.Num() > 2)
	{
		FPathfindingVoxel SignVoxel = InputArray[InputArray.Num() - 1];

		for (int32 i = InputArray.Num() - 2; i > 0; i--)
		{
			if (IsDirectPathLineTrace(SignVoxel, InputArray[i - 1]))
			{
				InputArray.RemoveAt(i);
			}
			else
			{
				SignVoxel = InputArray[i];
			}
		}
	}

	return InputArray;
}

bool APathfindingManager::IsDirectPathLineTrace(FPathfindingVoxel StartVoxel, FPathfindingVoxel EndVoxel)
{
	FHitResult HitResult;

	return !GetWorld()->LineTraceSingleByObjectType(HitResult, StartVoxel.CenterLocation, EndVoxel.CenterLocation, VoxelCollisionObjectParams, VoxelCollisionQueryParams);
}

