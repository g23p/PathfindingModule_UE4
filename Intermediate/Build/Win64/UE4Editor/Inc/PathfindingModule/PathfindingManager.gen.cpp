// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PathfindingModule/Public/PathfindingManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePathfindingManager() {}
// Cross Module References
	PATHFINDINGMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FPathfindingVoxel();
	UPackage* Z_Construct_UPackage__Script_PathfindingModule();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	PATHFINDINGMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FPathfindingDebugParams();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	PATHFINDINGMODULE_API UClass* Z_Construct_UClass_APathfindingManager_NoRegister();
	PATHFINDINGMODULE_API UClass* Z_Construct_UClass_APathfindingManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	PATHFINDINGMODULE_API UFunction* Z_Construct_UFunction_APathfindingManager_DrawDebug();
	PATHFINDINGMODULE_API UFunction* Z_Construct_UFunction_APathfindingManager_DrawVoxelWithLocation();
	PATHFINDINGMODULE_API UFunction* Z_Construct_UFunction_APathfindingManager_FindPath();
	PATHFINDINGMODULE_API UFunction* Z_Construct_UFunction_APathfindingManager_InitNavigationArea();
	PATHFINDINGMODULE_API UFunction* Z_Construct_UFunction_APathfindingManager_Test();
// End Cross Module References
class UScriptStruct* FPathfindingVoxel::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PATHFINDINGMODULE_API uint32 Get_Z_Construct_UScriptStruct_FPathfindingVoxel_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPathfindingVoxel, Z_Construct_UPackage__Script_PathfindingModule(), TEXT("PathfindingVoxel"), sizeof(FPathfindingVoxel), Get_Z_Construct_UScriptStruct_FPathfindingVoxel_Hash());
	}
	return Singleton;
}
template<> PATHFINDINGMODULE_API UScriptStruct* StaticStruct<FPathfindingVoxel>()
{
	return FPathfindingVoxel::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPathfindingVoxel(FPathfindingVoxel::StaticStruct, TEXT("/Script/PathfindingModule"), TEXT("PathfindingVoxel"), false, nullptr, nullptr);
static struct FScriptStruct_PathfindingModule_StaticRegisterNativesFPathfindingVoxel
{
	FScriptStruct_PathfindingModule_StaticRegisterNativesFPathfindingVoxel()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PathfindingVoxel")),new UScriptStruct::TCppStructOps<FPathfindingVoxel>);
	}
} ScriptStruct_PathfindingModule_StaticRegisterNativesFPathfindingVoxel;
	struct Z_Construct_UScriptStruct_FPathfindingVoxel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CenterLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CenterLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPathfindingVoxel_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PathfindingManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPathfindingVoxel_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPathfindingVoxel>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPathfindingVoxel_Statics::NewProp_CenterLocation_MetaData[] = {
		{ "Category", "PathfindingVoxel" },
		{ "ModuleRelativePath", "Public/PathfindingManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPathfindingVoxel_Statics::NewProp_CenterLocation = { "CenterLocation", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPathfindingVoxel, CenterLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FPathfindingVoxel_Statics::NewProp_CenterLocation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPathfindingVoxel_Statics::NewProp_CenterLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPathfindingVoxel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPathfindingVoxel_Statics::NewProp_CenterLocation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPathfindingVoxel_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PathfindingModule,
		nullptr,
		&NewStructOps,
		"PathfindingVoxel",
		sizeof(FPathfindingVoxel),
		alignof(FPathfindingVoxel),
		Z_Construct_UScriptStruct_FPathfindingVoxel_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FPathfindingVoxel_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPathfindingVoxel_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPathfindingVoxel_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPathfindingVoxel()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPathfindingVoxel_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PathfindingModule();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PathfindingVoxel"), sizeof(FPathfindingVoxel), Get_Z_Construct_UScriptStruct_FPathfindingVoxel_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPathfindingVoxel_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPathfindingVoxel_Hash() { return 3397315579U; }
class UScriptStruct* FPathfindingDebugParams::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PATHFINDINGMODULE_API uint32 Get_Z_Construct_UScriptStruct_FPathfindingDebugParams_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPathfindingDebugParams, Z_Construct_UPackage__Script_PathfindingModule(), TEXT("PathfindingDebugParams"), sizeof(FPathfindingDebugParams), Get_Z_Construct_UScriptStruct_FPathfindingDebugParams_Hash());
	}
	return Singleton;
}
template<> PATHFINDINGMODULE_API UScriptStruct* StaticStruct<FPathfindingDebugParams>()
{
	return FPathfindingDebugParams::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPathfindingDebugParams(FPathfindingDebugParams::StaticStruct, TEXT("/Script/PathfindingModule"), TEXT("PathfindingDebugParams"), false, nullptr, nullptr);
static struct FScriptStruct_PathfindingModule_StaticRegisterNativesFPathfindingDebugParams
{
	FScriptStruct_PathfindingModule_StaticRegisterNativesFPathfindingDebugParams()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PathfindingDebugParams")),new UScriptStruct::TCppStructOps<FPathfindingDebugParams>);
	}
} ScriptStruct_PathfindingModule_StaticRegisterNativesFPathfindingDebugParams;
	struct Z_Construct_UScriptStruct_FPathfindingDebugParams_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LineThickness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LineThickness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LineDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LineDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPathfindingDebugParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PathfindingManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPathfindingDebugParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPathfindingDebugParams>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPathfindingDebugParams_Statics::NewProp_LineThickness_MetaData[] = {
		{ "Category", "Pathfinding" },
		{ "ModuleRelativePath", "Public/PathfindingManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPathfindingDebugParams_Statics::NewProp_LineThickness = { "LineThickness", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPathfindingDebugParams, LineThickness), METADATA_PARAMS(Z_Construct_UScriptStruct_FPathfindingDebugParams_Statics::NewProp_LineThickness_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPathfindingDebugParams_Statics::NewProp_LineThickness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPathfindingDebugParams_Statics::NewProp_LineDuration_MetaData[] = {
		{ "Category", "Pathfinding" },
		{ "ModuleRelativePath", "Public/PathfindingManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPathfindingDebugParams_Statics::NewProp_LineDuration = { "LineDuration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPathfindingDebugParams, LineDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FPathfindingDebugParams_Statics::NewProp_LineDuration_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPathfindingDebugParams_Statics::NewProp_LineDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPathfindingDebugParams_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "Pathfinding" },
		{ "ModuleRelativePath", "Public/PathfindingManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPathfindingDebugParams_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPathfindingDebugParams, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FPathfindingDebugParams_Statics::NewProp_Color_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPathfindingDebugParams_Statics::NewProp_Color_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPathfindingDebugParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPathfindingDebugParams_Statics::NewProp_LineThickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPathfindingDebugParams_Statics::NewProp_LineDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPathfindingDebugParams_Statics::NewProp_Color,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPathfindingDebugParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PathfindingModule,
		nullptr,
		&NewStructOps,
		"PathfindingDebugParams",
		sizeof(FPathfindingDebugParams),
		alignof(FPathfindingDebugParams),
		Z_Construct_UScriptStruct_FPathfindingDebugParams_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FPathfindingDebugParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPathfindingDebugParams_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPathfindingDebugParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPathfindingDebugParams()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPathfindingDebugParams_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PathfindingModule();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PathfindingDebugParams"), sizeof(FPathfindingDebugParams), Get_Z_Construct_UScriptStruct_FPathfindingDebugParams_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPathfindingDebugParams_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPathfindingDebugParams_Hash() { return 1696912743U; }
	void APathfindingManager::StaticRegisterNativesAPathfindingManager()
	{
		UClass* Class = APathfindingManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DrawDebug", &APathfindingManager::execDrawDebug },
			{ "DrawVoxelWithLocation", &APathfindingManager::execDrawVoxelWithLocation },
			{ "FindPath", &APathfindingManager::execFindPath },
			{ "InitNavigationArea", &APathfindingManager::execInitNavigationArea },
			{ "Test", &APathfindingManager::execTest },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APathfindingManager_DrawDebug_Statics
	{
		struct PathfindingManager_eventDrawDebug_Parms
		{
			TArray<FPathfindingVoxel> InputVoxelArray;
			bool DrawVoxel;
			FPathfindingDebugParams VoxelDebugParam;
			bool DrawLine;
			FPathfindingDebugParams LineDebugParam;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LineDebugParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LineDebugParam;
		static void NewProp_DrawLine_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DrawLine;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoxelDebugParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VoxelDebugParam;
		static void NewProp_DrawVoxel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DrawVoxel;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InputVoxelArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputVoxelArray_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APathfindingManager_DrawDebug_Statics::NewProp_LineDebugParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APathfindingManager_DrawDebug_Statics::NewProp_LineDebugParam = { "LineDebugParam", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PathfindingManager_eventDrawDebug_Parms, LineDebugParam), Z_Construct_UScriptStruct_FPathfindingDebugParams, METADATA_PARAMS(Z_Construct_UFunction_APathfindingManager_DrawDebug_Statics::NewProp_LineDebugParam_MetaData, ARRAY_COUNT(Z_Construct_UFunction_APathfindingManager_DrawDebug_Statics::NewProp_LineDebugParam_MetaData)) };
	void Z_Construct_UFunction_APathfindingManager_DrawDebug_Statics::NewProp_DrawLine_SetBit(void* Obj)
	{
		((PathfindingManager_eventDrawDebug_Parms*)Obj)->DrawLine = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APathfindingManager_DrawDebug_Statics::NewProp_DrawLine = { "DrawLine", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PathfindingManager_eventDrawDebug_Parms), &Z_Construct_UFunction_APathfindingManager_DrawDebug_Statics::NewProp_DrawLine_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APathfindingManager_DrawDebug_Statics::NewProp_VoxelDebugParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APathfindingManager_DrawDebug_Statics::NewProp_VoxelDebugParam = { "VoxelDebugParam", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PathfindingManager_eventDrawDebug_Parms, VoxelDebugParam), Z_Construct_UScriptStruct_FPathfindingDebugParams, METADATA_PARAMS(Z_Construct_UFunction_APathfindingManager_DrawDebug_Statics::NewProp_VoxelDebugParam_MetaData, ARRAY_COUNT(Z_Construct_UFunction_APathfindingManager_DrawDebug_Statics::NewProp_VoxelDebugParam_MetaData)) };
	void Z_Construct_UFunction_APathfindingManager_DrawDebug_Statics::NewProp_DrawVoxel_SetBit(void* Obj)
	{
		((PathfindingManager_eventDrawDebug_Parms*)Obj)->DrawVoxel = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APathfindingManager_DrawDebug_Statics::NewProp_DrawVoxel = { "DrawVoxel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PathfindingManager_eventDrawDebug_Parms), &Z_Construct_UFunction_APathfindingManager_DrawDebug_Statics::NewProp_DrawVoxel_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_APathfindingManager_DrawDebug_Statics::NewProp_InputVoxelArray = { "InputVoxelArray", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PathfindingManager_eventDrawDebug_Parms, InputVoxelArray), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APathfindingManager_DrawDebug_Statics::NewProp_InputVoxelArray_Inner = { "InputVoxelArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPathfindingVoxel, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APathfindingManager_DrawDebug_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APathfindingManager_DrawDebug_Statics::NewProp_LineDebugParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APathfindingManager_DrawDebug_Statics::NewProp_DrawLine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APathfindingManager_DrawDebug_Statics::NewProp_VoxelDebugParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APathfindingManager_DrawDebug_Statics::NewProp_DrawVoxel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APathfindingManager_DrawDebug_Statics::NewProp_InputVoxelArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APathfindingManager_DrawDebug_Statics::NewProp_InputVoxelArray_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APathfindingManager_DrawDebug_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pathfinding" },
		{ "DrawLine", "1" },
		{ "DrawVoxel", "1" },
		{ "ModuleRelativePath", "Public/PathfindingManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APathfindingManager_DrawDebug_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APathfindingManager, nullptr, "DrawDebug", sizeof(PathfindingManager_eventDrawDebug_Parms), Z_Construct_UFunction_APathfindingManager_DrawDebug_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APathfindingManager_DrawDebug_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APathfindingManager_DrawDebug_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APathfindingManager_DrawDebug_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APathfindingManager_DrawDebug()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APathfindingManager_DrawDebug_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APathfindingManager_DrawVoxelWithLocation_Statics
	{
		struct PathfindingManager_eventDrawVoxelWithLocation_Parms
		{
			FVector InputLocation;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APathfindingManager_DrawVoxelWithLocation_Statics::NewProp_InputLocation = { "InputLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PathfindingManager_eventDrawVoxelWithLocation_Parms, InputLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APathfindingManager_DrawVoxelWithLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APathfindingManager_DrawVoxelWithLocation_Statics::NewProp_InputLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APathfindingManager_DrawVoxelWithLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pathfinding" },
		{ "ModuleRelativePath", "Public/PathfindingManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APathfindingManager_DrawVoxelWithLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APathfindingManager, nullptr, "DrawVoxelWithLocation", sizeof(PathfindingManager_eventDrawVoxelWithLocation_Parms), Z_Construct_UFunction_APathfindingManager_DrawVoxelWithLocation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APathfindingManager_DrawVoxelWithLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APathfindingManager_DrawVoxelWithLocation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APathfindingManager_DrawVoxelWithLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APathfindingManager_DrawVoxelWithLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APathfindingManager_DrawVoxelWithLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APathfindingManager_FindPath_Statics
	{
		struct PathfindingManager_eventFindPath_Parms
		{
			FVector StartLocation;
			FVector EndLocation;
			TArray<FPathfindingVoxel> PathArray;
			bool TryRemoveExcessVoxel;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_TryRemoveExcessVoxel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_TryRemoveExcessVoxel;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PathArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PathArray_Inner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndLocation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APathfindingManager_FindPath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PathfindingManager_eventFindPath_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APathfindingManager_FindPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PathfindingManager_eventFindPath_Parms), &Z_Construct_UFunction_APathfindingManager_FindPath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_APathfindingManager_FindPath_Statics::NewProp_TryRemoveExcessVoxel_SetBit(void* Obj)
	{
		((PathfindingManager_eventFindPath_Parms*)Obj)->TryRemoveExcessVoxel = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APathfindingManager_FindPath_Statics::NewProp_TryRemoveExcessVoxel = { "TryRemoveExcessVoxel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PathfindingManager_eventFindPath_Parms), &Z_Construct_UFunction_APathfindingManager_FindPath_Statics::NewProp_TryRemoveExcessVoxel_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_APathfindingManager_FindPath_Statics::NewProp_PathArray = { "PathArray", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PathfindingManager_eventFindPath_Parms, PathArray), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APathfindingManager_FindPath_Statics::NewProp_PathArray_Inner = { "PathArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPathfindingVoxel, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APathfindingManager_FindPath_Statics::NewProp_EndLocation = { "EndLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PathfindingManager_eventFindPath_Parms, EndLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APathfindingManager_FindPath_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PathfindingManager_eventFindPath_Parms, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APathfindingManager_FindPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APathfindingManager_FindPath_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APathfindingManager_FindPath_Statics::NewProp_TryRemoveExcessVoxel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APathfindingManager_FindPath_Statics::NewProp_PathArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APathfindingManager_FindPath_Statics::NewProp_PathArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APathfindingManager_FindPath_Statics::NewProp_EndLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APathfindingManager_FindPath_Statics::NewProp_StartLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APathfindingManager_FindPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pathfinding" },
		{ "CPP_Default_TryRemoveExcessVoxel", "false" },
		{ "ModuleRelativePath", "Public/PathfindingManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APathfindingManager_FindPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APathfindingManager, nullptr, "FindPath", sizeof(PathfindingManager_eventFindPath_Parms), Z_Construct_UFunction_APathfindingManager_FindPath_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APathfindingManager_FindPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APathfindingManager_FindPath_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APathfindingManager_FindPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APathfindingManager_FindPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APathfindingManager_FindPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APathfindingManager_InitNavigationArea_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APathfindingManager_InitNavigationArea_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pathfinding" },
		{ "ModuleRelativePath", "Public/PathfindingManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APathfindingManager_InitNavigationArea_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APathfindingManager, nullptr, "InitNavigationArea", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APathfindingManager_InitNavigationArea_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APathfindingManager_InitNavigationArea_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APathfindingManager_InitNavigationArea()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APathfindingManager_InitNavigationArea_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APathfindingManager_Test_Statics
	{
		struct PathfindingManager_eventTest_Parms
		{
			FVector InputLocation;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APathfindingManager_Test_Statics::NewProp_InputLocation = { "InputLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PathfindingManager_eventTest_Parms, InputLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APathfindingManager_Test_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APathfindingManager_Test_Statics::NewProp_InputLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APathfindingManager_Test_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pathfinding" },
		{ "ModuleRelativePath", "Public/PathfindingManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APathfindingManager_Test_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APathfindingManager, nullptr, "Test", sizeof(PathfindingManager_eventTest_Parms), Z_Construct_UFunction_APathfindingManager_Test_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APathfindingManager_Test_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APathfindingManager_Test_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APathfindingManager_Test_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APathfindingManager_Test()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APathfindingManager_Test_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APathfindingManager_NoRegister()
	{
		return APathfindingManager::StaticClass();
	}
	struct Z_Construct_UClass_APathfindingManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DebugParam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawDebug_MetaData[];
#endif
		static void NewProp_bDrawDebug_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawDebug;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPrintInfo_MetaData[];
#endif
		static void NewProp_bPrintInfo_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPrintInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChildBoxSum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ChildBoxSum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BoxHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimumBoxSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinimumBoxSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootBoxSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RootBoxSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APathfindingManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PathfindingModule,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APathfindingManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APathfindingManager_DrawDebug, "DrawDebug" }, // 1655492344
		{ &Z_Construct_UFunction_APathfindingManager_DrawVoxelWithLocation, "DrawVoxelWithLocation" }, // 2850326754
		{ &Z_Construct_UFunction_APathfindingManager_FindPath, "FindPath" }, // 3254459142
		{ &Z_Construct_UFunction_APathfindingManager_InitNavigationArea, "InitNavigationArea" }, // 4021836669
		{ &Z_Construct_UFunction_APathfindingManager_Test, "Test" }, // 1411195465
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APathfindingManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PathfindingManager.h" },
		{ "ModuleRelativePath", "Public/PathfindingManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APathfindingManager_Statics::NewProp_DebugParam_MetaData[] = {
		{ "Category", "Pathfinding" },
		{ "ModuleRelativePath", "Public/PathfindingManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APathfindingManager_Statics::NewProp_DebugParam = { "DebugParam", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APathfindingManager, DebugParam), Z_Construct_UScriptStruct_FPathfindingDebugParams, METADATA_PARAMS(Z_Construct_UClass_APathfindingManager_Statics::NewProp_DebugParam_MetaData, ARRAY_COUNT(Z_Construct_UClass_APathfindingManager_Statics::NewProp_DebugParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APathfindingManager_Statics::NewProp_bDrawDebug_MetaData[] = {
		{ "Category", "Pathfinding" },
		{ "ModuleRelativePath", "Public/PathfindingManager.h" },
		{ "ToolTip", "**May crash if RootBoxSize is too big**" },
	};
#endif
	void Z_Construct_UClass_APathfindingManager_Statics::NewProp_bDrawDebug_SetBit(void* Obj)
	{
		((APathfindingManager*)Obj)->bDrawDebug = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APathfindingManager_Statics::NewProp_bDrawDebug = { "bDrawDebug", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APathfindingManager), &Z_Construct_UClass_APathfindingManager_Statics::NewProp_bDrawDebug_SetBit, METADATA_PARAMS(Z_Construct_UClass_APathfindingManager_Statics::NewProp_bDrawDebug_MetaData, ARRAY_COUNT(Z_Construct_UClass_APathfindingManager_Statics::NewProp_bDrawDebug_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APathfindingManager_Statics::NewProp_bPrintInfo_MetaData[] = {
		{ "Category", "Pathfinding" },
		{ "ModuleRelativePath", "Public/PathfindingManager.h" },
	};
#endif
	void Z_Construct_UClass_APathfindingManager_Statics::NewProp_bPrintInfo_SetBit(void* Obj)
	{
		((APathfindingManager*)Obj)->bPrintInfo = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APathfindingManager_Statics::NewProp_bPrintInfo = { "bPrintInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APathfindingManager), &Z_Construct_UClass_APathfindingManager_Statics::NewProp_bPrintInfo_SetBit, METADATA_PARAMS(Z_Construct_UClass_APathfindingManager_Statics::NewProp_bPrintInfo_MetaData, ARRAY_COUNT(Z_Construct_UClass_APathfindingManager_Statics::NewProp_bPrintInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APathfindingManager_Statics::NewProp_ChildBoxSum_MetaData[] = {
		{ "Category", "Pathfinding" },
		{ "ModuleRelativePath", "Public/PathfindingManager.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_APathfindingManager_Statics::NewProp_ChildBoxSum = { "ChildBoxSum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APathfindingManager, ChildBoxSum), METADATA_PARAMS(Z_Construct_UClass_APathfindingManager_Statics::NewProp_ChildBoxSum_MetaData, ARRAY_COUNT(Z_Construct_UClass_APathfindingManager_Statics::NewProp_ChildBoxSum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APathfindingManager_Statics::NewProp_BoxHeight_MetaData[] = {
		{ "Category", "Pathfinding" },
		{ "ModuleRelativePath", "Public/PathfindingManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APathfindingManager_Statics::NewProp_BoxHeight = { "BoxHeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APathfindingManager, BoxHeight), METADATA_PARAMS(Z_Construct_UClass_APathfindingManager_Statics::NewProp_BoxHeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_APathfindingManager_Statics::NewProp_BoxHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APathfindingManager_Statics::NewProp_MinimumBoxSize_MetaData[] = {
		{ "Category", "Pathfinding" },
		{ "ModuleRelativePath", "Public/PathfindingManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APathfindingManager_Statics::NewProp_MinimumBoxSize = { "MinimumBoxSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APathfindingManager, MinimumBoxSize), METADATA_PARAMS(Z_Construct_UClass_APathfindingManager_Statics::NewProp_MinimumBoxSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_APathfindingManager_Statics::NewProp_MinimumBoxSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APathfindingManager_Statics::NewProp_RootBoxSize_MetaData[] = {
		{ "Category", "Pathfinding" },
		{ "ModuleRelativePath", "Public/PathfindingManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APathfindingManager_Statics::NewProp_RootBoxSize = { "RootBoxSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APathfindingManager, RootBoxSize), METADATA_PARAMS(Z_Construct_UClass_APathfindingManager_Statics::NewProp_RootBoxSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_APathfindingManager_Statics::NewProp_RootBoxSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APathfindingManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APathfindingManager_Statics::NewProp_DebugParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APathfindingManager_Statics::NewProp_bDrawDebug,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APathfindingManager_Statics::NewProp_bPrintInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APathfindingManager_Statics::NewProp_ChildBoxSum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APathfindingManager_Statics::NewProp_BoxHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APathfindingManager_Statics::NewProp_MinimumBoxSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APathfindingManager_Statics::NewProp_RootBoxSize,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APathfindingManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APathfindingManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APathfindingManager_Statics::ClassParams = {
		&APathfindingManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APathfindingManager_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_APathfindingManager_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_APathfindingManager_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APathfindingManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APathfindingManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APathfindingManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APathfindingManager, 3686400047);
	template<> PATHFINDINGMODULE_API UClass* StaticClass<APathfindingManager>()
	{
		return APathfindingManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APathfindingManager(Z_Construct_UClass_APathfindingManager, &APathfindingManager::StaticClass, TEXT("/Script/PathfindingModule"), TEXT("APathfindingManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APathfindingManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
