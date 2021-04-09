// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TDMDeathmatch/Public/Game/Weapon/TDMWeaponBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTDMWeaponBase() {}
// Cross Module References
	TDMDEATHMATCH_API UEnum* Z_Construct_UEnum_TDMDeathmatch_EFireMode();
	UPackage* Z_Construct_UPackage__Script_TDMDeathmatch();
	TDMDEATHMATCH_API UClass* Z_Construct_UClass_ATDMWeaponBase_NoRegister();
	TDMDEATHMATCH_API UClass* Z_Construct_UClass_ATDMWeaponBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	TDMDEATHMATCH_API UClass* Z_Construct_UClass_ATDMAttachment_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize10();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimationAsset_NoRegister();
	TDMDEATHMATCH_API UClass* Z_Construct_UClass_ATDMProjectileBase_NoRegister();
// End Cross Module References
	static UEnum* EFireMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TDMDeathmatch_EFireMode, Z_Construct_UPackage__Script_TDMDeathmatch(), TEXT("EFireMode"));
		}
		return Singleton;
	}
	template<> TDMDEATHMATCH_API UEnum* StaticEnum<EFireMode>()
	{
		return EFireMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFireMode(EFireMode_StaticEnum, TEXT("/Script/TDMDeathmatch"), TEXT("EFireMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TDMDeathmatch_EFireMode_Hash() { return 3973223148U; }
	UEnum* Z_Construct_UEnum_TDMDeathmatch_EFireMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TDMDeathmatch();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFireMode"), 0, Get_Z_Construct_UEnum_TDMDeathmatch_EFireMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFireMode::Semi", (int64)EFireMode::Semi },
				{ "EFireMode::Burst", (int64)EFireMode::Burst },
				{ "EFireMode::Full", (int64)EFireMode::Full },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Burst.\"Burst\"", "" },
				{ "Burst.DisplayName", "" },
				{ "Burst.Name", "EFireMode::Burst" },
				{ "Full.\"Full-Auto\"", "" },
				{ "Full.DisplayName", "" },
				{ "Full.Name", "EFireMode::Full" },
				{ "ModuleRelativePath", "Public/Game/Weapon/TDMWeaponBase.h" },
				{ "Semi.\"Semi-Auto\"", "" },
				{ "Semi.DisplayName", "" },
				{ "Semi.Name", "EFireMode::Semi" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TDMDeathmatch,
				nullptr,
				"EFireMode",
				"EFireMode",
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
	DEFINE_FUNCTION(ATDMWeaponBase::execAddAttachment)
	{
		P_GET_OBJECT(UClass,Z_Param_AttachmentClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddAttachment(Z_Param_AttachmentClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDMWeaponBase::execMulti_Fire)
	{
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_SpawnLocation);
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_MuzzleRotationVector);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Multi_Fire_Validate(Z_Param_SpawnLocation,Z_Param_MuzzleRotationVector))
		{
			RPC_ValidateFailed(TEXT("Multi_Fire_Validate"));
			return;
		}
		P_THIS->Multi_Fire_Implementation(Z_Param_SpawnLocation,Z_Param_MuzzleRotationVector);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDMWeaponBase::execServer_Fire)
	{
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_SpawnLocation);
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_MuzzleRotationVector);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_Fire_Validate(Z_Param_SpawnLocation,Z_Param_MuzzleRotationVector))
		{
			RPC_ValidateFailed(TEXT("Server_Fire_Validate"));
			return;
		}
		P_THIS->Server_Fire_Implementation(Z_Param_SpawnLocation,Z_Param_MuzzleRotationVector);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDMWeaponBase::execServer_AddAttachment)
	{
		P_GET_OBJECT(UClass,Z_Param_AttachmentClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_AddAttachment_Validate(Z_Param_AttachmentClass))
		{
			RPC_ValidateFailed(TEXT("Server_AddAttachment_Validate"));
			return;
		}
		P_THIS->Server_AddAttachment_Implementation(Z_Param_AttachmentClass);
		P_NATIVE_END;
	}
	static FName NAME_ATDMWeaponBase_Multi_Fire = FName(TEXT("Multi_Fire"));
	void ATDMWeaponBase::Multi_Fire(FVector_NetQuantize10 SpawnLocation, FVector_NetQuantize10 MuzzleRotationVector)
	{
		TDMWeaponBase_eventMulti_Fire_Parms Parms;
		Parms.SpawnLocation=SpawnLocation;
		Parms.MuzzleRotationVector=MuzzleRotationVector;
		ProcessEvent(FindFunctionChecked(NAME_ATDMWeaponBase_Multi_Fire),&Parms);
	}
	static FName NAME_ATDMWeaponBase_OnHit = FName(TEXT("OnHit"));
	void ATDMWeaponBase::OnHit(FHitResult HitResult)
	{
		TDMWeaponBase_eventOnHit_Parms Parms;
		Parms.HitResult=HitResult;
		ProcessEvent(FindFunctionChecked(NAME_ATDMWeaponBase_OnHit),&Parms);
	}
	static FName NAME_ATDMWeaponBase_Server_AddAttachment = FName(TEXT("Server_AddAttachment"));
	void ATDMWeaponBase::Server_AddAttachment(TSubclassOf<ATDMAttachment>  AttachmentClass)
	{
		TDMWeaponBase_eventServer_AddAttachment_Parms Parms;
		Parms.AttachmentClass=AttachmentClass;
		ProcessEvent(FindFunctionChecked(NAME_ATDMWeaponBase_Server_AddAttachment),&Parms);
	}
	static FName NAME_ATDMWeaponBase_Server_Fire = FName(TEXT("Server_Fire"));
	void ATDMWeaponBase::Server_Fire(FVector_NetQuantize10 SpawnLocation, FVector_NetQuantize10 MuzzleRotationVector)
	{
		TDMWeaponBase_eventServer_Fire_Parms Parms;
		Parms.SpawnLocation=SpawnLocation;
		Parms.MuzzleRotationVector=MuzzleRotationVector;
		ProcessEvent(FindFunctionChecked(NAME_ATDMWeaponBase_Server_Fire),&Parms);
	}
	void ATDMWeaponBase::StaticRegisterNativesATDMWeaponBase()
	{
		UClass* Class = ATDMWeaponBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddAttachment", &ATDMWeaponBase::execAddAttachment },
			{ "Multi_Fire", &ATDMWeaponBase::execMulti_Fire },
			{ "Server_AddAttachment", &ATDMWeaponBase::execServer_AddAttachment },
			{ "Server_Fire", &ATDMWeaponBase::execServer_Fire },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATDMWeaponBase_AddAttachment_Statics
	{
		struct TDMWeaponBase_eventAddAttachment_Parms
		{
			TSubclassOf<ATDMAttachment>  AttachmentClass;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AttachmentClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ATDMWeaponBase_AddAttachment_Statics::NewProp_AttachmentClass = { "AttachmentClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TDMWeaponBase_eventAddAttachment_Parms, AttachmentClass), Z_Construct_UClass_ATDMAttachment_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDMWeaponBase_AddAttachment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDMWeaponBase_AddAttachment_Statics::NewProp_AttachmentClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDMWeaponBase_AddAttachment_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Game/Weapon/TDMWeaponBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDMWeaponBase_AddAttachment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDMWeaponBase, nullptr, "AddAttachment", nullptr, nullptr, sizeof(TDMWeaponBase_eventAddAttachment_Parms), Z_Construct_UFunction_ATDMWeaponBase_AddAttachment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDMWeaponBase_AddAttachment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDMWeaponBase_AddAttachment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDMWeaponBase_AddAttachment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDMWeaponBase_AddAttachment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATDMWeaponBase_AddAttachment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDMWeaponBase_Multi_Fire_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MuzzleRotationVector;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATDMWeaponBase_Multi_Fire_Statics::NewProp_MuzzleRotationVector = { "MuzzleRotationVector", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TDMWeaponBase_eventMulti_Fire_Parms, MuzzleRotationVector), Z_Construct_UScriptStruct_FVector_NetQuantize10, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATDMWeaponBase_Multi_Fire_Statics::NewProp_SpawnLocation = { "SpawnLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TDMWeaponBase_eventMulti_Fire_Parms, SpawnLocation), Z_Construct_UScriptStruct_FVector_NetQuantize10, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDMWeaponBase_Multi_Fire_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDMWeaponBase_Multi_Fire_Statics::NewProp_MuzzleRotationVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDMWeaponBase_Multi_Fire_Statics::NewProp_SpawnLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDMWeaponBase_Multi_Fire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Game/Weapon/TDMWeaponBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDMWeaponBase_Multi_Fire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDMWeaponBase, nullptr, "Multi_Fire", nullptr, nullptr, sizeof(TDMWeaponBase_eventMulti_Fire_Parms), Z_Construct_UFunction_ATDMWeaponBase_Multi_Fire_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDMWeaponBase_Multi_Fire_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDMWeaponBase_Multi_Fire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDMWeaponBase_Multi_Fire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDMWeaponBase_Multi_Fire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATDMWeaponBase_Multi_Fire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDMWeaponBase_OnHit_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATDMWeaponBase_OnHit_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TDMWeaponBase_eventOnHit_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDMWeaponBase_OnHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDMWeaponBase_OnHit_Statics::NewProp_HitResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDMWeaponBase_OnHit_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Game/Weapon/TDMWeaponBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDMWeaponBase_OnHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDMWeaponBase, nullptr, "OnHit", nullptr, nullptr, sizeof(TDMWeaponBase_eventOnHit_Parms), Z_Construct_UFunction_ATDMWeaponBase_OnHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDMWeaponBase_OnHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDMWeaponBase_OnHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDMWeaponBase_OnHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDMWeaponBase_OnHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATDMWeaponBase_OnHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDMWeaponBase_Server_AddAttachment_Statics
	{
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AttachmentClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ATDMWeaponBase_Server_AddAttachment_Statics::NewProp_AttachmentClass = { "AttachmentClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TDMWeaponBase_eventServer_AddAttachment_Parms, AttachmentClass), Z_Construct_UClass_ATDMAttachment_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDMWeaponBase_Server_AddAttachment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDMWeaponBase_Server_AddAttachment_Statics::NewProp_AttachmentClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDMWeaponBase_Server_AddAttachment_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Game/Weapon/TDMWeaponBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDMWeaponBase_Server_AddAttachment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDMWeaponBase, nullptr, "Server_AddAttachment", nullptr, nullptr, sizeof(TDMWeaponBase_eventServer_AddAttachment_Parms), Z_Construct_UFunction_ATDMWeaponBase_Server_AddAttachment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDMWeaponBase_Server_AddAttachment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDMWeaponBase_Server_AddAttachment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDMWeaponBase_Server_AddAttachment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDMWeaponBase_Server_AddAttachment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATDMWeaponBase_Server_AddAttachment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDMWeaponBase_Server_Fire_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MuzzleRotationVector;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATDMWeaponBase_Server_Fire_Statics::NewProp_MuzzleRotationVector = { "MuzzleRotationVector", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TDMWeaponBase_eventServer_Fire_Parms, MuzzleRotationVector), Z_Construct_UScriptStruct_FVector_NetQuantize10, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATDMWeaponBase_Server_Fire_Statics::NewProp_SpawnLocation = { "SpawnLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TDMWeaponBase_eventServer_Fire_Parms, SpawnLocation), Z_Construct_UScriptStruct_FVector_NetQuantize10, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDMWeaponBase_Server_Fire_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDMWeaponBase_Server_Fire_Statics::NewProp_MuzzleRotationVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDMWeaponBase_Server_Fire_Statics::NewProp_SpawnLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDMWeaponBase_Server_Fire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Game/Weapon/TDMWeaponBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDMWeaponBase_Server_Fire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDMWeaponBase, nullptr, "Server_Fire", nullptr, nullptr, sizeof(TDMWeaponBase_eventServer_Fire_Parms), Z_Construct_UFunction_ATDMWeaponBase_Server_Fire_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDMWeaponBase_Server_Fire_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDMWeaponBase_Server_Fire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDMWeaponBase_Server_Fire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDMWeaponBase_Server_Fire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATDMWeaponBase_Server_Fire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATDMWeaponBase_NoRegister()
	{
		return ATDMWeaponBase::StaticClass();
	}
	struct Z_Construct_UClass_ATDMWeaponBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Muzzle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Muzzle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Optic_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Optic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MagazineAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MagazineAmmo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalAmmoCapacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalAmmoCapacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MagazineCapacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MagazineCapacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HipFireNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HipFireNames;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_HipFireNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ADSFireNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ADSFireNames;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ADSFireNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstPersonMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FirstPersonMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BurstFireAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BurstFireAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireModes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FireModes;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FireModes_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FireModes_Inner_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATDMWeaponBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TDMDeathmatch,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATDMWeaponBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATDMWeaponBase_AddAttachment, "AddAttachment" }, // 2450266344
		{ &Z_Construct_UFunction_ATDMWeaponBase_Multi_Fire, "Multi_Fire" }, // 3723914427
		{ &Z_Construct_UFunction_ATDMWeaponBase_OnHit, "OnHit" }, // 3892192549
		{ &Z_Construct_UFunction_ATDMWeaponBase_Server_AddAttachment, "Server_AddAttachment" }, // 2049398816
		{ &Z_Construct_UFunction_ATDMWeaponBase_Server_Fire, "Server_Fire" }, // 3096517451
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDMWeaponBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Game/Weapon/TDMWeaponBase.h" },
		{ "ModuleRelativePath", "Public/Game/Weapon/TDMWeaponBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDMWeaponBase_Statics::NewProp_Muzzle_MetaData[] = {
		{ "ModuleRelativePath", "Public/Game/Weapon/TDMWeaponBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATDMWeaponBase_Statics::NewProp_Muzzle = { "Muzzle", nullptr, (EPropertyFlags)0x0020080000000020, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATDMWeaponBase, Muzzle), Z_Construct_UClass_ATDMAttachment_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATDMWeaponBase_Statics::NewProp_Muzzle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDMWeaponBase_Statics::NewProp_Muzzle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDMWeaponBase_Statics::NewProp_Optic_MetaData[] = {
		{ "ModuleRelativePath", "Public/Game/Weapon/TDMWeaponBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATDMWeaponBase_Statics::NewProp_Optic = { "Optic", nullptr, (EPropertyFlags)0x0020080000000020, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATDMWeaponBase, Optic), Z_Construct_UClass_ATDMAttachment_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATDMWeaponBase_Statics::NewProp_Optic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDMWeaponBase_Statics::NewProp_Optic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDMWeaponBase_Statics::NewProp_MagazineAmmo_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Game/Weapon/TDMWeaponBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATDMWeaponBase_Statics::NewProp_MagazineAmmo = { "MagazineAmmo", nullptr, (EPropertyFlags)0x0020080000000034, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATDMWeaponBase, MagazineAmmo), METADATA_PARAMS(Z_Construct_UClass_ATDMWeaponBase_Statics::NewProp_MagazineAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDMWeaponBase_Statics::NewProp_MagazineAmmo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDMWeaponBase_Statics::NewProp_TotalAmmoCapacity_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Game/Weapon/TDMWeaponBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATDMWeaponBase_Statics::NewProp_TotalAmmoCapacity = { "TotalAmmoCapacity", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATDMWeaponBase, TotalAmmoCapacity), METADATA_PARAMS(Z_Construct_UClass_ATDMWeaponBase_Statics::NewProp_TotalAmmoCapacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDMWeaponBase_Statics::NewProp_TotalAmmoCapacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDMWeaponBase_Statics::NewProp_MagazineCapacity_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Game/Weapon/TDMWeaponBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATDMWeaponBase_Statics::NewProp_MagazineCapacity = { "MagazineCapacity", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATDMWeaponBase, MagazineCapacity), METADATA_PARAMS(Z_Construct_UClass_ATDMWeaponBase_Statics::NewProp_MagazineCapacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDMWeaponBase_Statics::NewProp_MagazineCapacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDMWeaponBase_Statics::NewProp_WeaponMesh_MetaData[] = {
		{ "Category", "Weapon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Game/Weapon/TDMWeaponBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATDMWeaponBase_Statics::NewProp_WeaponMesh = { "WeaponMesh", nullptr, (EPropertyFlags)0x0020080000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATDMWeaponBase, WeaponMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATDMWeaponBase_Statics::NewProp_WeaponMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDMWeaponBase_Statics::NewProp_WeaponMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDMWeaponBase_Statics::NewProp_HipFireNames_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Game/Weapon/TDMWeaponBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATDMWeaponBase_Statics::NewProp_HipFireNames = { "HipFireNames", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATDMWeaponBase, HipFireNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATDMWeaponBase_Statics::NewProp_HipFireNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDMWeaponBase_Statics::NewProp_HipFireNames_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ATDMWeaponBase_Statics::NewProp_HipFireNames_Inner = { "HipFireNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDMWeaponBase_Statics::NewProp_ADSFireNames_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Game/Weapon/TDMWeaponBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATDMWeaponBase_Statics::NewProp_ADSFireNames = { "ADSFireNames", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATDMWeaponBase, ADSFireNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATDMWeaponBase_Statics::NewProp_ADSFireNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDMWeaponBase_Statics::NewProp_ADSFireNames_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ATDMWeaponBase_Statics::NewProp_ADSFireNames_Inner = { "ADSFireNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDMWeaponBase_Statics::NewProp_FirstPersonMontage_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Game/Weapon/TDMWeaponBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATDMWeaponBase_Statics::NewProp_FirstPersonMontage = { "FirstPersonMontage", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATDMWeaponBase, FirstPersonMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATDMWeaponBase_Statics::NewProp_FirstPersonMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDMWeaponBase_Statics::NewProp_FirstPersonMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDMWeaponBase_Statics::NewProp_FireAnimation_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Game/Weapon/TDMWeaponBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATDMWeaponBase_Statics::NewProp_FireAnimation = { "FireAnimation", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATDMWeaponBase, FireAnimation), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATDMWeaponBase_Statics::NewProp_FireAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDMWeaponBase_Statics::NewProp_FireAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDMWeaponBase_Statics::NewProp_BurstFireAmount_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Game/Weapon/TDMWeaponBase.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATDMWeaponBase_Statics::NewProp_BurstFireAmount = { "BurstFireAmount", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATDMWeaponBase, BurstFireAmount), nullptr, METADATA_PARAMS(Z_Construct_UClass_ATDMWeaponBase_Statics::NewProp_BurstFireAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDMWeaponBase_Statics::NewProp_BurstFireAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDMWeaponBase_Statics::NewProp_FireModes_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Game/Weapon/TDMWeaponBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATDMWeaponBase_Statics::NewProp_FireModes = { "FireModes", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATDMWeaponBase, FireModes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATDMWeaponBase_Statics::NewProp_FireModes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDMWeaponBase_Statics::NewProp_FireModes_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ATDMWeaponBase_Statics::NewProp_FireModes_Inner = { "FireModes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_TDMDeathmatch_EFireMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATDMWeaponBase_Statics::NewProp_FireModes_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDMWeaponBase_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/Game/Weapon/TDMWeaponBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATDMWeaponBase_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATDMWeaponBase, ProjectileClass), Z_Construct_UClass_ATDMProjectileBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ATDMWeaponBase_Statics::NewProp_ProjectileClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDMWeaponBase_Statics::NewProp_ProjectileClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATDMWeaponBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDMWeaponBase_Statics::NewProp_Muzzle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDMWeaponBase_Statics::NewProp_Optic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDMWeaponBase_Statics::NewProp_MagazineAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDMWeaponBase_Statics::NewProp_TotalAmmoCapacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDMWeaponBase_Statics::NewProp_MagazineCapacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDMWeaponBase_Statics::NewProp_WeaponMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDMWeaponBase_Statics::NewProp_HipFireNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDMWeaponBase_Statics::NewProp_HipFireNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDMWeaponBase_Statics::NewProp_ADSFireNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDMWeaponBase_Statics::NewProp_ADSFireNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDMWeaponBase_Statics::NewProp_FirstPersonMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDMWeaponBase_Statics::NewProp_FireAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDMWeaponBase_Statics::NewProp_BurstFireAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDMWeaponBase_Statics::NewProp_FireModes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDMWeaponBase_Statics::NewProp_FireModes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDMWeaponBase_Statics::NewProp_FireModes_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDMWeaponBase_Statics::NewProp_ProjectileClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATDMWeaponBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATDMWeaponBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATDMWeaponBase_Statics::ClassParams = {
		&ATDMWeaponBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATDMWeaponBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATDMWeaponBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATDMWeaponBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATDMWeaponBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATDMWeaponBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATDMWeaponBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATDMWeaponBase, 2250801211);
	template<> TDMDEATHMATCH_API UClass* StaticClass<ATDMWeaponBase>()
	{
		return ATDMWeaponBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATDMWeaponBase(Z_Construct_UClass_ATDMWeaponBase, &ATDMWeaponBase::StaticClass, TEXT("/Script/TDMDeathmatch"), TEXT("ATDMWeaponBase"), false, nullptr, nullptr, nullptr);

	void ATDMWeaponBase::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_MagazineAmmo(TEXT("MagazineAmmo"));
		static const FName Name_Optic(TEXT("Optic"));
		static const FName Name_Muzzle(TEXT("Muzzle"));

		const bool bIsValid = true
			&& Name_MagazineAmmo == ClassReps[(int32)ENetFields_Private::MagazineAmmo].Property->GetFName()
			&& Name_Optic == ClassReps[(int32)ENetFields_Private::Optic].Property->GetFName()
			&& Name_Muzzle == ClassReps[(int32)ENetFields_Private::Muzzle].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ATDMWeaponBase"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATDMWeaponBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
