// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pow/Public/Troup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTroup() {}
// Cross Module References
	POW_API UClass* Z_Construct_UClass_ATroup_NoRegister();
	POW_API UClass* Z_Construct_UClass_ATroup();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Pow();
// End Cross Module References
	void ATroup::StaticRegisterNativesATroup()
	{
	}
	UClass* Z_Construct_UClass_ATroup_NoRegister()
	{
		return ATroup::StaticClass();
	}
	struct Z_Construct_UClass_ATroup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATroup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Pow,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATroup_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Troup.h" },
		{ "ModuleRelativePath", "Public/Troup.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATroup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATroup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATroup_Statics::ClassParams = {
		&ATroup::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATroup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATroup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATroup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATroup_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATroup, 527847085);
	template<> POW_API UClass* StaticClass<ATroup>()
	{
		return ATroup::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATroup(Z_Construct_UClass_ATroup, &ATroup::StaticClass, TEXT("/Script/Pow"), TEXT("ATroup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATroup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
