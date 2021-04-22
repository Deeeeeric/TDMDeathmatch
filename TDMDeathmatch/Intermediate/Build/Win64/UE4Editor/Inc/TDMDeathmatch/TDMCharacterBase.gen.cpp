// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TDMDeathmatch/Public/Player/TDMCharacterBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTDMCharacterBase() {}
// Cross Module References
	TDMDEATHMATCH_API UClass* Z_Construct_UClass_ATDMCharacterBase_NoRegister();
	TDMDEATHMATCH_API UClass* Z_Construct_UClass_ATDMCharacterBase();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_TDMDeathmatch();
	TDMDEATHMATCH_API UScriptStruct* Z_Construct_UScriptStruct_FFirearmToSpawn();
	TDMDEATHMATCH_API UClass* Z_Construct_UClass_ATDMWeaponBase_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ATDMCharacterBase::execServer_Aim)
	{
		P_GET_UBOOL(Z_Param_Aiming);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_Aim_Validate(Z_Param_Aiming))
		{
			RPC_ValidateFailed(TEXT("Server_Aim_Validate"));
			return;
		}
		P_THIS->Server_Aim_Implementation(Z_Param_Aiming);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDMCharacterBase::execServer_SpawnFirearm)
	{
		P_GET_STRUCT(FFirearmToSpawn,Z_Param_FirearmToSpawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_SpawnFirearm_Validate(Z_Param_FirearmToSpawn))
		{
			RPC_ValidateFailed(TEXT("Server_SpawnFirearm_Validate"));
			return;
		}
		P_THIS->Server_SpawnFirearm_Implementation(Z_Param_FirearmToSpawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDMCharacterBase::execSpawnWeapon)
	{
		P_GET_STRUCT(FFirearmToSpawn,Z_Param_FirearmToSpawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnWeapon(Z_Param_FirearmToSpawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDMCharacterBase::execOnRep_WeaponInHand)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_WeaponInHand();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDMCharacterBase::execOnRep_IsDead)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_IsDead();
		P_NATIVE_END;
	}
	static FName NAME_ATDMCharacterBase_Server_Aim = FName(TEXT("Server_Aim"));
	void ATDMCharacterBase::Server_Aim(bool Aiming)
	{
		TDMCharacterBase_eventServer_Aim_Parms Parms;
		Parms.Aiming=Aiming ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ATDMCharacterBase_Server_Aim),&Parms);
	}
	static FName NAME_ATDMCharacterBase_Server_SpawnFirearm = FName(TEXT("Server_SpawnFirearm"));
	void ATDMCharacterBase::Server_SpawnFirearm(FFirearmToSpawn FirearmToSpawn)
	{
		TDMCharacterBase_eventServer_SpawnFirearm_Parms Parms;
		Parms.FirearmToSpawn=FirearmToSpawn;
		ProcessEvent(FindFunctionChecked(NAME_ATDMCharacterBase_Server_SpawnFirearm),&Parms);
	}
	static FName NAME_ATDMCharacterBase_WeaponFired = FName(TEXT("WeaponFired"));
	void ATDMCharacterBase::WeaponFired(ATDMWeaponBase* Weapon)
	{
		TDMCharacterBase_eventWeaponFired_Parms Parms;
		Parms.Weapon=Weapon;
		ProcessEvent(FindFunctionChecked(NAME_ATDMCharacterBase_WeaponFired),&Parms);
	}
	void ATDMCharacterBase::StaticRegisterNativesATDMCharacterBase()
	{
		UClass* Class = ATDMCharacterBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_IsDead", &ATDMCharacterBase::execOnRep_IsDead },
			{ "OnRep_WeaponInHand", &ATDMCharacterBase::execOnRep_WeaponInHand },
			{ "Server_Aim", &ATDMCharacterBase::execServer_Aim },
			{ "Server_SpawnFirearm", &ATDMCharacterBase::execServer_SpawnFirearm },
			{ "SpawnWeapon", &ATDMCharacterBase::execSpawnWeapon },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATDMCharacterBase_OnRep_IsDead_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDMCharacterBase_OnRep_IsDead_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/TDMCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDMCharacterBase_OnRep_IsDead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDMCharacterBase, nullptr, "OnRep_IsDead", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDMCharacterBase_OnRep_IsDead_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDMCharacterBase_OnRep_IsDead_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDMCharacterBase_OnRep_IsDead()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATDMCharacterBase_OnRep_IsDead_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDMCharacterBase_OnRep_WeaponInHand_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDMCharacterBase_OnRep_WeaponInHand_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/TDMCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDMCharacterBase_OnRep_WeaponInHand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDMCharacterBase, nullptr, "OnRep_WeaponInHand", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDMCharacterBase_OnRep_WeaponInHand_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDMCharacterBase_OnRep_WeaponInHand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDMCharacterBase_OnRep_WeaponInHand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATDMCharacterBase_OnRep_WeaponInHand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDMCharacterBase_Server_Aim_Statics
	{
		static void NewProp_Aiming_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Aiming;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ATDMCharacterBase_Server_Aim_Statics::NewProp_Aiming_SetBit(void* Obj)
	{
		((TDMCharacterBase_eventServer_Aim_Parms*)Obj)->Aiming = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATDMCharacterBase_Server_Aim_Statics::NewProp_Aiming = { "Aiming", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TDMCharacterBase_eventServer_Aim_Parms), &Z_Construct_UFunction_ATDMCharacterBase_Server_Aim_Statics::NewProp_Aiming_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDMCharacterBase_Server_Aim_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDMCharacterBase_Server_Aim_Statics::NewProp_Aiming,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDMCharacterBase_Server_Aim_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/TDMCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDMCharacterBase_Server_Aim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDMCharacterBase, nullptr, "Server_Aim", nullptr, nullptr, sizeof(TDMCharacterBase_eventServer_Aim_Parms), Z_Construct_UFunction_ATDMCharacterBase_Server_Aim_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDMCharacterBase_Server_Aim_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDMCharacterBase_Server_Aim_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDMCharacterBase_Server_Aim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDMCharacterBase_Server_Aim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATDMCharacterBase_Server_Aim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDMCharacterBase_Server_SpawnFirearm_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FirearmToSpawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATDMCharacterBase_Server_SpawnFirearm_Statics::NewProp_FirearmToSpawn = { "FirearmToSpawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TDMCharacterBase_eventServer_SpawnFirearm_Parms, FirearmToSpawn), Z_Construct_UScriptStruct_FFirearmToSpawn, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDMCharacterBase_Server_SpawnFirearm_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDMCharacterBase_Server_SpawnFirearm_Statics::NewProp_FirearmToSpawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDMCharacterBase_Server_SpawnFirearm_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/TDMCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDMCharacterBase_Server_SpawnFirearm_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDMCharacterBase, nullptr, "Server_SpawnFirearm", nullptr, nullptr, sizeof(TDMCharacterBase_eventServer_SpawnFirearm_Parms), Z_Construct_UFunction_ATDMCharacterBase_Server_SpawnFirearm_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDMCharacterBase_Server_SpawnFirearm_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDMCharacterBase_Server_SpawnFirearm_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDMCharacterBase_Server_SpawnFirearm_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDMCharacterBase_Server_SpawnFirearm()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATDMCharacterBase_Server_SpawnFirearm_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDMCharacterBase_SpawnWeapon_Statics
	{
		struct TDMCharacterBase_eventSpawnWeapon_Parms
		{
			FFirearmToSpawn FirearmToSpawn;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FirearmToSpawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATDMCharacterBase_SpawnWeapon_Statics::NewProp_FirearmToSpawn = { "FirearmToSpawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TDMCharacterBase_eventSpawnWeapon_Parms, FirearmToSpawn), Z_Construct_UScriptStruct_FFirearmToSpawn, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDMCharacterBase_SpawnWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDMCharacterBase_SpawnWeapon_Statics::NewProp_FirearmToSpawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDMCharacterBase_SpawnWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/TDMCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDMCharacterBase_SpawnWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDMCharacterBase, nullptr, "SpawnWeapon", nullptr, nullptr, sizeof(TDMCharacterBase_eventSpawnWeapon_Parms), Z_Construct_UFunction_ATDMCharacterBase_SpawnWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDMCharacterBase_SpawnWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDMCharacterBase_SpawnWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDMCharacterBase_SpawnWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDMCharacterBase_SpawnWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATDMCharacterBase_SpawnWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDMCharacterBase_WeaponFired_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Weapon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATDMCharacterBase_WeaponFired_Statics::NewProp_Weapon = { "Weapon", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TDMCharacterBase_eventWeaponFired_Parms, Weapon), Z_Construct_UClass_ATDMWeaponBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDMCharacterBase_WeaponFired_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDMCharacterBase_WeaponFired_Statics::NewProp_Weapon,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDMCharacterBase_WeaponFired_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon | HUD" },
		{ "ModuleRelativePath", "Public/Player/TDMCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDMCharacterBase_WeaponFired_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDMCharacterBase, nullptr, "WeaponFired", nullptr, nullptr, sizeof(TDMCharacterBase_eventWeaponFired_Parms), Z_Construct_UFunction_ATDMCharacterBase_WeaponFired_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDMCharacterBase_WeaponFired_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDMCharacterBase_WeaponFired_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDMCharacterBase_WeaponFired_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDMCharacterBase_WeaponFired()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATDMCharacterBase_WeaponFired_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATDMCharacterBase_NoRegister()
	{
		return ATDMCharacterBase::StaticClass();
	}
	struct Z_Construct_UClass_ATDMCharacterBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsAiming_MetaData[];
#endif
		static void NewProp_bIsAiming_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAiming;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponInHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponInHand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponToSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WeaponToSpawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsDead_MetaData[];
#endif
		static void NewProp_bIsDead_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDead;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FirstPersonCameraComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh1P_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh1P;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATDMCharacterBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_TDMDeathmatch,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATDMCharacterBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATDMCharacterBase_OnRep_IsDead, "OnRep_IsDead" }, // 1214299108
		{ &Z_Construct_UFunction_ATDMCharacterBase_OnRep_WeaponInHand, "OnRep_WeaponInHand" }, // 1930053663
		{ &Z_Construct_UFunction_ATDMCharacterBase_Server_Aim, "Server_Aim" }, // 40076570
		{ &Z_Construct_UFunction_ATDMCharacterBase_Server_SpawnFirearm, "Server_SpawnFirearm" }, // 1753500193
		{ &Z_Construct_UFunction_ATDMCharacterBase_SpawnWeapon, "SpawnWeapon" }, // 2730230084
		{ &Z_Construct_UFunction_ATDMCharacterBase_WeaponFired, "WeaponFired" }, // 4210005316
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDMCharacterBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player/TDMCharacterBase.h" },
		{ "ModuleRelativePath", "Public/Player/TDMCharacterBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDMCharacterBase_Statics::NewProp_bIsAiming_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Player/TDMCharacterBase.h" },
	};
#endif
	void Z_Construct_UClass_ATDMCharacterBase_Statics::NewProp_bIsAiming_SetBit(void* Obj)
	{
		((ATDMCharacterBase*)Obj)->bIsAiming = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATDMCharacterBase_Statics::NewProp_bIsAiming = { "bIsAiming", nullptr, (EPropertyFlags)0x0020080000000034, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATDMCharacterBase), &Z_Construct_UClass_ATDMCharacterBase_Statics::NewProp_bIsAiming_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATDMCharacterBase_Statics::NewProp_bIsAiming_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDMCharacterBase_Statics::NewProp_bIsAiming_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDMCharacterBase_Statics::NewProp_WeaponInHand_MetaData[] = {
		{ "Category", "TDMCharacterBase" },
		{ "ModuleRelativePath", "Public/Player/TDMCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATDMCharacterBase_Statics::NewProp_WeaponInHand = { "WeaponInHand", "OnRep_WeaponInHand", (EPropertyFlags)0x0020080100000034, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATDMCharacterBase, WeaponInHand), Z_Construct_UClass_ATDMWeaponBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATDMCharacterBase_Statics::NewProp_WeaponInHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDMCharacterBase_Statics::NewProp_WeaponInHand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDMCharacterBase_Statics::NewProp_WeaponToSpawn_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Player/TDMCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATDMCharacterBase_Statics::NewProp_WeaponToSpawn = { "WeaponToSpawn", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATDMCharacterBase, WeaponToSpawn), Z_Construct_UClass_ATDMWeaponBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ATDMCharacterBase_Statics::NewProp_WeaponToSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDMCharacterBase_Statics::NewProp_WeaponToSpawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDMCharacterBase_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/Player/TDMCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATDMCharacterBase_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATDMCharacterBase, BaseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_ATDMCharacterBase_Statics::NewProp_BaseLookUpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDMCharacterBase_Statics::NewProp_BaseLookUpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDMCharacterBase_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/Player/TDMCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATDMCharacterBase_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATDMCharacterBase, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_ATDMCharacterBase_Statics::NewProp_BaseTurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDMCharacterBase_Statics::NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDMCharacterBase_Statics::NewProp_bIsDead_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/TDMCharacterBase.h" },
	};
#endif
	void Z_Construct_UClass_ATDMCharacterBase_Statics::NewProp_bIsDead_SetBit(void* Obj)
	{
		((ATDMCharacterBase*)Obj)->bIsDead = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATDMCharacterBase_Statics::NewProp_bIsDead = { "bIsDead", "OnRep_IsDead", (EPropertyFlags)0x0010000100000020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATDMCharacterBase), &Z_Construct_UClass_ATDMCharacterBase_Statics::NewProp_bIsDead_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATDMCharacterBase_Statics::NewProp_bIsDead_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDMCharacterBase_Statics::NewProp_bIsDead_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDMCharacterBase_Statics::NewProp_FirstPersonCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** First person camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/TDMCharacterBase.h" },
		{ "ToolTip", "First person camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATDMCharacterBase_Statics::NewProp_FirstPersonCameraComponent = { "FirstPersonCameraComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATDMCharacterBase, FirstPersonCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATDMCharacterBase_Statics::NewProp_FirstPersonCameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDMCharacterBase_Statics::NewProp_FirstPersonCameraComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDMCharacterBase_Statics::NewProp_Mesh1P_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Pawn mesh: 1st person view (arms; seen only by self) */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/TDMCharacterBase.h" },
		{ "ToolTip", "Pawn mesh: 1st person view (arms; seen only by self)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATDMCharacterBase_Statics::NewProp_Mesh1P = { "Mesh1P", nullptr, (EPropertyFlags)0x00100000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATDMCharacterBase, Mesh1P), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATDMCharacterBase_Statics::NewProp_Mesh1P_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDMCharacterBase_Statics::NewProp_Mesh1P_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATDMCharacterBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDMCharacterBase_Statics::NewProp_bIsAiming,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDMCharacterBase_Statics::NewProp_WeaponInHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDMCharacterBase_Statics::NewProp_WeaponToSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDMCharacterBase_Statics::NewProp_BaseLookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDMCharacterBase_Statics::NewProp_BaseTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDMCharacterBase_Statics::NewProp_bIsDead,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDMCharacterBase_Statics::NewProp_FirstPersonCameraComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDMCharacterBase_Statics::NewProp_Mesh1P,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATDMCharacterBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATDMCharacterBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATDMCharacterBase_Statics::ClassParams = {
		&ATDMCharacterBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATDMCharacterBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATDMCharacterBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATDMCharacterBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATDMCharacterBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATDMCharacterBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATDMCharacterBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATDMCharacterBase, 3711265699);
	template<> TDMDEATHMATCH_API UClass* StaticClass<ATDMCharacterBase>()
	{
		return ATDMCharacterBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATDMCharacterBase(Z_Construct_UClass_ATDMCharacterBase, &ATDMCharacterBase::StaticClass, TEXT("/Script/TDMDeathmatch"), TEXT("ATDMCharacterBase"), false, nullptr, nullptr, nullptr);

	void ATDMCharacterBase::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bIsDead(TEXT("bIsDead"));
		static const FName Name_WeaponInHand(TEXT("WeaponInHand"));
		static const FName Name_bIsAiming(TEXT("bIsAiming"));

		const bool bIsValid = true
			&& Name_bIsDead == ClassReps[(int32)ENetFields_Private::bIsDead].Property->GetFName()
			&& Name_WeaponInHand == ClassReps[(int32)ENetFields_Private::WeaponInHand].Property->GetFName()
			&& Name_bIsAiming == ClassReps[(int32)ENetFields_Private::bIsAiming].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ATDMCharacterBase"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATDMCharacterBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
