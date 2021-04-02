// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TDMDeathmatch/Public/Game/GameMode/TDMGameStateBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTDMGameStateBase() {}
// Cross Module References
	TDMDEATHMATCH_API UClass* Z_Construct_UClass_ATDMGameStateBase_NoRegister();
	TDMDEATHMATCH_API UClass* Z_Construct_UClass_ATDMGameStateBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
	UPackage* Z_Construct_UPackage__Script_TDMDeathmatch();
// End Cross Module References
	void ATDMGameStateBase::StaticRegisterNativesATDMGameStateBase()
	{
	}
	UClass* Z_Construct_UClass_ATDMGameStateBase_NoRegister()
	{
		return ATDMGameStateBase::StaticClass();
	}
	struct Z_Construct_UClass_ATDMGameStateBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BravoTeamScore_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_BravoTeamScore;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlphaTeamScore_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_AlphaTeamScore;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IncrementScoreValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_IncrementScoreValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScoreToWin_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ScoreToWin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATDMGameStateBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameStateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TDMDeathmatch,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDMGameStateBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Game/GameMode/TDMGameStateBase.h" },
		{ "ModuleRelativePath", "Public/Game/GameMode/TDMGameStateBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDMGameStateBase_Statics::NewProp_BravoTeamScore_MetaData[] = {
		{ "Category", "TDMGameStateBase" },
		{ "ModuleRelativePath", "Public/Game/GameMode/TDMGameStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ATDMGameStateBase_Statics::NewProp_BravoTeamScore = { "BravoTeamScore", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATDMGameStateBase, BravoTeamScore), METADATA_PARAMS(Z_Construct_UClass_ATDMGameStateBase_Statics::NewProp_BravoTeamScore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDMGameStateBase_Statics::NewProp_BravoTeamScore_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDMGameStateBase_Statics::NewProp_AlphaTeamScore_MetaData[] = {
		{ "Category", "TDMGameStateBase" },
		{ "ModuleRelativePath", "Public/Game/GameMode/TDMGameStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ATDMGameStateBase_Statics::NewProp_AlphaTeamScore = { "AlphaTeamScore", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATDMGameStateBase, AlphaTeamScore), METADATA_PARAMS(Z_Construct_UClass_ATDMGameStateBase_Statics::NewProp_AlphaTeamScore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDMGameStateBase_Statics::NewProp_AlphaTeamScore_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDMGameStateBase_Statics::NewProp_IncrementScoreValue_MetaData[] = {
		{ "Category", "TDMGameStateBase" },
		{ "ModuleRelativePath", "Public/Game/GameMode/TDMGameStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ATDMGameStateBase_Statics::NewProp_IncrementScoreValue = { "IncrementScoreValue", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATDMGameStateBase, IncrementScoreValue), METADATA_PARAMS(Z_Construct_UClass_ATDMGameStateBase_Statics::NewProp_IncrementScoreValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDMGameStateBase_Statics::NewProp_IncrementScoreValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDMGameStateBase_Statics::NewProp_ScoreToWin_MetaData[] = {
		{ "Category", "TDMGameStateBase" },
		{ "ModuleRelativePath", "Public/Game/GameMode/TDMGameStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ATDMGameStateBase_Statics::NewProp_ScoreToWin = { "ScoreToWin", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATDMGameStateBase, ScoreToWin), METADATA_PARAMS(Z_Construct_UClass_ATDMGameStateBase_Statics::NewProp_ScoreToWin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDMGameStateBase_Statics::NewProp_ScoreToWin_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATDMGameStateBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDMGameStateBase_Statics::NewProp_BravoTeamScore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDMGameStateBase_Statics::NewProp_AlphaTeamScore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDMGameStateBase_Statics::NewProp_IncrementScoreValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDMGameStateBase_Statics::NewProp_ScoreToWin,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATDMGameStateBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATDMGameStateBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATDMGameStateBase_Statics::ClassParams = {
		&ATDMGameStateBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATDMGameStateBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATDMGameStateBase_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATDMGameStateBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATDMGameStateBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATDMGameStateBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATDMGameStateBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATDMGameStateBase, 940226639);
	template<> TDMDEATHMATCH_API UClass* StaticClass<ATDMGameStateBase>()
	{
		return ATDMGameStateBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATDMGameStateBase(Z_Construct_UClass_ATDMGameStateBase, &ATDMGameStateBase::StaticClass, TEXT("/Script/TDMDeathmatch"), TEXT("ATDMGameStateBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATDMGameStateBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
