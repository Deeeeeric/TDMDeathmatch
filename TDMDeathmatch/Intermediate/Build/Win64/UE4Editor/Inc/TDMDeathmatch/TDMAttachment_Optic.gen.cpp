// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TDMDeathmatch/Public/Game/Weapon/TDMAttachment_Optic.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTDMAttachment_Optic() {}
// Cross Module References
	TDMDEATHMATCH_API UClass* Z_Construct_UClass_ATDMAttachment_Optic_NoRegister();
	TDMDEATHMATCH_API UClass* Z_Construct_UClass_ATDMAttachment_Optic();
	TDMDEATHMATCH_API UClass* Z_Construct_UClass_ATDMAttachment();
	UPackage* Z_Construct_UPackage__Script_TDMDeathmatch();
// End Cross Module References
	void ATDMAttachment_Optic::StaticRegisterNativesATDMAttachment_Optic()
	{
	}
	UClass* Z_Construct_UClass_ATDMAttachment_Optic_NoRegister()
	{
		return ATDMAttachment_Optic::StaticClass();
	}
	struct Z_Construct_UClass_ATDMAttachment_Optic_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraFOVSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CameraFOVSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraFOV_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CameraFOV;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATDMAttachment_Optic_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATDMAttachment,
		(UObject* (*)())Z_Construct_UPackage__Script_TDMDeathmatch,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDMAttachment_Optic_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "Game/Weapon/TDMAttachment_Optic.h" },
		{ "ModuleRelativePath", "Public/Game/Weapon/TDMAttachment_Optic.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDMAttachment_Optic_Statics::NewProp_CameraFOVSpeed_MetaData[] = {
		{ "Category", "Optic" },
		{ "ModuleRelativePath", "Public/Game/Weapon/TDMAttachment_Optic.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATDMAttachment_Optic_Statics::NewProp_CameraFOVSpeed = { "CameraFOVSpeed", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATDMAttachment_Optic, CameraFOVSpeed), METADATA_PARAMS(Z_Construct_UClass_ATDMAttachment_Optic_Statics::NewProp_CameraFOVSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDMAttachment_Optic_Statics::NewProp_CameraFOVSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDMAttachment_Optic_Statics::NewProp_CameraFOV_MetaData[] = {
		{ "Category", "Optic" },
		{ "ModuleRelativePath", "Public/Game/Weapon/TDMAttachment_Optic.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATDMAttachment_Optic_Statics::NewProp_CameraFOV = { "CameraFOV", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATDMAttachment_Optic, CameraFOV), METADATA_PARAMS(Z_Construct_UClass_ATDMAttachment_Optic_Statics::NewProp_CameraFOV_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDMAttachment_Optic_Statics::NewProp_CameraFOV_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATDMAttachment_Optic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDMAttachment_Optic_Statics::NewProp_CameraFOVSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDMAttachment_Optic_Statics::NewProp_CameraFOV,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATDMAttachment_Optic_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATDMAttachment_Optic>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATDMAttachment_Optic_Statics::ClassParams = {
		&ATDMAttachment_Optic::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATDMAttachment_Optic_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATDMAttachment_Optic_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATDMAttachment_Optic_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATDMAttachment_Optic_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATDMAttachment_Optic()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATDMAttachment_Optic_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATDMAttachment_Optic, 2837963960);
	template<> TDMDEATHMATCH_API UClass* StaticClass<ATDMAttachment_Optic>()
	{
		return ATDMAttachment_Optic::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATDMAttachment_Optic(Z_Construct_UClass_ATDMAttachment_Optic, &ATDMAttachment_Optic::StaticClass, TEXT("/Script/TDMDeathmatch"), TEXT("ATDMAttachment_Optic"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATDMAttachment_Optic);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
