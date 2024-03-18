// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FCell;
#ifdef POW_PathFinding_generated_h
#error "PathFinding.generated.h already included, missing '#pragma once' in PathFinding.h"
#endif
#define POW_PathFinding_generated_h

#define Pow_v1_2_Source_Pow_Public_PathFinding_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCell_Statics; \
	POW_API static class UScriptStruct* StaticStruct();


template<> POW_API UScriptStruct* StaticStruct<struct FCell>();

#define Pow_v1_2_Source_Pow_Public_PathFinding_h_82_SPARSE_DATA
#define Pow_v1_2_Source_Pow_Public_PathFinding_h_82_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execfind_path);


#define Pow_v1_2_Source_Pow_Public_PathFinding_h_82_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execfind_path);


#define Pow_v1_2_Source_Pow_Public_PathFinding_h_82_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPathFinding(); \
	friend struct Z_Construct_UClass_UPathFinding_Statics; \
public: \
	DECLARE_CLASS(UPathFinding, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Pow"), NO_API) \
	DECLARE_SERIALIZER(UPathFinding)


#define Pow_v1_2_Source_Pow_Public_PathFinding_h_82_INCLASS \
private: \
	static void StaticRegisterNativesUPathFinding(); \
	friend struct Z_Construct_UClass_UPathFinding_Statics; \
public: \
	DECLARE_CLASS(UPathFinding, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Pow"), NO_API) \
	DECLARE_SERIALIZER(UPathFinding)


#define Pow_v1_2_Source_Pow_Public_PathFinding_h_82_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPathFinding(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPathFinding) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPathFinding); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPathFinding); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPathFinding(UPathFinding&&); \
	NO_API UPathFinding(const UPathFinding&); \
public:


#define Pow_v1_2_Source_Pow_Public_PathFinding_h_82_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPathFinding(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPathFinding(UPathFinding&&); \
	NO_API UPathFinding(const UPathFinding&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPathFinding); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPathFinding); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPathFinding)


#define Pow_v1_2_Source_Pow_Public_PathFinding_h_82_PRIVATE_PROPERTY_OFFSET
#define Pow_v1_2_Source_Pow_Public_PathFinding_h_79_PROLOG
#define Pow_v1_2_Source_Pow_Public_PathFinding_h_82_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Pow_v1_2_Source_Pow_Public_PathFinding_h_82_PRIVATE_PROPERTY_OFFSET \
	Pow_v1_2_Source_Pow_Public_PathFinding_h_82_SPARSE_DATA \
	Pow_v1_2_Source_Pow_Public_PathFinding_h_82_RPC_WRAPPERS \
	Pow_v1_2_Source_Pow_Public_PathFinding_h_82_INCLASS \
	Pow_v1_2_Source_Pow_Public_PathFinding_h_82_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Pow_v1_2_Source_Pow_Public_PathFinding_h_82_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Pow_v1_2_Source_Pow_Public_PathFinding_h_82_PRIVATE_PROPERTY_OFFSET \
	Pow_v1_2_Source_Pow_Public_PathFinding_h_82_SPARSE_DATA \
	Pow_v1_2_Source_Pow_Public_PathFinding_h_82_RPC_WRAPPERS_NO_PURE_DECLS \
	Pow_v1_2_Source_Pow_Public_PathFinding_h_82_INCLASS_NO_PURE_DECLS \
	Pow_v1_2_Source_Pow_Public_PathFinding_h_82_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> POW_API UClass* StaticClass<class UPathFinding>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Pow_v1_2_Source_Pow_Public_PathFinding_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
