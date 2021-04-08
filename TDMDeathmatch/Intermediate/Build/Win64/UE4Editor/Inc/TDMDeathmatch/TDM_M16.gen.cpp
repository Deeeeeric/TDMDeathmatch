// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TDMDeathmatch/Public/Game/Weapon/Rifles/TDM_M16.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTDM_M16() {}
// Cross Module References
	TDMDEATHMATCH_API UClass* Z_Construct_UClass_ATDM_M16_NoRegister();
	TDMDEATHMATCH_API UClass* Z_Construct_UClass_ATDM_M16();
	TDMDEATHMATCH_API UClass* Z_Construct_UClass_ATDMWeaponBase();
	UPackage* Z_Construct_UPackage__Script_TDMDeathmatch();
// End Cross Module References
	void ATDM_M16::StaticRegisterNativesATDM_M16()
	{
	}
	UClass* Z_Construct_UClass_ATDM_M16_NoRegister()
	{
		return ATDM_M16::StaticClass();
	}
	struct Z_Construct_UClass_ATDM_M16_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATDM_M16_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATDMWeaponBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TDMDeathmatch,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDM_M16_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Game/Weapon/Rifles/TDM_M16.h" },
		{ "ModuleRelativePath", "Public/Game/Weapon/Rifles/TDM_M16.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATDM_M16_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATDM_M16>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATDM_M16_Statics::ClassParams = {
		&ATDM_M16::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ATDM_M16_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATDM_M16_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATDM_M16()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATDM_M16_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATDM_M16, 819291896);
	template<> TDMDEATHMATCH_API UClass* StaticClass<ATDM_M16>()
	{
		return ATDM_M16::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATDM_M16(Z_Construct_UClass_ATDM_M16, &ATDM_M16::StaticClass, TEXT("/Script/TDMDeathmatch"), TEXT("ATDM_M16"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATDM_M16);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
