// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pow/Public/TroupParent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTroupParent() {}
// Cross Module References
	POW_API UScriptStruct* Z_Construct_UScriptStruct_FTroupInfos();
	UPackage* Z_Construct_UPackage__Script_Pow();
	POW_API UClass* Z_Construct_UClass_ATroupParent_NoRegister();
	POW_API UClass* Z_Construct_UClass_ATroupParent();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
// End Cross Module References
class UScriptStruct* FTroupInfos::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern POW_API uint32 Get_Z_Construct_UScriptStruct_FTroupInfos_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTroupInfos, Z_Construct_UPackage__Script_Pow(), TEXT("TroupInfos"), sizeof(FTroupInfos), Get_Z_Construct_UScriptStruct_FTroupInfos_Hash());
	}
	return Singleton;
}
template<> POW_API UScriptStruct* StaticStruct<FTroupInfos>()
{
	return FTroupInfos::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTroupInfos(FTroupInfos::StaticStruct, TEXT("/Script/Pow"), TEXT("TroupInfos"), false, nullptr, nullptr);
static struct FScriptStruct_Pow_StaticRegisterNativesFTroupInfos
{
	FScriptStruct_Pow_StaticRegisterNativesFTroupInfos()
	{
		UScriptStruct::DeferCppStructOps<FTroupInfos>(FName(TEXT("TroupInfos")));
	}
} ScriptStruct_Pow_StaticRegisterNativesFTroupInfos;
	struct Z_Construct_UScriptStruct_FTroupInfos_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_utility_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_utility;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_damage_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_damage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_range_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_range;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_movement_ability_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_movement_ability;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_sp_abilities_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sp_abilities_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_sp_abilities;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_life_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_life;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTroupInfos_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TroupParent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTroupInfos_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTroupInfos>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTroupInfos_Statics::NewProp_name_MetaData[] = {
		{ "Category", "TroupInfos" },
		{ "ModuleRelativePath", "Public/TroupParent.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTroupInfos_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTroupInfos, name), METADATA_PARAMS(Z_Construct_UScriptStruct_FTroupInfos_Statics::NewProp_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTroupInfos_Statics::NewProp_name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTroupInfos_Statics::NewProp_utility_MetaData[] = {
		{ "Category", "TroupInfos" },
		{ "ModuleRelativePath", "Public/TroupParent.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTroupInfos_Statics::NewProp_utility = { "utility", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTroupInfos, utility), METADATA_PARAMS(Z_Construct_UScriptStruct_FTroupInfos_Statics::NewProp_utility_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTroupInfos_Statics::NewProp_utility_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTroupInfos_Statics::NewProp_damage_MetaData[] = {
		{ "Category", "TroupInfos" },
		{ "ModuleRelativePath", "Public/TroupParent.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FTroupInfos_Statics::NewProp_damage = { "damage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTroupInfos, damage), METADATA_PARAMS(Z_Construct_UScriptStruct_FTroupInfos_Statics::NewProp_damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTroupInfos_Statics::NewProp_damage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTroupInfos_Statics::NewProp_range_MetaData[] = {
		{ "Category", "TroupInfos" },
		{ "ModuleRelativePath", "Public/TroupParent.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FTroupInfos_Statics::NewProp_range = { "range", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTroupInfos, range), METADATA_PARAMS(Z_Construct_UScriptStruct_FTroupInfos_Statics::NewProp_range_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTroupInfos_Statics::NewProp_range_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTroupInfos_Statics::NewProp_movement_ability_MetaData[] = {
		{ "Category", "TroupInfos" },
		{ "ModuleRelativePath", "Public/TroupParent.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FTroupInfos_Statics::NewProp_movement_ability = { "movement_ability", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTroupInfos, movement_ability), METADATA_PARAMS(Z_Construct_UScriptStruct_FTroupInfos_Statics::NewProp_movement_ability_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTroupInfos_Statics::NewProp_movement_ability_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTroupInfos_Statics::NewProp_sp_abilities_Inner = { "sp_abilities", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTroupInfos_Statics::NewProp_sp_abilities_MetaData[] = {
		{ "Category", "TroupInfos" },
		{ "ModuleRelativePath", "Public/TroupParent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTroupInfos_Statics::NewProp_sp_abilities = { "sp_abilities", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTroupInfos, sp_abilities), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTroupInfos_Statics::NewProp_sp_abilities_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTroupInfos_Statics::NewProp_sp_abilities_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTroupInfos_Statics::NewProp_life_MetaData[] = {
		{ "Category", "TroupInfos" },
		{ "ModuleRelativePath", "Public/TroupParent.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FTroupInfos_Statics::NewProp_life = { "life", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTroupInfos, life), METADATA_PARAMS(Z_Construct_UScriptStruct_FTroupInfos_Statics::NewProp_life_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTroupInfos_Statics::NewProp_life_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTroupInfos_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTroupInfos_Statics::NewProp_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTroupInfos_Statics::NewProp_utility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTroupInfos_Statics::NewProp_damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTroupInfos_Statics::NewProp_range,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTroupInfos_Statics::NewProp_movement_ability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTroupInfos_Statics::NewProp_sp_abilities_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTroupInfos_Statics::NewProp_sp_abilities,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTroupInfos_Statics::NewProp_life,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTroupInfos_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Pow,
		nullptr,
		&NewStructOps,
		"TroupInfos",
		sizeof(FTroupInfos),
		alignof(FTroupInfos),
		Z_Construct_UScriptStruct_FTroupInfos_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTroupInfos_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTroupInfos_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTroupInfos_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTroupInfos()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTroupInfos_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Pow();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TroupInfos"), sizeof(FTroupInfos), Get_Z_Construct_UScriptStruct_FTroupInfos_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTroupInfos_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTroupInfos_Hash() { return 2203032195U; }
	DEFINE_FUNCTION(ATroupParent::execattack)
	{
		P_GET_OBJECT(ATroupParent,Z_Param_troup_to_attack);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->attack(Z_Param_troup_to_attack);
		P_NATIVE_END;
	}
	void ATroupParent::StaticRegisterNativesATroupParent()
	{
		UClass* Class = ATroupParent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "attack", &ATroupParent::execattack },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATroupParent_attack_Statics
	{
		struct TroupParent_eventattack_Parms
		{
			ATroupParent* troup_to_attack;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_troup_to_attack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATroupParent_attack_Statics::NewProp_troup_to_attack = { "troup_to_attack", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TroupParent_eventattack_Parms, troup_to_attack), Z_Construct_UClass_ATroupParent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATroupParent_attack_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "is dead" },
	};
#endif
	void Z_Construct_UFunction_ATroupParent_attack_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TroupParent_eventattack_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATroupParent_attack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TroupParent_eventattack_Parms), &Z_Construct_UFunction_ATroupParent_attack_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ATroupParent_attack_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATroupParent_attack_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATroupParent_attack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATroupParent_attack_Statics::NewProp_troup_to_attack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATroupParent_attack_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATroupParent_attack_Statics::Function_MetaDataParams[] = {
		{ "Category", "Actions" },
		{ "ModuleRelativePath", "Public/TroupParent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATroupParent_attack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATroupParent, nullptr, "attack", nullptr, nullptr, sizeof(TroupParent_eventattack_Parms), Z_Construct_UFunction_ATroupParent_attack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATroupParent_attack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATroupParent_attack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATroupParent_attack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATroupParent_attack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATroupParent_attack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATroupParent_NoRegister()
	{
		return ATroupParent::StaticClass();
	}
	struct Z_Construct_UClass_ATroupParent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_troup_infos_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_troup_infos;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATroupParent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Pow,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATroupParent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATroupParent_attack, "attack" }, // 3807247477
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATroupParent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TroupParent.h" },
		{ "ModuleRelativePath", "Public/TroupParent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATroupParent_Statics::NewProp_troup_infos_MetaData[] = {
		{ "Category", "TroupParent" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/TroupParent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATroupParent_Statics::NewProp_troup_infos = { "troup_infos", nullptr, (EPropertyFlags)0x0021080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATroupParent, troup_infos), Z_Construct_UScriptStruct_FTroupInfos, METADATA_PARAMS(Z_Construct_UClass_ATroupParent_Statics::NewProp_troup_infos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATroupParent_Statics::NewProp_troup_infos_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATroupParent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATroupParent_Statics::NewProp_troup_infos,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATroupParent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATroupParent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATroupParent_Statics::ClassParams = {
		&ATroupParent::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATroupParent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATroupParent_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATroupParent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATroupParent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATroupParent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATroupParent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATroupParent, 3933166768);
	template<> POW_API UClass* StaticClass<ATroupParent>()
	{
		return ATroupParent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATroupParent(Z_Construct_UClass_ATroupParent, &ATroupParent::StaticClass, TEXT("/Script/Pow"), TEXT("ATroupParent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATroupParent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
