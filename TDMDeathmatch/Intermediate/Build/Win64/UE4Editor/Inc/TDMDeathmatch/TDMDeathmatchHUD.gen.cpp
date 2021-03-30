// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TDMDeathmatch/TDMDeathmatchHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTDMDeathmatchHUD() {}
// Cross Module References
	TDMDEATHMATCH_API UClass* Z_Construct_UClass_ATDMDeathmatchHUD_NoRegister();
	TDMDEATHMATCH_API UClass* Z_Construct_UClass_ATDMDeathmatchHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_TDMDeathmatch();
// End Cross Module References
	void ATDMDeathmatchHUD::StaticRegisterNativesATDMDeathmatchHUD()
	{
	}
	UClass* Z_Construct_UClass_ATDMDeathmatchHUD_NoRegister()
	{
		return ATDMDeathmatchHUD::StaticClass();
	}
	struct Z_Construct_UClass_ATDMDeathmatchHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATDMDeathmatchHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_TDMDeathmatch,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDMDeathmatchHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "TDMDeathmatchHUD.h" },
		{ "ModuleRelativePath", "TDMDeathmatchHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATDMDeathmatchHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATDMDeathmatchHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATDMDeathmatchHUD_Statics::ClassParams = {
		&ATDMDeathmatchHUD::StaticClass,
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
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATDMDeathmatchHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATDMDeathmatchHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATDMDeathmatchHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATDMDeathmatchHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATDMDeathmatchHUD, 142353844);
	template<> TDMDEATHMATCH_API UClass* StaticClass<ATDMDeathmatchHUD>()
	{
		return ATDMDeathmatchHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATDMDeathmatchHUD(Z_Construct_UClass_ATDMDeathmatchHUD, &ATDMDeathmatchHUD::StaticClass, TEXT("/Script/TDMDeathmatch"), TEXT("ATDMDeathmatchHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATDMDeathmatchHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
