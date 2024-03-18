// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ATroupParent;
#ifdef POW_TroupParent_generated_h
#error "TroupParent.generated.h already included, missing '#pragma once' in TroupParent.h"
#endif
#define POW_TroupParent_generated_h

#define Pow_v1_2_Source_Pow_Public_TroupParent_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTroupInfos_Statics; \
	POW_API static class UScriptStruct* StaticStruct();


template<> POW_API UScriptStruct* StaticStruct<struct FTroupInfos>();

#define Pow_v1_2_Source_Pow_Public_TroupParent_h_48_SPARSE_DATA
#define Pow_v1_2_Source_Pow_Public_TroupParent_h_48_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execattack);


#define Pow_v1_2_Source_Pow_Public_TroupParent_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execattack);


#define Pow_v1_2_Source_Pow_Public_TroupParent_h_48_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATroupParent(); \
	friend struct Z_Construct_UClass_ATroupParent_Statics; \
public: \
	DECLARE_CLASS(ATroupParent, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Pow"), NO_API) \
	DECLARE_SERIALIZER(ATroupParent)


#define Pow_v1_2_Source_Pow_Public_TroupParent_h_48_INCLASS \
private: \
	static void StaticRegisterNativesATroupParent(); \
	friend struct Z_Construct_UClass_ATroupParent_Statics; \
public: \
	DECLARE_CLASS(ATroupParent, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Pow"), NO_API) \
	DECLARE_SERIALIZER(ATroupParent)


#define Pow_v1_2_Source_Pow_Public_TroupParent_h_48_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATroupParent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATroupParent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATroupParent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATroupParent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATroupParent(ATroupParent&&); \
	NO_API ATroupParent(const ATroupParent&); \
public:


#define Pow_v1_2_Source_Pow_Public_TroupParent_h_48_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATroupParent(ATroupParent&&); \
	NO_API ATroupParent(const ATroupParent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATroupParent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATroupParent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATroupParent)


#define Pow_v1_2_Source_Pow_Public_TroupParent_h_48_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__troup_infos() { return STRUCT_OFFSET(ATroupParent, troup_infos); }


#define Pow_v1_2_Source_Pow_Public_TroupParent_h_45_PROLOG
#define Pow_v1_2_Source_Pow_Public_TroupParent_h_48_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Pow_v1_2_Source_Pow_Public_TroupParent_h_48_PRIVATE_PROPERTY_OFFSET \
	Pow_v1_2_Source_Pow_Public_TroupParent_h_48_SPARSE_DATA \
	Pow_v1_2_Source_Pow_Public_TroupParent_h_48_RPC_WRAPPERS \
	Pow_v1_2_Source_Pow_Public_TroupParent_h_48_INCLASS \
	Pow_v1_2_Source_Pow_Public_TroupParent_h_48_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Pow_v1_2_Source_Pow_Public_TroupParent_h_48_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Pow_v1_2_Source_Pow_Public_TroupParent_h_48_PRIVATE_PROPERTY_OFFSET \
	Pow_v1_2_Source_Pow_Public_TroupParent_h_48_SPARSE_DATA \
	Pow_v1_2_Source_Pow_Public_TroupParent_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	Pow_v1_2_Source_Pow_Public_TroupParent_h_48_INCLASS_NO_PURE_DECLS \
	Pow_v1_2_Source_Pow_Public_TroupParent_h_48_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> POW_API UClass* StaticClass<class ATroupParent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Pow_v1_2_Source_Pow_Public_TroupParent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
