// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TDMDeathmatch/TDMDeathmatchGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTDMDeathmatchGameMode() {}
// Cross Module References
	TDMDEATHMATCH_API UClass* Z_Construct_UClass_ATDMDeathmatchGameMode_NoRegister();
	TDMDEATHMATCH_API UClass* Z_Construct_UClass_ATDMDeathmatchGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_TDMDeathmatch();
// End Cross Module References
	void ATDMDeathmatchGameMode::StaticRegisterNativesATDMDeathmatchGameMode()
	{
	}
	UClass* Z_Construct_UClass_ATDMDeathmatchGameMode_NoRegister()
	{
		return ATDMDeathmatchGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATDMDeathmatchGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATDMDeathmatchGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TDMDeathmatch,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDMDeathmatchGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TDMDeathmatchGameMode.h" },
		{ "ModuleRelativePath", "TDMDeathmatchGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATDMDeathmatchGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATDMDeathmatchGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATDMDeathmatchGameMode_Statics::ClassParams = {
		&ATDMDeathmatchGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATDMDeathmatchGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATDMDeathmatchGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATDMDeathmatchGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATDMDeathmatchGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATDMDeathmatchGameMode, 3735785074);
	template<> TDMDEATHMATCH_API UClass* StaticClass<ATDMDeathmatchGameMode>()
	{
		return ATDMDeathmatchGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATDMDeathmatchGameMode(Z_Construct_UClass_ATDMDeathmatchGameMode, &ATDMDeathmatchGameMode::StaticClass, TEXT("/Script/TDMDeathmatch"), TEXT("ATDMDeathmatchGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATDMDeathmatchGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
