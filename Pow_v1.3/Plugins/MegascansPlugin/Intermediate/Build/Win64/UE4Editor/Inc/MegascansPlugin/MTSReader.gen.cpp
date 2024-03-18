// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MegascansPlugin/Private/Utilities/MTSReader.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMTSReader() {}
// Cross Module References
	MEGASCANSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FMTSJson();
	UPackage* Z_Construct_UPackage__Script_MegascansPlugin();
	MEGASCANSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FNamingConvention();
	MEGASCANSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FMapNameOverrides();
	MEGASCANSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FMeta();
	MEGASCANSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FMaterials();
	MEGASCANSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FTextureSets();
	MEGASCANSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FComponents();
	MEGASCANSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FMeshList();
	MEGASCANSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FPackedTex();
	MEGASCANSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FLodList();
	MEGASCANSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FChannelsData();
// End Cross Module References
class UScriptStruct* FMTSJson::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MEGASCANSPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FMTSJson_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMTSJson, Z_Construct_UPackage__Script_MegascansPlugin(), TEXT("MTSJson"), sizeof(FMTSJson), Get_Z_Construct_UScriptStruct_FMTSJson_Hash());
	}
	return Singleton;
}
template<> MEGASCANSPLUGIN_API UScriptStruct* StaticStruct<FMTSJson>()
{
	return FMTSJson::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMTSJson(FMTSJson::StaticStruct, TEXT("/Script/MegascansPlugin"), TEXT("MTSJson"), false, nullptr, nullptr);
static struct FScriptStruct_MegascansPlugin_StaticRegisterNativesFMTSJson
{
	FScriptStruct_MegascansPlugin_StaticRegisterNativesFMTSJson()
	{
		UScriptStruct::DeferCppStructOps<FMTSJson>(FName(TEXT("MTSJson")));
	}
} ScriptStruct_MegascansPlugin_StaticRegisterNativesFMTSJson;
	struct Z_Construct_UScriptStruct_FMTSJson_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_minLOD_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_minLOD;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_scriptFilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_scriptFilePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_message_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_message;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_version_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt8PropertyParams NewProp_version;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_resolution_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_resolution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_resolutionValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt16PropertyParams NewProp_resolutionValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_category_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_category;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_type_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_id_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_id;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_path_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_path;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_exportAs_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_exportAs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_textureFormat_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_textureFormat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_meshFormat_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_meshFormat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_previewImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_previewImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_averageColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_averageColor;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_tags_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tags_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_tags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_activeLOD_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_activeLOD;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_categories_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_categories_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_categories;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isExternal_MetaData[];
#endif
		static void NewProp_isExternal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isExternal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_exportPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_exportPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_namingConvention_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_namingConvention;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_folderNamingConvention_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_folderNamingConvention;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mapNameOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mapNameOverride;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_meta_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_meta_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_meta;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_materials_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_materials_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_materials;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_textureSets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_textureSets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_textureSets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_workflow_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_workflow;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_components_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_components_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_components;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_meshList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_meshList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_meshList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_packedTextures_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_packedTextures_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_packedTextures;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_lodList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lodList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_lodList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_meshVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt8PropertyParams NewProp_meshVersion;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_components_billboard_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_components_billboard_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_components_billboard;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isCustom_MetaData[];
#endif
		static void NewProp_isCustom_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isCustom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isModularAsset_MetaData[];
#endif
		static void NewProp_isModularAsset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isModularAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMTSJson_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMTSJson_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMTSJson>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_minLOD_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_minLOD = { "minLOD", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMTSJson, minLOD), METADATA_PARAMS(Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_minLOD_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_minLOD_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_scriptFilePath_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_scriptFilePath = { "scriptFilePath", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMTSJson, scriptFilePath), METADATA_PARAMS(Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_scriptFilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_scriptFilePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_message_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_message = { "message", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMTSJson, message), METADATA_PARAMS(Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_message_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_message_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_version_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	const UE4CodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_version = { "version", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMTSJson, version), METADATA_PARAMS(Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_version_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_version_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_resolution_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_resolution = { "resolution", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMTSJson, resolution), METADATA_PARAMS(Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_resolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_resolution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_resolutionValue_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	const UE4CodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_resolutionValue = { "resolutionValue", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMTSJson, resolutionValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_resolutionValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_resolutionValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_category_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_category = { "category", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMTSJson, category), METADATA_PARAMS(Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_category_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_category_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_type_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMTSJson, type), METADATA_PARAMS(Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_id_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMTSJson, id), METADATA_PARAMS(Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_id_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_name_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMTSJson, name), METADATA_PARAMS(Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_path_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_path = { "path", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMTSJson, path), METADATA_PARAMS(Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_path_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_path_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_exportAs_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_exportAs = { "exportAs", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMTSJson, exportAs), METADATA_PARAMS(Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_exportAs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_exportAs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_textureFormat_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_textureFormat = { "textureFormat", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMTSJson, textureFormat), METADATA_PARAMS(Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_textureFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_textureFormat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_meshFormat_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_meshFormat = { "meshFormat", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMTSJson, meshFormat), METADATA_PARAMS(Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_meshFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_meshFormat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_previewImage_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_previewImage = { "previewImage", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMTSJson, previewImage), METADATA_PARAMS(Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_previewImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_previewImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_averageColor_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_averageColor = { "averageColor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMTSJson, averageColor), METADATA_PARAMS(Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_averageColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_averageColor_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_tags_Inner = { "tags", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_tags_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_tags = { "tags", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMTSJson, tags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_tags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_tags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_activeLOD_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_activeLOD = { "activeLOD", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMTSJson, activeLOD), METADATA_PARAMS(Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_activeLOD_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_activeLOD_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_categories_Inner = { "categories", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_categories_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_categories = { "categories", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMTSJson, categories), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_categories_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_categories_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_isExternal_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_isExternal_SetBit(void* Obj)
	{
		((FMTSJson*)Obj)->isExternal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_isExternal = { "isExternal", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMTSJson), &Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_isExternal_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_isExternal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_isExternal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_exportPath_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_exportPath = { "exportPath", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMTSJson, exportPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_exportPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_exportPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_namingConvention_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_namingConvention = { "namingConvention", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMTSJson, namingConvention), Z_Construct_UScriptStruct_FNamingConvention, METADATA_PARAMS(Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_namingConvention_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_namingConvention_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_folderNamingConvention_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_folderNamingConvention = { "folderNamingConvention", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMTSJson, folderNamingConvention), METADATA_PARAMS(Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_folderNamingConvention_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_folderNamingConvention_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_mapNameOverride_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_mapNameOverride = { "mapNameOverride", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMTSJson, mapNameOverride), Z_Construct_UScriptStruct_FMapNameOverrides, METADATA_PARAMS(Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_mapNameOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_mapNameOverride_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_meta_Inner = { "meta", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMeta, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_meta_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_meta = { "meta", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMTSJson, meta), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_meta_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_meta_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_materials_Inner = { "materials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMaterials, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_materials_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_materials = { "materials", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMTSJson, materials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_materials_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_materials_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_textureSets_Inner = { "textureSets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTextureSets, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_textureSets_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_textureSets = { "textureSets", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMTSJson, textureSets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_textureSets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_textureSets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_workflow_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_workflow = { "workflow", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMTSJson, workflow), METADATA_PARAMS(Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_workflow_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_workflow_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_components_Inner = { "components", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FComponents, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_components_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_components = { "components", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMTSJson, components), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_components_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_components_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_meshList_Inner = { "meshList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMeshList, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_meshList_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_meshList = { "meshList", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMTSJson, meshList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_meshList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_meshList_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_packedTextures_Inner = { "packedTextures", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPackedTex, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_packedTextures_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_packedTextures = { "packedTextures", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMTSJson, packedTextures), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_packedTextures_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_packedTextures_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_lodList_Inner = { "lodList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLodList, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_lodList_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_lodList = { "lodList", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMTSJson, lodList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_lodList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_lodList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_meshVersion_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	const UE4CodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_meshVersion = { "meshVersion", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMTSJson, meshVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_meshVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_meshVersion_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_components_billboard_Inner = { "components_billboard", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_components_billboard_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_components_billboard = { "components_billboard", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMTSJson, components_billboard), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_components_billboard_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_components_billboard_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_isCustom_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_isCustom_SetBit(void* Obj)
	{
		((FMTSJson*)Obj)->isCustom = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_isCustom = { "isCustom", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMTSJson), &Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_isCustom_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_isCustom_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_isCustom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_isModularAsset_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_isModularAsset_SetBit(void* Obj)
	{
		((FMTSJson*)Obj)->isModularAsset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_isModularAsset = { "isModularAsset", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMTSJson), &Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_isModularAsset_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_isModularAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_isModularAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMTSJson_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_minLOD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_scriptFilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_version,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_resolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_resolutionValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_category,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_exportAs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_textureFormat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_meshFormat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_previewImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_averageColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_tags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_tags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_activeLOD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_categories_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_categories,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_isExternal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_exportPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_namingConvention,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_folderNamingConvention,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_mapNameOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_meta_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_meta,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_materials_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_materials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_textureSets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_textureSets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_workflow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_components_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_components,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_meshList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_meshList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_packedTextures_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_packedTextures,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_lodList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_lodList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_meshVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_components_billboard_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_components_billboard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_isCustom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMTSJson_Statics::NewProp_isModularAsset,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMTSJson_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MegascansPlugin,
		nullptr,
		&NewStructOps,
		"MTSJson",
		sizeof(FMTSJson),
		alignof(FMTSJson),
		Z_Construct_UScriptStruct_FMTSJson_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMTSJson_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMTSJson_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMTSJson_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMTSJson()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMTSJson_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MegascansPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MTSJson"), sizeof(FMTSJson), Get_Z_Construct_UScriptStruct_FMTSJson_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMTSJson_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMTSJson_Hash() { return 1392113700U; }
class UScriptStruct* FPackedTex::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MEGASCANSPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FPackedTex_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPackedTex, Z_Construct_UPackage__Script_MegascansPlugin(), TEXT("PackedTex"), sizeof(FPackedTex), Get_Z_Construct_UScriptStruct_FPackedTex_Hash());
	}
	return Singleton;
}
template<> MEGASCANSPLUGIN_API UScriptStruct* StaticStruct<FPackedTex>()
{
	return FPackedTex::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPackedTex(FPackedTex::StaticStruct, TEXT("/Script/MegascansPlugin"), TEXT("PackedTex"), false, nullptr, nullptr);
static struct FScriptStruct_MegascansPlugin_StaticRegisterNativesFPackedTex
{
	FScriptStruct_MegascansPlugin_StaticRegisterNativesFPackedTex()
	{
		UScriptStruct::DeferCppStructOps<FPackedTex>(FName(TEXT("PackedTex")));
	}
} ScriptStruct_MegascansPlugin_StaticRegisterNativesFPackedTex;
	struct Z_Construct_UScriptStruct_FPackedTex_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_namingConvention_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_namingConvention;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_format_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_format;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_type_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_resolution_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_resolution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_nameOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_nameOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lod_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_lod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_path_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_path;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_channelsData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_channelsData;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_textureSets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_textureSets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_textureSets;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPackedTex_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPackedTex_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPackedTex>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPackedTex_Statics::NewProp_namingConvention_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPackedTex_Statics::NewProp_namingConvention = { "namingConvention", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPackedTex, namingConvention), METADATA_PARAMS(Z_Construct_UScriptStruct_FPackedTex_Statics::NewProp_namingConvention_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPackedTex_Statics::NewProp_namingConvention_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPackedTex_Statics::NewProp_format_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPackedTex_Statics::NewProp_format = { "format", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPackedTex, format), METADATA_PARAMS(Z_Construct_UScriptStruct_FPackedTex_Statics::NewProp_format_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPackedTex_Statics::NewProp_format_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPackedTex_Statics::NewProp_type_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPackedTex_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPackedTex, type), METADATA_PARAMS(Z_Construct_UScriptStruct_FPackedTex_Statics::NewProp_type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPackedTex_Statics::NewProp_type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPackedTex_Statics::NewProp_resolution_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPackedTex_Statics::NewProp_resolution = { "resolution", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPackedTex, resolution), METADATA_PARAMS(Z_Construct_UScriptStruct_FPackedTex_Statics::NewProp_resolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPackedTex_Statics::NewProp_resolution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPackedTex_Statics::NewProp_name_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPackedTex_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPackedTex, name), METADATA_PARAMS(Z_Construct_UScriptStruct_FPackedTex_Statics::NewProp_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPackedTex_Statics::NewProp_name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPackedTex_Statics::NewProp_nameOverride_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPackedTex_Statics::NewProp_nameOverride = { "nameOverride", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPackedTex, nameOverride), METADATA_PARAMS(Z_Construct_UScriptStruct_FPackedTex_Statics::NewProp_nameOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPackedTex_Statics::NewProp_nameOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPackedTex_Statics::NewProp_lod_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPackedTex_Statics::NewProp_lod = { "lod", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPackedTex, lod), METADATA_PARAMS(Z_Construct_UScriptStruct_FPackedTex_Statics::NewProp_lod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPackedTex_Statics::NewProp_lod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPackedTex_Statics::NewProp_path_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPackedTex_Statics::NewProp_path = { "path", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPackedTex, path), METADATA_PARAMS(Z_Construct_UScriptStruct_FPackedTex_Statics::NewProp_path_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPackedTex_Statics::NewProp_path_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPackedTex_Statics::NewProp_channelsData_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPackedTex_Statics::NewProp_channelsData = { "channelsData", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPackedTex, channelsData), Z_Construct_UScriptStruct_FChannelsData, METADATA_PARAMS(Z_Construct_UScriptStruct_FPackedTex_Statics::NewProp_channelsData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPackedTex_Statics::NewProp_channelsData_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPackedTex_Statics::NewProp_textureSets_Inner = { "textureSets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPackedTex_Statics::NewProp_textureSets_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPackedTex_Statics::NewProp_textureSets = { "textureSets", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPackedTex, textureSets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPackedTex_Statics::NewProp_textureSets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPackedTex_Statics::NewProp_textureSets_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPackedTex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPackedTex_Statics::NewProp_namingConvention,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPackedTex_Statics::NewProp_format,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPackedTex_Statics::NewProp_type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPackedTex_Statics::NewProp_resolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPackedTex_Statics::NewProp_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPackedTex_Statics::NewProp_nameOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPackedTex_Statics::NewProp_lod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPackedTex_Statics::NewProp_path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPackedTex_Statics::NewProp_channelsData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPackedTex_Statics::NewProp_textureSets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPackedTex_Statics::NewProp_textureSets,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPackedTex_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MegascansPlugin,
		nullptr,
		&NewStructOps,
		"PackedTex",
		sizeof(FPackedTex),
		alignof(FPackedTex),
		Z_Construct_UScriptStruct_FPackedTex_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPackedTex_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPackedTex_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPackedTex_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPackedTex()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPackedTex_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MegascansPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PackedTex"), sizeof(FPackedTex), Get_Z_Construct_UScriptStruct_FPackedTex_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPackedTex_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPackedTex_Hash() { return 2350345682U; }
class UScriptStruct* FTextureSets::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MEGASCANSPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FTextureSets_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTextureSets, Z_Construct_UPackage__Script_MegascansPlugin(), TEXT("TextureSets"), sizeof(FTextureSets), Get_Z_Construct_UScriptStruct_FTextureSets_Hash());
	}
	return Singleton;
}
template<> MEGASCANSPLUGIN_API UScriptStruct* StaticStruct<FTextureSets>()
{
	return FTextureSets::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTextureSets(FTextureSets::StaticStruct, TEXT("/Script/MegascansPlugin"), TEXT("TextureSets"), false, nullptr, nullptr);
static struct FScriptStruct_MegascansPlugin_StaticRegisterNativesFTextureSets
{
	FScriptStruct_MegascansPlugin_StaticRegisterNativesFTextureSets()
	{
		UScriptStruct::DeferCppStructOps<FTextureSets>(FName(TEXT("TextureSets")));
	}
} ScriptStruct_MegascansPlugin_StaticRegisterNativesFTextureSets;
	struct Z_Construct_UScriptStruct_FTextureSets_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_textureSetName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_textureSetName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isUdim_MetaData[];
#endif
		static void NewProp_isUdim_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isUdim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_udimTile_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_udimTile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureSets_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTextureSets_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTextureSets>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureSets_Statics::NewProp_textureSetName_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTextureSets_Statics::NewProp_textureSetName = { "textureSetName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTextureSets, textureSetName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureSets_Statics::NewProp_textureSetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureSets_Statics::NewProp_textureSetName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureSets_Statics::NewProp_isUdim_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTextureSets_Statics::NewProp_isUdim_SetBit(void* Obj)
	{
		((FTextureSets*)Obj)->isUdim = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTextureSets_Statics::NewProp_isUdim = { "isUdim", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTextureSets), &Z_Construct_UScriptStruct_FTextureSets_Statics::NewProp_isUdim_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureSets_Statics::NewProp_isUdim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureSets_Statics::NewProp_isUdim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureSets_Statics::NewProp_udimTile_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTextureSets_Statics::NewProp_udimTile = { "udimTile", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTextureSets, udimTile), METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureSets_Statics::NewProp_udimTile_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureSets_Statics::NewProp_udimTile_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTextureSets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureSets_Statics::NewProp_textureSetName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureSets_Statics::NewProp_isUdim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureSets_Statics::NewProp_udimTile,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTextureSets_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MegascansPlugin,
		nullptr,
		&NewStructOps,
		"TextureSets",
		sizeof(FTextureSets),
		alignof(FTextureSets),
		Z_Construct_UScriptStruct_FTextureSets_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureSets_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureSets_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureSets_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTextureSets()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTextureSets_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MegascansPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TextureSets"), sizeof(FTextureSets), Get_Z_Construct_UScriptStruct_FTextureSets_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTextureSets_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTextureSets_Hash() { return 2284831164U; }
class UScriptStruct* FMaterials::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MEGASCANSPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FMaterials_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterials, Z_Construct_UPackage__Script_MegascansPlugin(), TEXT("Materials"), sizeof(FMaterials), Get_Z_Construct_UScriptStruct_FMaterials_Hash());
	}
	return Singleton;
}
template<> MEGASCANSPLUGIN_API UScriptStruct* StaticStruct<FMaterials>()
{
	return FMaterials::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMaterials(FMaterials::StaticStruct, TEXT("/Script/MegascansPlugin"), TEXT("Materials"), false, nullptr, nullptr);
static struct FScriptStruct_MegascansPlugin_StaticRegisterNativesFMaterials
{
	FScriptStruct_MegascansPlugin_StaticRegisterNativesFMaterials()
	{
		UScriptStruct::DeferCppStructOps<FMaterials>(FName(TEXT("Materials")));
	}
} ScriptStruct_MegascansPlugin_StaticRegisterNativesFMaterials;
	struct Z_Construct_UScriptStruct_FMaterials_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_opacityType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_opacityType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_materialName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_materialName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_materialId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_materialId;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_textureSets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_textureSets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_textureSets;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterials_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMaterials_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterials>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterials_Statics::NewProp_opacityType_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMaterials_Statics::NewProp_opacityType = { "opacityType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterials, opacityType), METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterials_Statics::NewProp_opacityType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterials_Statics::NewProp_opacityType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterials_Statics::NewProp_materialName_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMaterials_Statics::NewProp_materialName = { "materialName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterials, materialName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterials_Statics::NewProp_materialName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterials_Statics::NewProp_materialName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterials_Statics::NewProp_materialId_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMaterials_Statics::NewProp_materialId = { "materialId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterials, materialId), METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterials_Statics::NewProp_materialId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterials_Statics::NewProp_materialId_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMaterials_Statics::NewProp_textureSets_Inner = { "textureSets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterials_Statics::NewProp_textureSets_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterials_Statics::NewProp_textureSets = { "textureSets", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterials, textureSets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterials_Statics::NewProp_textureSets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterials_Statics::NewProp_textureSets_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterials_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterials_Statics::NewProp_opacityType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterials_Statics::NewProp_materialName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterials_Statics::NewProp_materialId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterials_Statics::NewProp_textureSets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterials_Statics::NewProp_textureSets,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterials_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MegascansPlugin,
		nullptr,
		&NewStructOps,
		"Materials",
		sizeof(FMaterials),
		alignof(FMaterials),
		Z_Construct_UScriptStruct_FMaterials_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterials_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterials_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterials_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMaterials()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMaterials_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MegascansPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Materials"), sizeof(FMaterials), Get_Z_Construct_UScriptStruct_FMaterials_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMaterials_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMaterials_Hash() { return 3024265866U; }
class UScriptStruct* FNamingConvention::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MEGASCANSPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FNamingConvention_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNamingConvention, Z_Construct_UPackage__Script_MegascansPlugin(), TEXT("NamingConvention"), sizeof(FNamingConvention), Get_Z_Construct_UScriptStruct_FNamingConvention_Hash());
	}
	return Singleton;
}
template<> MEGASCANSPLUGIN_API UScriptStruct* StaticStruct<FNamingConvention>()
{
	return FNamingConvention::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNamingConvention(FNamingConvention::StaticStruct, TEXT("/Script/MegascansPlugin"), TEXT("NamingConvention"), false, nullptr, nullptr);
static struct FScriptStruct_MegascansPlugin_StaticRegisterNativesFNamingConvention
{
	FScriptStruct_MegascansPlugin_StaticRegisterNativesFNamingConvention()
	{
		UScriptStruct::DeferCppStructOps<FNamingConvention>(FName(TEXT("NamingConvention")));
	}
} ScriptStruct_MegascansPlugin_StaticRegisterNativesFNamingConvention;
	struct Z_Construct_UScriptStruct_FNamingConvention_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_texture_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_texture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_model_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_model;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_folder_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_folder;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamingConvention_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNamingConvention_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNamingConvention>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamingConvention_Statics::NewProp_texture_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNamingConvention_Statics::NewProp_texture = { "texture", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNamingConvention, texture), METADATA_PARAMS(Z_Construct_UScriptStruct_FNamingConvention_Statics::NewProp_texture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamingConvention_Statics::NewProp_texture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamingConvention_Statics::NewProp_model_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNamingConvention_Statics::NewProp_model = { "model", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNamingConvention, model), METADATA_PARAMS(Z_Construct_UScriptStruct_FNamingConvention_Statics::NewProp_model_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamingConvention_Statics::NewProp_model_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamingConvention_Statics::NewProp_folder_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNamingConvention_Statics::NewProp_folder = { "folder", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNamingConvention, folder), METADATA_PARAMS(Z_Construct_UScriptStruct_FNamingConvention_Statics::NewProp_folder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamingConvention_Statics::NewProp_folder_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNamingConvention_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamingConvention_Statics::NewProp_texture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamingConvention_Statics::NewProp_model,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamingConvention_Statics::NewProp_folder,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNamingConvention_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MegascansPlugin,
		nullptr,
		&NewStructOps,
		"NamingConvention",
		sizeof(FNamingConvention),
		alignof(FNamingConvention),
		Z_Construct_UScriptStruct_FNamingConvention_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamingConvention_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNamingConvention_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamingConvention_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNamingConvention()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNamingConvention_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MegascansPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NamingConvention"), sizeof(FNamingConvention), Get_Z_Construct_UScriptStruct_FNamingConvention_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNamingConvention_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNamingConvention_Hash() { return 2301568111U; }
class UScriptStruct* FMapNameOverrides::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MEGASCANSPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FMapNameOverrides_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMapNameOverrides, Z_Construct_UPackage__Script_MegascansPlugin(), TEXT("MapNameOverrides"), sizeof(FMapNameOverrides), Get_Z_Construct_UScriptStruct_FMapNameOverrides_Hash());
	}
	return Singleton;
}
template<> MEGASCANSPLUGIN_API UScriptStruct* StaticStruct<FMapNameOverrides>()
{
	return FMapNameOverrides::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMapNameOverrides(FMapNameOverrides::StaticStruct, TEXT("/Script/MegascansPlugin"), TEXT("MapNameOverrides"), false, nullptr, nullptr);
static struct FScriptStruct_MegascansPlugin_StaticRegisterNativesFMapNameOverrides
{
	FScriptStruct_MegascansPlugin_StaticRegisterNativesFMapNameOverrides()
	{
		UScriptStruct::DeferCppStructOps<FMapNameOverrides>(FName(TEXT("MapNameOverrides")));
	}
} ScriptStruct_MegascansPlugin_StaticRegisterNativesFMapNameOverrides;
	struct Z_Construct_UScriptStruct_FMapNameOverrides_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_albedo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_albedo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ao_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ao;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bump_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_bump;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cavity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_cavity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_curvature_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_curvature;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_diffuse_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_diffuse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_displacement_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_displacement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fuzz_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_fuzz;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gloss_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_gloss;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mask_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_mask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_metalness_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_metalness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_normal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_normal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_normalObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_normalObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_roughness_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_roughness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_specular_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_specular;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_thickness_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_thickness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_transmission_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_transmission;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapNameOverrides_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMapNameOverrides_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMapNameOverrides>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapNameOverrides_Statics::NewProp_albedo_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMapNameOverrides_Statics::NewProp_albedo = { "albedo", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMapNameOverrides, albedo), METADATA_PARAMS(Z_Construct_UScriptStruct_FMapNameOverrides_Statics::NewProp_albedo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapNameOverrides_Statics::NewProp_albedo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapNameOverrides_Statics::NewProp_ao_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMapNameOverrides_Statics::NewProp_ao = { "ao", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMapNameOverrides, ao), METADATA_PARAMS(Z_Construct_UScriptStruct_FMapNameOverrides_Statics::NewProp_ao_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapNameOverrides_Statics::NewProp_ao_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapNameOverrides_Statics::NewProp_bump_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMapNameOverrides_Statics::NewProp_bump = { "bump", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMapNameOverrides, bump), METADATA_PARAMS(Z_Construct_UScriptStruct_FMapNameOverrides_Statics::NewProp_bump_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapNameOverrides_Statics::NewProp_bump_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapNameOverrides_Statics::NewProp_cavity_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMapNameOverrides_Statics::NewProp_cavity = { "cavity", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMapNameOverrides, cavity), METADATA_PARAMS(Z_Construct_UScriptStruct_FMapNameOverrides_Statics::NewProp_cavity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapNameOverrides_Statics::NewProp_cavity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapNameOverrides_Statics::NewProp_curvature_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMapNameOverrides_Statics::NewProp_curvature = { "curvature", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMapNameOverrides, curvature), METADATA_PARAMS(Z_Construct_UScriptStruct_FMapNameOverrides_Statics::NewProp_curvature_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapNameOverrides_Statics::NewProp_curvature_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapNameOverrides_Statics::NewProp_diffuse_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMapNameOverrides_Statics::NewProp_diffuse = { "diffuse", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMapNameOverrides, diffuse), METADATA_PARAMS(Z_Construct_UScriptStruct_FMapNameOverrides_Statics::NewProp_diffuse_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapNameOverrides_Statics::NewProp_diffuse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapNameOverrides_Statics::NewProp_displacement_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMapNameOverrides_Statics::NewProp_displacement = { "displacement", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMapNameOverrides, displacement), METADATA_PARAMS(Z_Construct_UScriptStruct_FMapNameOverrides_Statics::NewProp_displacement_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapNameOverrides_Statics::NewProp_displacement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapNameOverrides_Statics::NewProp_fuzz_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMapNameOverrides_Statics::NewProp_fuzz = { "fuzz", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMapNameOverrides, fuzz), METADATA_PARAMS(Z_Construct_UScriptStruct_FMapNameOverrides_Statics::NewProp_fuzz_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapNameOverrides_Statics::NewProp_fuzz_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapNameOverrides_Statics::NewProp_gloss_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMapNameOverrides_Statics::NewProp_gloss = { "gloss", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMapNameOverrides, gloss), METADATA_PARAMS(Z_Construct_UScriptStruct_FMapNameOverrides_Statics::NewProp_gloss_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapNameOverrides_Statics::NewProp_gloss_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapNameOverrides_Statics::NewProp_mask_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMapNameOverrides_Statics::NewProp_mask = { "mask", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMapNameOverrides, mask), METADATA_PARAMS(Z_Construct_UScriptStruct_FMapNameOverrides_Statics::NewProp_mask_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapNameOverrides_Statics::NewProp_mask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapNameOverrides_Statics::NewProp_metalness_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMapNameOverrides_Statics::NewProp_metalness = { "metalness", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMapNameOverrides, metalness), METADATA_PARAMS(Z_Construct_UScriptStruct_FMapNameOverrides_Statics::NewProp_metalness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapNameOverrides_Statics::NewProp_metalness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapNameOverrides_Statics::NewProp_normal_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMapNameOverrides_Statics::NewProp_normal = { "normal", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMapNameOverrides, normal), METADATA_PARAMS(Z_Construct_UScriptStruct_FMapNameOverrides_Statics::NewProp_normal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapNameOverrides_Statics::NewProp_normal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapNameOverrides_Statics::NewProp_normalObject_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMapNameOverrides_Statics::NewProp_normalObject = { "normalObject", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMapNameOverrides, normalObject), METADATA_PARAMS(Z_Construct_UScriptStruct_FMapNameOverrides_Statics::NewProp_normalObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapNameOverrides_Statics::NewProp_normalObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapNameOverrides_Statics::NewProp_roughness_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMapNameOverrides_Statics::NewProp_roughness = { "roughness", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMapNameOverrides, roughness), METADATA_PARAMS(Z_Construct_UScriptStruct_FMapNameOverrides_Statics::NewProp_roughness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapNameOverrides_Statics::NewProp_roughness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapNameOverrides_Statics::NewProp_specular_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMapNameOverrides_Statics::NewProp_specular = { "specular", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMapNameOverrides, specular), METADATA_PARAMS(Z_Construct_UScriptStruct_FMapNameOverrides_Statics::NewProp_specular_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapNameOverrides_Statics::NewProp_specular_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapNameOverrides_Statics::NewProp_thickness_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMapNameOverrides_Statics::NewProp_thickness = { "thickness", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMapNameOverrides, thickness), METADATA_PARAMS(Z_Construct_UScriptStruct_FMapNameOverrides_Statics::NewProp_thickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapNameOverrides_Statics::NewProp_thickness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapNameOverrides_Statics::NewProp_transmission_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMapNameOverrides_Statics::NewProp_transmission = { "transmission", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMapNameOverrides, transmission), METADATA_PARAMS(Z_Construct_UScriptStruct_FMapNameOverrides_Statics::NewProp_transmission_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapNameOverrides_Statics::NewProp_transmission_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMapNameOverrides_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapNameOverrides_Statics::NewProp_albedo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapNameOverrides_Statics::NewProp_ao,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapNameOverrides_Statics::NewProp_bump,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapNameOverrides_Statics::NewProp_cavity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapNameOverrides_Statics::NewProp_curvature,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapNameOverrides_Statics::NewProp_diffuse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapNameOverrides_Statics::NewProp_displacement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapNameOverrides_Statics::NewProp_fuzz,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapNameOverrides_Statics::NewProp_gloss,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapNameOverrides_Statics::NewProp_mask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapNameOverrides_Statics::NewProp_metalness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapNameOverrides_Statics::NewProp_normal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapNameOverrides_Statics::NewProp_normalObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapNameOverrides_Statics::NewProp_roughness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapNameOverrides_Statics::NewProp_specular,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapNameOverrides_Statics::NewProp_thickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapNameOverrides_Statics::NewProp_transmission,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMapNameOverrides_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MegascansPlugin,
		nullptr,
		&NewStructOps,
		"MapNameOverrides",
		sizeof(FMapNameOverrides),
		alignof(FMapNameOverrides),
		Z_Construct_UScriptStruct_FMapNameOverrides_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapNameOverrides_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMapNameOverrides_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapNameOverrides_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMapNameOverrides()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMapNameOverrides_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MegascansPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MapNameOverrides"), sizeof(FMapNameOverrides), Get_Z_Construct_UScriptStruct_FMapNameOverrides_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMapNameOverrides_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMapNameOverrides_Hash() { return 1839437563U; }
class UScriptStruct* FMeta::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MEGASCANSPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FMeta_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeta, Z_Construct_UPackage__Script_MegascansPlugin(), TEXT("Meta"), sizeof(FMeta), Get_Z_Construct_UScriptStruct_FMeta_Hash());
	}
	return Singleton;
}
template<> MEGASCANSPLUGIN_API UScriptStruct* StaticStruct<FMeta>()
{
	return FMeta::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMeta(FMeta::StaticStruct, TEXT("/Script/MegascansPlugin"), TEXT("Meta"), false, nullptr, nullptr);
static struct FScriptStruct_MegascansPlugin_StaticRegisterNativesFMeta
{
	FScriptStruct_MegascansPlugin_StaticRegisterNativesFMeta()
	{
		UScriptStruct::DeferCppStructOps<FMeta>(FName(TEXT("Meta")));
	}
} ScriptStruct_MegascansPlugin_StaticRegisterNativesFMeta;
	struct Z_Construct_UScriptStruct_FMeta_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static void NewProp_value_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeta_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMeta_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeta>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeta_Statics::NewProp_key_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMeta_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMeta, key), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeta_Statics::NewProp_key_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeta_Statics::NewProp_key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeta_Statics::NewProp_name_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMeta_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMeta, name), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeta_Statics::NewProp_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeta_Statics::NewProp_name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeta_Statics::NewProp_value_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMeta_Statics::NewProp_value_SetBit(void* Obj)
	{
		((FMeta*)Obj)->value = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeta_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMeta), &Z_Construct_UScriptStruct_FMeta_Statics::NewProp_value_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeta_Statics::NewProp_value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeta_Statics::NewProp_value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMeta_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeta_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeta_Statics::NewProp_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeta_Statics::NewProp_value,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMeta_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MegascansPlugin,
		nullptr,
		&NewStructOps,
		"Meta",
		sizeof(FMeta),
		alignof(FMeta),
		Z_Construct_UScriptStruct_FMeta_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeta_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMeta_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeta_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMeta()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMeta_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MegascansPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Meta"), sizeof(FMeta), Get_Z_Construct_UScriptStruct_FMeta_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMeta_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMeta_Hash() { return 3094335789U; }
class UScriptStruct* FComponents::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MEGASCANSPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FComponents_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FComponents, Z_Construct_UPackage__Script_MegascansPlugin(), TEXT("Components"), sizeof(FComponents), Get_Z_Construct_UScriptStruct_FComponents_Hash());
	}
	return Singleton;
}
template<> MEGASCANSPLUGIN_API UScriptStruct* StaticStruct<FComponents>()
{
	return FComponents::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FComponents(FComponents::StaticStruct, TEXT("/Script/MegascansPlugin"), TEXT("Components"), false, nullptr, nullptr);
static struct FScriptStruct_MegascansPlugin_StaticRegisterNativesFComponents
{
	FScriptStruct_MegascansPlugin_StaticRegisterNativesFComponents()
	{
		UScriptStruct::DeferCppStructOps<FComponents>(FName(TEXT("Components")));
	}
} ScriptStruct_MegascansPlugin_StaticRegisterNativesFComponents;
	struct Z_Construct_UScriptStruct_FComponents_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_format_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_format;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_type_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_resolution_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt16PropertyParams NewProp_resolution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_nameOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_nameOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_path_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_path;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponents_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FComponents_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComponents>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponents_Statics::NewProp_format_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FComponents_Statics::NewProp_format = { "format", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FComponents, format), METADATA_PARAMS(Z_Construct_UScriptStruct_FComponents_Statics::NewProp_format_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponents_Statics::NewProp_format_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponents_Statics::NewProp_type_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FComponents_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FComponents, type), METADATA_PARAMS(Z_Construct_UScriptStruct_FComponents_Statics::NewProp_type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponents_Statics::NewProp_type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponents_Statics::NewProp_resolution_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	const UE4CodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FComponents_Statics::NewProp_resolution = { "resolution", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FComponents, resolution), METADATA_PARAMS(Z_Construct_UScriptStruct_FComponents_Statics::NewProp_resolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponents_Statics::NewProp_resolution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponents_Statics::NewProp_name_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FComponents_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FComponents, name), METADATA_PARAMS(Z_Construct_UScriptStruct_FComponents_Statics::NewProp_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponents_Statics::NewProp_name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponents_Statics::NewProp_nameOverride_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FComponents_Statics::NewProp_nameOverride = { "nameOverride", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FComponents, nameOverride), METADATA_PARAMS(Z_Construct_UScriptStruct_FComponents_Statics::NewProp_nameOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponents_Statics::NewProp_nameOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponents_Statics::NewProp_path_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FComponents_Statics::NewProp_path = { "path", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FComponents, path), METADATA_PARAMS(Z_Construct_UScriptStruct_FComponents_Statics::NewProp_path_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponents_Statics::NewProp_path_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FComponents_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponents_Statics::NewProp_format,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponents_Statics::NewProp_type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponents_Statics::NewProp_resolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponents_Statics::NewProp_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponents_Statics::NewProp_nameOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponents_Statics::NewProp_path,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComponents_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MegascansPlugin,
		nullptr,
		&NewStructOps,
		"Components",
		sizeof(FComponents),
		alignof(FComponents),
		Z_Construct_UScriptStruct_FComponents_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponents_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FComponents_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponents_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FComponents()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FComponents_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MegascansPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Components"), sizeof(FComponents), Get_Z_Construct_UScriptStruct_FComponents_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FComponents_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FComponents_Hash() { return 2909992219U; }
class UScriptStruct* FMeshList::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MEGASCANSPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FMeshList_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeshList, Z_Construct_UPackage__Script_MegascansPlugin(), TEXT("MeshList"), sizeof(FMeshList), Get_Z_Construct_UScriptStruct_FMeshList_Hash());
	}
	return Singleton;
}
template<> MEGASCANSPLUGIN_API UScriptStruct* StaticStruct<FMeshList>()
{
	return FMeshList::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMeshList(FMeshList::StaticStruct, TEXT("/Script/MegascansPlugin"), TEXT("MeshList"), false, nullptr, nullptr);
static struct FScriptStruct_MegascansPlugin_StaticRegisterNativesFMeshList
{
	FScriptStruct_MegascansPlugin_StaticRegisterNativesFMeshList()
	{
		UScriptStruct::DeferCppStructOps<FMeshList>(FName(TEXT("MeshList")));
	}
} ScriptStruct_MegascansPlugin_StaticRegisterNativesFMeshList;
	struct Z_Construct_UScriptStruct_FMeshList_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_format_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_format;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_type_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_resolution_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt16PropertyParams NewProp_resolution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_nameOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_nameOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_path_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_path;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshList_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMeshList_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeshList>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshList_Statics::NewProp_format_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMeshList_Statics::NewProp_format = { "format", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMeshList, format), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshList_Statics::NewProp_format_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshList_Statics::NewProp_format_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshList_Statics::NewProp_type_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMeshList_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMeshList, type), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshList_Statics::NewProp_type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshList_Statics::NewProp_type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshList_Statics::NewProp_resolution_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	const UE4CodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FMeshList_Statics::NewProp_resolution = { "resolution", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMeshList, resolution), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshList_Statics::NewProp_resolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshList_Statics::NewProp_resolution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshList_Statics::NewProp_name_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMeshList_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMeshList, name), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshList_Statics::NewProp_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshList_Statics::NewProp_name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshList_Statics::NewProp_nameOverride_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMeshList_Statics::NewProp_nameOverride = { "nameOverride", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMeshList, nameOverride), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshList_Statics::NewProp_nameOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshList_Statics::NewProp_nameOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshList_Statics::NewProp_path_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMeshList_Statics::NewProp_path = { "path", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMeshList, path), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshList_Statics::NewProp_path_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshList_Statics::NewProp_path_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMeshList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshList_Statics::NewProp_format,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshList_Statics::NewProp_type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshList_Statics::NewProp_resolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshList_Statics::NewProp_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshList_Statics::NewProp_nameOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshList_Statics::NewProp_path,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMeshList_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MegascansPlugin,
		nullptr,
		&NewStructOps,
		"MeshList",
		sizeof(FMeshList),
		alignof(FMeshList),
		Z_Construct_UScriptStruct_FMeshList_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshList_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshList_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshList_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMeshList()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMeshList_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MegascansPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MeshList"), sizeof(FMeshList), Get_Z_Construct_UScriptStruct_FMeshList_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMeshList_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMeshList_Hash() { return 1422754862U; }
class UScriptStruct* FChannelsData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MEGASCANSPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FChannelsData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FChannelsData, Z_Construct_UPackage__Script_MegascansPlugin(), TEXT("ChannelsData"), sizeof(FChannelsData), Get_Z_Construct_UScriptStruct_FChannelsData_Hash());
	}
	return Singleton;
}
template<> MEGASCANSPLUGIN_API UScriptStruct* StaticStruct<FChannelsData>()
{
	return FChannelsData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FChannelsData(FChannelsData::StaticStruct, TEXT("/Script/MegascansPlugin"), TEXT("ChannelsData"), false, nullptr, nullptr);
static struct FScriptStruct_MegascansPlugin_StaticRegisterNativesFChannelsData
{
	FScriptStruct_MegascansPlugin_StaticRegisterNativesFChannelsData()
	{
		UScriptStruct::DeferCppStructOps<FChannelsData>(FName(TEXT("ChannelsData")));
	}
} ScriptStruct_MegascansPlugin_StaticRegisterNativesFChannelsData;
	struct Z_Construct_UScriptStruct_FChannelsData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Alpha_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Alpha;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Red_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Red_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Red;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Blue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Blue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Blue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Green_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Green_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Green;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Grayscale_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Grayscale_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Grayscale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChannelsData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChannelsData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChannelsData>();
	}
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FChannelsData_Statics::NewProp_Alpha_Inner = { "Alpha", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChannelsData_Statics::NewProp_Alpha_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FChannelsData_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChannelsData, Alpha), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FChannelsData_Statics::NewProp_Alpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChannelsData_Statics::NewProp_Alpha_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FChannelsData_Statics::NewProp_Red_Inner = { "Red", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChannelsData_Statics::NewProp_Red_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FChannelsData_Statics::NewProp_Red = { "Red", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChannelsData, Red), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FChannelsData_Statics::NewProp_Red_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChannelsData_Statics::NewProp_Red_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FChannelsData_Statics::NewProp_Blue_Inner = { "Blue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChannelsData_Statics::NewProp_Blue_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FChannelsData_Statics::NewProp_Blue = { "Blue", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChannelsData, Blue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FChannelsData_Statics::NewProp_Blue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChannelsData_Statics::NewProp_Blue_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FChannelsData_Statics::NewProp_Green_Inner = { "Green", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChannelsData_Statics::NewProp_Green_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FChannelsData_Statics::NewProp_Green = { "Green", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChannelsData, Green), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FChannelsData_Statics::NewProp_Green_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChannelsData_Statics::NewProp_Green_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FChannelsData_Statics::NewProp_Grayscale_Inner = { "Grayscale", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChannelsData_Statics::NewProp_Grayscale_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FChannelsData_Statics::NewProp_Grayscale = { "Grayscale", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChannelsData, Grayscale), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FChannelsData_Statics::NewProp_Grayscale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChannelsData_Statics::NewProp_Grayscale_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChannelsData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChannelsData_Statics::NewProp_Alpha_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChannelsData_Statics::NewProp_Alpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChannelsData_Statics::NewProp_Red_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChannelsData_Statics::NewProp_Red,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChannelsData_Statics::NewProp_Blue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChannelsData_Statics::NewProp_Blue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChannelsData_Statics::NewProp_Green_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChannelsData_Statics::NewProp_Green,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChannelsData_Statics::NewProp_Grayscale_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChannelsData_Statics::NewProp_Grayscale,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChannelsData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MegascansPlugin,
		nullptr,
		&NewStructOps,
		"ChannelsData",
		sizeof(FChannelsData),
		alignof(FChannelsData),
		Z_Construct_UScriptStruct_FChannelsData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChannelsData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChannelsData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChannelsData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChannelsData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FChannelsData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MegascansPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ChannelsData"), sizeof(FChannelsData), Get_Z_Construct_UScriptStruct_FChannelsData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FChannelsData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FChannelsData_Hash() { return 941067028U; }
class UScriptStruct* FLodList::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MEGASCANSPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FLodList_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLodList, Z_Construct_UPackage__Script_MegascansPlugin(), TEXT("LodList"), sizeof(FLodList), Get_Z_Construct_UScriptStruct_FLodList_Hash());
	}
	return Singleton;
}
template<> MEGASCANSPLUGIN_API UScriptStruct* StaticStruct<FLodList>()
{
	return FLodList::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLodList(FLodList::StaticStruct, TEXT("/Script/MegascansPlugin"), TEXT("LodList"), false, nullptr, nullptr);
static struct FScriptStruct_MegascansPlugin_StaticRegisterNativesFLodList
{
	FScriptStruct_MegascansPlugin_StaticRegisterNativesFLodList()
	{
		UScriptStruct::DeferCppStructOps<FLodList>(FName(TEXT("LodList")));
	}
} ScriptStruct_MegascansPlugin_StaticRegisterNativesFLodList;
	struct Z_Construct_UScriptStruct_FLodList_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lod_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_lod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_variation_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt8PropertyParams NewProp_variation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_path_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_path;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_nameOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_nameOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lodObjectName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_lodObjectName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_format_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_format;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_type_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLodList_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLodList_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLodList>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLodList_Statics::NewProp_lod_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLodList_Statics::NewProp_lod = { "lod", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLodList, lod), METADATA_PARAMS(Z_Construct_UScriptStruct_FLodList_Statics::NewProp_lod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLodList_Statics::NewProp_lod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLodList_Statics::NewProp_variation_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	const UE4CodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FLodList_Statics::NewProp_variation = { "variation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLodList, variation), METADATA_PARAMS(Z_Construct_UScriptStruct_FLodList_Statics::NewProp_variation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLodList_Statics::NewProp_variation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLodList_Statics::NewProp_path_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLodList_Statics::NewProp_path = { "path", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLodList, path), METADATA_PARAMS(Z_Construct_UScriptStruct_FLodList_Statics::NewProp_path_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLodList_Statics::NewProp_path_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLodList_Statics::NewProp_name_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLodList_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLodList, name), METADATA_PARAMS(Z_Construct_UScriptStruct_FLodList_Statics::NewProp_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLodList_Statics::NewProp_name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLodList_Statics::NewProp_nameOverride_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLodList_Statics::NewProp_nameOverride = { "nameOverride", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLodList, nameOverride), METADATA_PARAMS(Z_Construct_UScriptStruct_FLodList_Statics::NewProp_nameOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLodList_Statics::NewProp_nameOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLodList_Statics::NewProp_lodObjectName_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLodList_Statics::NewProp_lodObjectName = { "lodObjectName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLodList, lodObjectName), METADATA_PARAMS(Z_Construct_UScriptStruct_FLodList_Statics::NewProp_lodObjectName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLodList_Statics::NewProp_lodObjectName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLodList_Statics::NewProp_format_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLodList_Statics::NewProp_format = { "format", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLodList, format), METADATA_PARAMS(Z_Construct_UScriptStruct_FLodList_Statics::NewProp_format_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLodList_Statics::NewProp_format_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLodList_Statics::NewProp_type_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/MTSReader.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLodList_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLodList, type), METADATA_PARAMS(Z_Construct_UScriptStruct_FLodList_Statics::NewProp_type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLodList_Statics::NewProp_type_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLodList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLodList_Statics::NewProp_lod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLodList_Statics::NewProp_variation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLodList_Statics::NewProp_path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLodList_Statics::NewProp_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLodList_Statics::NewProp_nameOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLodList_Statics::NewProp_lodObjectName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLodList_Statics::NewProp_format,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLodList_Statics::NewProp_type,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLodList_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MegascansPlugin,
		nullptr,
		&NewStructOps,
		"LodList",
		sizeof(FLodList),
		alignof(FLodList),
		Z_Construct_UScriptStruct_FLodList_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLodList_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLodList_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLodList_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLodList()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLodList_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MegascansPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LodList"), sizeof(FLodList), Get_Z_Construct_UScriptStruct_FLodList_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLodList_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLodList_Hash() { return 1345670743U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
