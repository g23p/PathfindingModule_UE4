// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FPathfindingVoxel;
struct FPathfindingDebugParams;
#ifdef PATHFINDINGMODULE_PathfindingManager_generated_h
#error "PathfindingManager.generated.h already included, missing '#pragma once' in PathfindingManager.h"
#endif
#define PATHFINDINGMODULE_PathfindingManager_generated_h

#define ModuleTest_Plugins_PathfindingModule_Source_PathfindingModule_Public_PathfindingManager_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPathfindingVoxel_Statics; \
	PATHFINDINGMODULE_API static class UScriptStruct* StaticStruct();


template<> PATHFINDINGMODULE_API UScriptStruct* StaticStruct<struct FPathfindingVoxel>();

#define ModuleTest_Plugins_PathfindingModule_Source_PathfindingModule_Public_PathfindingManager_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPathfindingDebugParams_Statics; \
	PATHFINDINGMODULE_API static class UScriptStruct* StaticStruct();


template<> PATHFINDINGMODULE_API UScriptStruct* StaticStruct<struct FPathfindingDebugParams>();

#define ModuleTest_Plugins_PathfindingModule_Source_PathfindingModule_Public_PathfindingManager_h_68_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTest) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_InputLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Test(Z_Param_InputLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindPath) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_StartLocation); \
		P_GET_STRUCT(FVector,Z_Param_EndLocation); \
		P_GET_TARRAY_REF(FPathfindingVoxel,Z_Param_Out_PathArray); \
		P_GET_UBOOL(Z_Param_TryRemoveExcessVoxel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->FindPath(Z_Param_StartLocation,Z_Param_EndLocation,Z_Param_Out_PathArray,Z_Param_TryRemoveExcessVoxel); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawDebug) \
	{ \
		P_GET_TARRAY(FPathfindingVoxel,Z_Param_InputVoxelArray); \
		P_GET_UBOOL(Z_Param_DrawVoxel); \
		P_GET_STRUCT_REF(FPathfindingDebugParams,Z_Param_Out_VoxelDebugParam); \
		P_GET_UBOOL(Z_Param_DrawLine); \
		P_GET_STRUCT_REF(FPathfindingDebugParams,Z_Param_Out_LineDebugParam); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DrawDebug(Z_Param_InputVoxelArray,Z_Param_DrawVoxel,Z_Param_Out_VoxelDebugParam,Z_Param_DrawLine,Z_Param_Out_LineDebugParam); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawVoxelWithLocation) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_InputLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DrawVoxelWithLocation(Z_Param_InputLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitNavigationArea) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InitNavigationArea(); \
		P_NATIVE_END; \
	}


#define ModuleTest_Plugins_PathfindingModule_Source_PathfindingModule_Public_PathfindingManager_h_68_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTest) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_InputLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Test(Z_Param_InputLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindPath) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_StartLocation); \
		P_GET_STRUCT(FVector,Z_Param_EndLocation); \
		P_GET_TARRAY_REF(FPathfindingVoxel,Z_Param_Out_PathArray); \
		P_GET_UBOOL(Z_Param_TryRemoveExcessVoxel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->FindPath(Z_Param_StartLocation,Z_Param_EndLocation,Z_Param_Out_PathArray,Z_Param_TryRemoveExcessVoxel); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawDebug) \
	{ \
		P_GET_TARRAY(FPathfindingVoxel,Z_Param_InputVoxelArray); \
		P_GET_UBOOL(Z_Param_DrawVoxel); \
		P_GET_STRUCT_REF(FPathfindingDebugParams,Z_Param_Out_VoxelDebugParam); \
		P_GET_UBOOL(Z_Param_DrawLine); \
		P_GET_STRUCT_REF(FPathfindingDebugParams,Z_Param_Out_LineDebugParam); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DrawDebug(Z_Param_InputVoxelArray,Z_Param_DrawVoxel,Z_Param_Out_VoxelDebugParam,Z_Param_DrawLine,Z_Param_Out_LineDebugParam); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawVoxelWithLocation) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_InputLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DrawVoxelWithLocation(Z_Param_InputLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitNavigationArea) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InitNavigationArea(); \
		P_NATIVE_END; \
	}


#define ModuleTest_Plugins_PathfindingModule_Source_PathfindingModule_Public_PathfindingManager_h_68_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPathfindingManager(); \
	friend struct Z_Construct_UClass_APathfindingManager_Statics; \
public: \
	DECLARE_CLASS(APathfindingManager, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PathfindingModule"), NO_API) \
	DECLARE_SERIALIZER(APathfindingManager)


#define ModuleTest_Plugins_PathfindingModule_Source_PathfindingModule_Public_PathfindingManager_h_68_INCLASS \
private: \
	static void StaticRegisterNativesAPathfindingManager(); \
	friend struct Z_Construct_UClass_APathfindingManager_Statics; \
public: \
	DECLARE_CLASS(APathfindingManager, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PathfindingModule"), NO_API) \
	DECLARE_SERIALIZER(APathfindingManager)


#define ModuleTest_Plugins_PathfindingModule_Source_PathfindingModule_Public_PathfindingManager_h_68_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APathfindingManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APathfindingManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APathfindingManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APathfindingManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APathfindingManager(APathfindingManager&&); \
	NO_API APathfindingManager(const APathfindingManager&); \
public:


#define ModuleTest_Plugins_PathfindingModule_Source_PathfindingModule_Public_PathfindingManager_h_68_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APathfindingManager(APathfindingManager&&); \
	NO_API APathfindingManager(const APathfindingManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APathfindingManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APathfindingManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APathfindingManager)


#define ModuleTest_Plugins_PathfindingModule_Source_PathfindingModule_Public_PathfindingManager_h_68_PRIVATE_PROPERTY_OFFSET
#define ModuleTest_Plugins_PathfindingModule_Source_PathfindingModule_Public_PathfindingManager_h_65_PROLOG
#define ModuleTest_Plugins_PathfindingModule_Source_PathfindingModule_Public_PathfindingManager_h_68_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ModuleTest_Plugins_PathfindingModule_Source_PathfindingModule_Public_PathfindingManager_h_68_PRIVATE_PROPERTY_OFFSET \
	ModuleTest_Plugins_PathfindingModule_Source_PathfindingModule_Public_PathfindingManager_h_68_RPC_WRAPPERS \
	ModuleTest_Plugins_PathfindingModule_Source_PathfindingModule_Public_PathfindingManager_h_68_INCLASS \
	ModuleTest_Plugins_PathfindingModule_Source_PathfindingModule_Public_PathfindingManager_h_68_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ModuleTest_Plugins_PathfindingModule_Source_PathfindingModule_Public_PathfindingManager_h_68_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ModuleTest_Plugins_PathfindingModule_Source_PathfindingModule_Public_PathfindingManager_h_68_PRIVATE_PROPERTY_OFFSET \
	ModuleTest_Plugins_PathfindingModule_Source_PathfindingModule_Public_PathfindingManager_h_68_RPC_WRAPPERS_NO_PURE_DECLS \
	ModuleTest_Plugins_PathfindingModule_Source_PathfindingModule_Public_PathfindingManager_h_68_INCLASS_NO_PURE_DECLS \
	ModuleTest_Plugins_PathfindingModule_Source_PathfindingModule_Public_PathfindingManager_h_68_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PATHFINDINGMODULE_API UClass* StaticClass<class APathfindingManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ModuleTest_Plugins_PathfindingModule_Source_PathfindingModule_Public_PathfindingManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
