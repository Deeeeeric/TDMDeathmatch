// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TDMDeathmatch/TDMStructs.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTDMStructs() {}
// Cross Module References
	TDMDEATHMATCH_API UEnum* Z_Construct_UEnum_TDMDeathmatch_ETeam();
	UPackage* Z_Construct_UPackage__Script_TDMDeathmatch();
	TDMDEATHMATCH_API UEnum* Z_Construct_UEnum_TDMDeathmatch_EAttachmentType();
	TDMDEATHMATCH_API UScriptStruct* Z_Construct_UScriptStruct_FScoreboardData();
	TDMDEATHMATCH_API UScriptStruct* Z_Construct_UScriptStruct_FFirearmToSpawn();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	TDMDEATHMATCH_API UClass* Z_Construct_UClass_ATDMAttachment_NoRegister();
	TDMDEATHMATCH_API UClass* Z_Construct_UClass_ATDMAttachment_Optic_NoRegister();
	TDMDEATHMATCH_API UClass* Z_Construct_UClass_ATDMWeaponBase_NoRegister();
// End Cross Module References
	static UEnum* ETeam_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TDMDeathmatch_ETeam, Z_Construct_UPackage__Script_TDMDeathmatch(), TEXT("ETeam"));
		}
		return Singleton;
	}
	template<> TDMDEATHMATCH_API UEnum* StaticEnum<ETeam>()
	{
		return ETeam_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETeam(ETeam_StaticEnum, TEXT("/Script/TDMDeathmatch"), TEXT("ETeam"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TDMDeathmatch_ETeam_Hash() { return 3742807166U; }
	UEnum* Z_Construct_UEnum_TDMDeathmatch_ETeam()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TDMDeathmatch();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETeam"), 0, Get_Z_Construct_UEnum_TDMDeathmatch_ETeam_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETeam::None", (int64)ETeam::None },
				{ "ETeam::Alpha", (int64)ETeam::Alpha },
				{ "ETeam::Bravo", (int64)ETeam::Bravo },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Alpha.\"Alpha\"", "" },
				{ "Alpha.Comment", "// Default\n" },
				{ "Alpha.DisplayName", "" },
				{ "Alpha.Name", "ETeam::Alpha" },
				{ "Alpha.ToolTip", "Default" },
				{ "BlueprintType", "true" },
				{ "Bravo.\"Bravo\"", "" },
				{ "Bravo.DisplayName", "" },
				{ "Bravo.Name", "ETeam::Bravo" },
				{ "ModuleRelativePath", "TDMStructs.h" },
				{ "None.\"None\"", "" },
				{ "None.DisplayName", "" },
				{ "None.Name", "ETeam::None" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TDMDeathmatch,
				nullptr,
				"ETeam",
				"ETeam",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EAttachmentType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TDMDeathmatch_EAttachmentType, Z_Construct_UPackage__Script_TDMDeathmatch(), TEXT("EAttachmentType"));
		}
		return Singleton;
	}
	template<> TDMDEATHMATCH_API UEnum* StaticEnum<EAttachmentType>()
	{
		return EAttachmentType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAttachmentType(EAttachmentType_StaticEnum, TEXT("/Script/TDMDeathmatch"), TEXT("EAttachmentType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TDMDeathmatch_EAttachmentType_Hash() { return 3173800112U; }
	UEnum* Z_Construct_UEnum_TDMDeathmatch_EAttachmentType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TDMDeathmatch();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAttachmentType"), 0, Get_Z_Construct_UEnum_TDMDeathmatch_EAttachmentType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAttachmentType::Optic", (int64)EAttachmentType::Optic },
				{ "EAttachmentType::Muzzle", (int64)EAttachmentType::Muzzle },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "TDMStructs.h" },
				{ "Muzzle.\"Muzzle\"", "" },
				{ "Muzzle.DisplayName", "" },
				{ "Muzzle.Name", "EAttachmentType::Muzzle" },
				{ "Optic.\"Optic\"", "" },
				{ "Optic.DisplayName", "" },
				{ "Optic.Name", "EAttachmentType::Optic" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TDMDeathmatch,
				nullptr,
				"EAttachmentType",
				"EAttachmentType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FScoreboardData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TDMDEATHMATCH_API uint32 Get_Z_Construct_UScriptStruct_FScoreboardData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FScoreboardData, Z_Construct_UPackage__Script_TDMDeathmatch(), TEXT("ScoreboardData"), sizeof(FScoreboardData), Get_Z_Construct_UScriptStruct_FScoreboardData_Hash());
	}
	return Singleton;
}
template<> TDMDEATHMATCH_API UScriptStruct* StaticStruct<FScoreboardData>()
{
	return FScoreboardData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FScoreboardData(FScoreboardData::StaticStruct, TEXT("/Script/TDMDeathmatch"), TEXT("ScoreboardData"), false, nullptr, nullptr);
static struct FScriptStruct_TDMDeathmatch_StaticRegisterNativesFScoreboardData
{
	FScriptStruct_TDMDeathmatch_StaticRegisterNativesFScoreboardData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ScoreboardData")),new UScriptStruct::TCppStructOps<FScoreboardData>);
	}
} ScriptStruct_TDMDeathmatch_StaticRegisterNativesFScoreboardData;
	struct Z_Construct_UScriptStruct_FScoreboardData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Deaths_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Deaths;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Kills_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Kills;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Team_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Team;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Team_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScoreboardData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "TDMStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FScoreboardData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScoreboardData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScoreboardData_Statics::NewProp_Deaths_MetaData[] = {
		{ "Category", "Scoreboard" },
		{ "ModuleRelativePath", "TDMStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FScoreboardData_Statics::NewProp_Deaths = { "Deaths", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScoreboardData, Deaths), METADATA_PARAMS(Z_Construct_UScriptStruct_FScoreboardData_Statics::NewProp_Deaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScoreboardData_Statics::NewProp_Deaths_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScoreboardData_Statics::NewProp_Kills_MetaData[] = {
		{ "Category", "Scoreboard" },
		{ "ModuleRelativePath", "TDMStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FScoreboardData_Statics::NewProp_Kills = { "Kills", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScoreboardData, Kills), METADATA_PARAMS(Z_Construct_UScriptStruct_FScoreboardData_Statics::NewProp_Kills_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScoreboardData_Statics::NewProp_Kills_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScoreboardData_Statics::NewProp_Team_MetaData[] = {
		{ "Category", "Scoreboard" },
		{ "ModuleRelativePath", "TDMStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FScoreboardData_Statics::NewProp_Team = { "Team", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScoreboardData, Team), Z_Construct_UEnum_TDMDeathmatch_ETeam, METADATA_PARAMS(Z_Construct_UScriptStruct_FScoreboardData_Statics::NewProp_Team_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScoreboardData_Statics::NewProp_Team_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FScoreboardData_Statics::NewProp_Team_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FScoreboardData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScoreboardData_Statics::NewProp_Deaths,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScoreboardData_Statics::NewProp_Kills,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScoreboardData_Statics::NewProp_Team,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScoreboardData_Statics::NewProp_Team_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScoreboardData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TDMDeathmatch,
		nullptr,
		&NewStructOps,
		"ScoreboardData",
		sizeof(FScoreboardData),
		alignof(FScoreboardData),
		Z_Construct_UScriptStruct_FScoreboardData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScoreboardData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FScoreboardData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScoreboardData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FScoreboardData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FScoreboardData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TDMDeathmatch();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ScoreboardData"), sizeof(FScoreboardData), Get_Z_Construct_UScriptStruct_FScoreboardData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FScoreboardData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FScoreboardData_Hash() { return 441875368U; }
class UScriptStruct* FFirearmToSpawn::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TDMDEATHMATCH_API uint32 Get_Z_Construct_UScriptStruct_FFirearmToSpawn_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFirearmToSpawn, Z_Construct_UPackage__Script_TDMDeathmatch(), TEXT("FirearmToSpawn"), sizeof(FFirearmToSpawn), Get_Z_Construct_UScriptStruct_FFirearmToSpawn_Hash());
	}
	return Singleton;
}
template<> TDMDEATHMATCH_API UScriptStruct* StaticStruct<FFirearmToSpawn>()
{
	return FFirearmToSpawn::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFirearmToSpawn(FFirearmToSpawn::StaticStruct, TEXT("/Script/TDMDeathmatch"), TEXT("FirearmToSpawn"), false, nullptr, nullptr);
static struct FScriptStruct_TDMDeathmatch_StaticRegisterNativesFFirearmToSpawn
{
	FScriptStruct_TDMDeathmatch_StaticRegisterNativesFFirearmToSpawn()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FirearmToSpawn")),new UScriptStruct::TCppStructOps<FFirearmToSpawn>);
	}
} ScriptStruct_TDMDeathmatch_StaticRegisterNativesFFirearmToSpawn;
	struct Z_Construct_UScriptStruct_FFirearmToSpawn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuzzleClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_MuzzleClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpticClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_OpticClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirearmClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_FirearmClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirearmToSpawn_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "TDMStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFirearmToSpawn_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFirearmToSpawn>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirearmToSpawn_Statics::NewProp_MuzzleClass_MetaData[] = {
		{ "Category", "Firearm" },
		{ "ModuleRelativePath", "TDMStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FFirearmToSpawn_Statics::NewProp_MuzzleClass = { "MuzzleClass", nullptr, (EPropertyFlags)0x0014000000000004, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFirearmToSpawn, MuzzleClass), Z_Construct_UClass_ATDMAttachment_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FFirearmToSpawn_Statics::NewProp_MuzzleClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirearmToSpawn_Statics::NewProp_MuzzleClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirearmToSpawn_Statics::NewProp_OpticClass_MetaData[] = {
		{ "Category", "Firearm" },
		{ "ModuleRelativePath", "TDMStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FFirearmToSpawn_Statics::NewProp_OpticClass = { "OpticClass", nullptr, (EPropertyFlags)0x0014000000000004, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFirearmToSpawn, OpticClass), Z_Construct_UClass_ATDMAttachment_Optic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FFirearmToSpawn_Statics::NewProp_OpticClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirearmToSpawn_Statics::NewProp_OpticClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirearmToSpawn_Statics::NewProp_FirearmClass_MetaData[] = {
		{ "Category", "Firearm" },
		{ "ModuleRelativePath", "TDMStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FFirearmToSpawn_Statics::NewProp_FirearmClass = { "FirearmClass", nullptr, (EPropertyFlags)0x0014000000000004, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFirearmToSpawn, FirearmClass), Z_Construct_UClass_ATDMWeaponBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FFirearmToSpawn_Statics::NewProp_FirearmClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirearmToSpawn_Statics::NewProp_FirearmClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFirearmToSpawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirearmToSpawn_Statics::NewProp_MuzzleClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirearmToSpawn_Statics::NewProp_OpticClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirearmToSpawn_Statics::NewProp_FirearmClass,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFirearmToSpawn_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TDMDeathmatch,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"FirearmToSpawn",
		sizeof(FFirearmToSpawn),
		alignof(FFirearmToSpawn),
		Z_Construct_UScriptStruct_FFirearmToSpawn_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirearmToSpawn_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFirearmToSpawn_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirearmToSpawn_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFirearmToSpawn()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFirearmToSpawn_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TDMDeathmatch();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FirearmToSpawn"), sizeof(FFirearmToSpawn), Get_Z_Construct_UScriptStruct_FFirearmToSpawn_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFirearmToSpawn_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFirearmToSpawn_Hash() { return 2255763003U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
