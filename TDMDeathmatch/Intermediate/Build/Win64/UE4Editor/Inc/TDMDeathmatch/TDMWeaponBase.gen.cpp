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
	TDMDEATHMATCH_API UClass* Z_Construct_UClass_ATDMWeaponBase_NoRegister();
	TDMDEATHMATCH_API UClass* Z_Construct_UClass_ATDMWeaponBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TDMDeathmatch();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimationAsset_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	TDMDEATHMATCH_API UClass* Z_Construct_UClass_ATDMProjectileBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ATDMWeaponBase::execMulti_Fire)
	{
		P_GET_STRUCT(FVector,Z_Param_SpawnLocation);
		P_GET_STRUCT(FRotator,Z_Param_SpawnRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Multi_Fire_Validate(Z_Param_SpawnLocation,Z_Param_SpawnRotation))
		{
			RPC_ValidateFailed(TEXT("Multi_Fire_Validate"));
			return;
		}
		P_THIS->Multi_Fire_Implementation(Z_Param_SpawnLocation,Z_Param_SpawnRotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDMWeaponBase::execServer_Fire)
	{
		P_GET_STRUCT(FVector,Z_Param_SpawnLocation);
		P_GET_STRUCT(FRotator,Z_Param_SpawnRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_Fire_Validate(Z_Param_SpawnLocation,Z_Param_SpawnRotation))
		{
			RPC_ValidateFailed(TEXT("Server_Fire_Validate"));
			return;
		}
		P_THIS->Server_Fire_Implementation(Z_Param_SpawnLocation,Z_Param_SpawnRotation);
		P_NATIVE_END;
	}
	static FName NAME_ATDMWeaponBase_Multi_Fire = FName(TEXT("Multi_Fire"));
	void ATDMWeaponBase::Multi_Fire(FVector SpawnLocation, FRotator SpawnRotation)
	{
		TDMWeaponBase_eventMulti_Fire_Parms Parms;
		Parms.SpawnLocation=SpawnLocation;
		Parms.SpawnRotation=SpawnRotation;
		ProcessEvent(FindFunctionChecked(NAME_ATDMWeaponBase_Multi_Fire),&Parms);
	}
	static FName NAME_ATDMWeaponBase_OnHit = FName(TEXT("OnHit"));
	void ATDMWeaponBase::OnHit(FHitResult HitResult)
	{
		TDMWeaponBase_eventOnHit_Parms Parms;
		Parms.HitResult=HitResult;
		ProcessEvent(FindFunctionChecked(NAME_ATDMWeaponBase_OnHit),&Parms);
	}
	static FName NAME_ATDMWeaponBase_Server_Fire = FName(TEXT("Server_Fire"));
	void ATDMWeaponBase::Server_Fire(FVector SpawnLocation, FRotator SpawnRotation)
	{
		TDMWeaponBase_eventServer_Fire_Parms Parms;
		Parms.SpawnLocation=SpawnLocation;
		Parms.SpawnRotation=SpawnRotation;
		ProcessEvent(FindFunctionChecked(NAME_ATDMWeaponBase_Server_Fire),&Parms);
	}
	void ATDMWeaponBase::StaticRegisterNativesATDMWeaponBase()
	{
		UClass* Class = ATDMWeaponBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Multi_Fire", &ATDMWeaponBase::execMulti_Fire },
			{ "Server_Fire", &ATDMWeaponBase::execServer_Fire },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATDMWeaponBase_Multi_Fire_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnRotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATDMWeaponBase_Multi_Fire_Statics::NewProp_SpawnRotation = { "SpawnRotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TDMWeaponBase_eventMulti_Fire_Parms, SpawnRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATDMWeaponBase_Multi_Fire_Statics::NewProp_SpawnLocation = { "SpawnLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TDMWeaponBase_eventMulti_Fire_Parms, SpawnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDMWeaponBase_Multi_Fire_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDMWeaponBase_Multi_Fire_Statics::NewProp_SpawnRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDMWeaponBase_Multi_Fire_Statics::NewProp_SpawnLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDMWeaponBase_Multi_Fire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Game/Weapon/TDMWeaponBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDMWeaponBase_Multi_Fire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDMWeaponBase, nullptr, "Multi_Fire", nullptr, nullptr, sizeof(TDMWeaponBase_eventMulti_Fire_Parms), Z_Construct_UFunction_ATDMWeaponBase_Multi_Fire_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDMWeaponBase_Multi_Fire_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80884CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDMWeaponBase_Multi_Fire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDMWeaponBase_Multi_Fire_Statics::Function_MetaDataParams)) };
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
	struct Z_Construct_UFunction_ATDMWeaponBase_Server_Fire_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnRotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATDMWeaponBase_Server_Fire_Statics::NewProp_SpawnRotation = { "SpawnRotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TDMWeaponBase_eventServer_Fire_Parms, SpawnRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATDMWeaponBase_Server_Fire_Statics::NewProp_SpawnLocation = { "SpawnLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TDMWeaponBase_eventServer_Fire_Parms, SpawnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDMWeaponBase_Server_Fire_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDMWeaponBase_Server_Fire_Statics::NewProp_SpawnRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDMWeaponBase_Server_Fire_Statics::NewProp_SpawnLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDMWeaponBase_Server_Fire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Game/Weapon/TDMWeaponBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDMWeaponBase_Server_Fire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDMWeaponBase, nullptr, "Server_Fire", nullptr, nullptr, sizeof(TDMWeaponBase_eventServer_Fire_Parms), Z_Construct_UFunction_ATDMWeaponBase_Server_Fire_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDMWeaponBase_Server_Fire_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80A80CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDMWeaponBase_Server_Fire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDMWeaponBase_Server_Fire_Statics::Function_MetaDataParams)) };
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
		{ &Z_Construct_UFunction_ATDMWeaponBase_Multi_Fire, "Multi_Fire" }, // 2271622185
		{ &Z_Construct_UFunction_ATDMWeaponBase_OnHit, "OnHit" }, // 3892192549
		{ &Z_Construct_UFunction_ATDMWeaponBase_Server_Fire, "Server_Fire" }, // 1361142559
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDMWeaponBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Game/Weapon/TDMWeaponBase.h" },
		{ "ModuleRelativePath", "Public/Game/Weapon/TDMWeaponBase.h" },
	};
#endif
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDMWeaponBase_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/Game/Weapon/TDMWeaponBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATDMWeaponBase_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATDMWeaponBase, ProjectileClass), Z_Construct_UClass_ATDMProjectileBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ATDMWeaponBase_Statics::NewProp_ProjectileClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDMWeaponBase_Statics::NewProp_ProjectileClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATDMWeaponBase_Statics::PropPointers[] = {
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
	IMPLEMENT_CLASS(ATDMWeaponBase, 2251478707);
	template<> TDMDEATHMATCH_API UClass* StaticClass<ATDMWeaponBase>()
	{
		return ATDMWeaponBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATDMWeaponBase(Z_Construct_UClass_ATDMWeaponBase, &ATDMWeaponBase::StaticClass, TEXT("/Script/TDMDeathmatch"), TEXT("ATDMWeaponBase"), false, nullptr, nullptr, nullptr);

	void ATDMWeaponBase::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_MagazineAmmo(TEXT("MagazineAmmo"));

		const bool bIsValid = true
			&& Name_MagazineAmmo == ClassReps[(int32)ENetFields_Private::MagazineAmmo].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ATDMWeaponBase"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATDMWeaponBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
