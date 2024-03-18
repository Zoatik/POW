// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pow/Public/GridCell.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridCell() {}
// Cross Module References
	POW_API UClass* Z_Construct_UClass_AGridCell_NoRegister();
	POW_API UClass* Z_Construct_UClass_AGridCell();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Pow();
// End Cross Module References
	void AGridCell::StaticRegisterNativesAGridCell()
	{
	}
	UClass* Z_Construct_UClass_AGridCell_NoRegister()
	{
		return AGridCell::StaticClass();
	}
	struct Z_Construct_UClass_AGridCell_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGridCell_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Pow,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridCell_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GridCell.h" },
		{ "ModuleRelativePath", "Public/GridCell.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGridCell_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGridCell>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGridCell_Statics::ClassParams = {
		&AGridCell::StaticClass,
		"Engine",
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
		METADATA_PARAMS(Z_Construct_UClass_AGridCell_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGridCell_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGridCell()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGridCell_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGridCell, 1500120349);
	template<> POW_API UClass* StaticClass<AGridCell>()
	{
		return AGridCell::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGridCell(Z_Construct_UClass_AGridCell, &AGridCell::StaticClass, TEXT("/Script/Pow"), TEXT("AGridCell"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGridCell);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
