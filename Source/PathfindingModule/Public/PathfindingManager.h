// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PathfindingManager.generated.h"

class UBoxComponent;

DECLARE_LOG_CATEGORY_EXTERN(PathfindingLog, Log, All);

USTRUCT(BlueprintType)
struct FPathfindingDebugParams
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Pathfinding")
		FColor Color = FColor(0, 0, 0, 0);

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Pathfinding")
		float LineDuration = 10.f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Pathfinding")
		float LineThickness = 10.f;
};

USTRUCT(BlueprintType)
struct FPathfindingVoxel
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
		FVector CenterLocation;
	float BoxSize;
	FPathfindingVoxel* ParentVoxel = nullptr;//Point to parent
	bool bIsBlock = false;
	TArray<FPathfindingVoxel*> ChildrenVoxelArray;//Point to children
	int32 Level = 0;
	int32 Index = -1;

	int32 ParentVoxelIndexInCloseArray = -1;
	int32 CostCount = 0;


	FORCEINLINE bool operator == (const FPathfindingVoxel& Input) const
	{
		return this->Index == Input.Index;
	}
};

enum class EOneSideChildrenDirection : uint8
{
	_E,
	_S,
	_W,
	_N
};

struct FVoxelArrayInLevel
{
	TArray<FPathfindingVoxel*> VoxelArray;
};

UCLASS()
class PATHFINDINGMODULE_API APathfindingManager : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	APathfindingManager();

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Pathfinding")
		float RootBoxSize;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Pathfinding")
		float MinimumBoxSize;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Pathfinding")
		float BoxHeight;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Pathfinding")
		int32 ChildBoxSum;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Pathfinding")
		bool bPrintInfo = true;

	/* **May crash if RootBoxSize is too big** */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Pathfinding")
		bool bDrawDebug;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Pathfinding")
		FPathfindingDebugParams DebugParam;

	UBoxComponent* PreviewBoxExtent;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	int32 VoxelIndex;
	int32 MaxLevel;
	int32 BlockCount;
	int32 ChildBoxCountInLine;
	float MinBoxSize;
	bool AfterInit;

	TMap<int32, FVoxelArrayInLevel*> VoxelTree;

	FCollisionObjectQueryParams VoxelCollisionObjectParams;
	FCollisionShape VoxelCollisionShape;
	FCollisionQueryParams VoxelCollisionQueryParams;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void OnConstruction(const FTransform& Transform) override;

	UFUNCTION(BlueprintCallable, Category = "Pathfinding")
		void InitNavigationArea();

	void GetChildVoxel(FVector CenterLocation, float BoxSize, int ChildBoxNum, int32 LevelNow, FVoxelArrayInLevel* VoxelArrayStruct, FPathfindingVoxel* InputParentVoxel = nullptr);

	bool IsInThisVoxel(FPathfindingVoxel* InputVoxel, FVector InputLocation);

	FPathfindingVoxel* GetVoxelPtrByLocation(FVector InputLocation, int32 MaxLevel = -1);

	UFUNCTION(BlueprintCallable, Category = "Pathfinding")
		void DrawVoxelWithLocation(FVector InputLocation);

	UFUNCTION(BlueprintCallable, meta = (DrawVoxel = 1, DrawLine = 1), Category = "Pathfinding")
		void DrawDebug(TArray<FPathfindingVoxel> InputVoxelArray, bool DrawVoxel, const FPathfindingDebugParams& VoxelDebugParam, bool DrawLine, const FPathfindingDebugParams& LineDebugParam);

	UFUNCTION(BlueprintCallable, Category = "Pathfinding")
		bool FindPath(FVector StartLocation, FVector EndLocation, TArray<FPathfindingVoxel>& PathArray, bool TryRemoveExcessVoxel = false);

	TArray<FPathfindingVoxel> GetNeighbours(FPathfindingVoxel InputVoxel);

	TArray<FPathfindingVoxel> GetOneSideVoxel(FPathfindingVoxel InputVoxel, EOneSideChildrenDirection ChildrenDireciton);

	int32 GetEstimatedCost(FPathfindingVoxel InputVoxel, FPathfindingVoxel EndVoxel);
	int32 GetVoxelCost(FPathfindingVoxel InputVoxel);

	UFUNCTION(BlueprintCallable, Category = "Pathfinding")
		void Test(FVector InputLocation);

	TArray<FPathfindingVoxel> GetPathFromCloseArray(TArray<FPathfindingVoxel> CloseArray);

	TArray<FPathfindingVoxel> RemoveExcessVoxel(TArray<FPathfindingVoxel> InputArray);

	bool IsDirectPathLineTrace(FPathfindingVoxel StartVoxel, FPathfindingVoxel EndVoxel);
};