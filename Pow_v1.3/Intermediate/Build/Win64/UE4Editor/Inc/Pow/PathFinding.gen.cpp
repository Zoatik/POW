// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pow/Public/PathFinding.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePathFinding() {}
// Cross Module References
	POW_API UScriptStruct* Z_Construct_UScriptStruct_FCell();
	UPackage* Z_Construct_UPackage__Script_Pow();
	POW_API UClass* Z_Construct_UClass_UPathFinding_NoRegister();
	POW_API UClass* Z_Construct_UClass_UPathFinding();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
// End Cross Module References
class UScriptStruct* FCell::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern POW_API uint32 Get_Z_Construct_UScriptStruct_FCell_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCell, Z_Construct_UPackage__Script_Pow(), TEXT("Cell"), sizeof(FCell), Get_Z_Construct_UScriptStruct_FCell_Hash());
	}
	return Singleton;
}
template<> POW_API UScriptStruct* StaticStruct<FCell>()
{
	return FCell::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCell(FCell::StaticStruct, TEXT("/Script/Pow"), TEXT("Cell"), false, nullptr, nullptr);
static struct FScriptStruct_Pow_StaticRegisterNativesFCell
{
	FScriptStruct_Pow_StaticRegisterNativesFCell()
	{
		UScriptStruct::DeferCppStructOps<FCell>(FName(TEXT("Cell")));
	}
} ScriptStruct_Pow_StaticRegisterNativesFCell;
	struct Z_Construct_UScriptStruct_FCell_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_index_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cell_state_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_cell_state;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_is_taken_MetaData[];
#endif
		static void NewProp_is_taken_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_is_taken;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_is_walkable_MetaData[];
#endif
		static void NewProp_is_walkable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_is_walkable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCell_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/PathFinding.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCell_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCell>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCell_Statics::NewProp_index_MetaData[] = {
		{ "Category", "Cell" },
		{ "ModuleRelativePath", "Public/PathFinding.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FCell_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCell, index), METADATA_PARAMS(Z_Construct_UScriptStruct_FCell_Statics::NewProp_index_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCell_Statics::NewProp_index_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCell_Statics::NewProp_cell_state_MetaData[] = {
		{ "Category", "Cell" },
		{ "Comment", "// index de la FCell dans le grid\n" },
		{ "ModuleRelativePath", "Public/PathFinding.h" },
		{ "ToolTip", "index de la FCell dans le grid" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FCell_Statics::NewProp_cell_state = { "cell_state", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCell, cell_state), METADATA_PARAMS(Z_Construct_UScriptStruct_FCell_Statics::NewProp_cell_state_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCell_Statics::NewProp_cell_state_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCell_Statics::NewProp_is_taken_MetaData[] = {
		{ "Category", "Cell" },
		{ "ModuleRelativePath", "Public/PathFinding.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCell_Statics::NewProp_is_taken_SetBit(void* Obj)
	{
		((FCell*)Obj)->is_taken = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCell_Statics::NewProp_is_taken = { "is_taken", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCell), &Z_Construct_UScriptStruct_FCell_Statics::NewProp_is_taken_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCell_Statics::NewProp_is_taken_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCell_Statics::NewProp_is_taken_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCell_Statics::NewProp_is_walkable_MetaData[] = {
		{ "Category", "Cell" },
		{ "ModuleRelativePath", "Public/PathFinding.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCell_Statics::NewProp_is_walkable_SetBit(void* Obj)
	{
		((FCell*)Obj)->is_walkable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCell_Statics::NewProp_is_walkable = { "is_walkable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCell), &Z_Construct_UScriptStruct_FCell_Statics::NewProp_is_walkable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCell_Statics::NewProp_is_walkable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCell_Statics::NewProp_is_walkable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCell_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCell_Statics::NewProp_index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCell_Statics::NewProp_cell_state,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCell_Statics::NewProp_is_taken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCell_Statics::NewProp_is_walkable,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCell_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Pow,
		nullptr,
		&NewStructOps,
		"Cell",
		sizeof(FCell),
		alignof(FCell),
		Z_Construct_UScriptStruct_FCell_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCell_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCell_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCell_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCell()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCell_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Pow();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Cell"), sizeof(FCell), Get_Z_Construct_UScriptStruct_FCell_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCell_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCell_Hash() { return 2834220461U; }
	DEFINE_FUNCTION(UPathFinding::execfind_path)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_row);
		P_GET_PROPERTY(FIntProperty,Z_Param_col);
		P_GET_PROPERTY(FIntProperty,Z_Param_start);
		P_GET_PROPERTY(FIntProperty,Z_Param_target);
		P_GET_TARRAY(FCell,Z_Param_grid_cells);
		P_GET_UBOOL(Z_Param_allow_diag_path);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=UPathFinding::find_path(Z_Param_row,Z_Param_col,Z_Param_start,Z_Param_target,Z_Param_grid_cells,Z_Param_allow_diag_path);
		P_NATIVE_END;
	}
	void UPathFinding::StaticRegisterNativesUPathFinding()
	{
		UClass* Class = UPathFinding::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "find_path", &UPathFinding::execfind_path },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPathFinding_find_path_Statics
	{
		struct PathFinding_eventfind_path_Parms
		{
			int32 row;
			int32 col;
			int32 start;
			int32 target;
			TArray<FCell> grid_cells;
			bool allow_diag_path;
			TArray<int32> ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_row;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_col;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_start;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_target;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_grid_cells_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_grid_cells;
		static void NewProp_allow_diag_path_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_allow_diag_path;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPathFinding_find_path_Statics::NewProp_row = { "row", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PathFinding_eventfind_path_Parms, row), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPathFinding_find_path_Statics::NewProp_col = { "col", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PathFinding_eventfind_path_Parms, col), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPathFinding_find_path_Statics::NewProp_start = { "start", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PathFinding_eventfind_path_Parms, start), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPathFinding_find_path_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PathFinding_eventfind_path_Parms, target), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPathFinding_find_path_Statics::NewProp_grid_cells_Inner = { "grid_cells", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCell, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPathFinding_find_path_Statics::NewProp_grid_cells = { "grid_cells", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PathFinding_eventfind_path_Parms, grid_cells), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPathFinding_find_path_Statics::NewProp_allow_diag_path_SetBit(void* Obj)
	{
		((PathFinding_eventfind_path_Parms*)Obj)->allow_diag_path = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPathFinding_find_path_Statics::NewProp_allow_diag_path = { "allow_diag_path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PathFinding_eventfind_path_Parms), &Z_Construct_UFunction_UPathFinding_find_path_Statics::NewProp_allow_diag_path_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPathFinding_find_path_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPathFinding_find_path_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PathFinding_eventfind_path_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPathFinding_find_path_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathFinding_find_path_Statics::NewProp_row,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathFinding_find_path_Statics::NewProp_col,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathFinding_find_path_Statics::NewProp_start,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathFinding_find_path_Statics::NewProp_target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathFinding_find_path_Statics::NewProp_grid_cells_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathFinding_find_path_Statics::NewProp_grid_cells,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathFinding_find_path_Statics::NewProp_allow_diag_path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathFinding_find_path_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathFinding_find_path_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPathFinding_find_path_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities" },
		{ "ModuleRelativePath", "Public/PathFinding.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPathFinding_find_path_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPathFinding, nullptr, "find_path", nullptr, nullptr, sizeof(PathFinding_eventfind_path_Parms), Z_Construct_UFunction_UPathFinding_find_path_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPathFinding_find_path_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPathFinding_find_path_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPathFinding_find_path_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPathFinding_find_path()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPathFinding_find_path_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPathFinding_NoRegister()
	{
		return UPathFinding::StaticClass();
	}
	struct Z_Construct_UClass_UPathFinding_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPathFinding_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Pow,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPathFinding_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPathFinding_find_path, "find_path" }, // 700463031
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPathFinding_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PathFinding.h" },
		{ "ModuleRelativePath", "Public/PathFinding.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPathFinding_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPathFinding>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPathFinding_Statics::ClassParams = {
		&UPathFinding::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPathFinding_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPathFinding_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPathFinding()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPathFinding_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPathFinding, 1979048800);
	template<> POW_API UClass* StaticClass<UPathFinding>()
	{
		return UPathFinding::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPathFinding(Z_Construct_UClass_UPathFinding, &UPathFinding::StaticClass, TEXT("/Script/Pow"), TEXT("UPathFinding"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPathFinding);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
