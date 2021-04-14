// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TDMDeathmatch/Public/Game/Customise/AttachmentCustomise_Muzzle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAttachmentCustomise_Muzzle() {}
// Cross Module References
	TDMDEATHMATCH_API UClass* Z_Construct_UClass_AAttachmentCustomise_Muzzle_NoRegister();
	TDMDEATHMATCH_API UClass* Z_Construct_UClass_AAttachmentCustomise_Muzzle();
	TDMDEATHMATCH_API UClass* Z_Construct_UClass_ATDMAttachmentCustomise();
	UPackage* Z_Construct_UPackage__Script_TDMDeathmatch();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	TDMDEATHMATCH_API UClass* Z_Construct_UClass_ATDMAttachment_NoRegister();
// End Cross Module References
	void AAttachmentCustomise_Muzzle::StaticRegisterNativesAAttachmentCustomise_Muzzle()
	{
	}
	UClass* Z_Construct_UClass_AAttachmentCustomise_Muzzle_NoRegister()
	{
		return AAttachmentCustomise_Muzzle::StaticClass();
	}
	struct Z_Construct_UClass_AAttachmentCustomise_Muzzle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuzzleClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_MuzzleClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAttachmentCustomise_Muzzle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATDMAttachmentCustomise,
		(UObject* (*)())Z_Construct_UPackage__Script_TDMDeathmatch,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAttachmentCustomise_Muzzle_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Game/Customise/AttachmentCustomise_Muzzle.h" },
		{ "ModuleRelativePath", "Public/Game/Customise/AttachmentCustomise_Muzzle.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAttachmentCustomise_Muzzle_Statics::NewProp_MuzzleClass_MetaData[] = {
		{ "Category", "Attachment" },
		{ "ModuleRelativePath", "Public/Game/Customise/AttachmentCustomise_Muzzle.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAttachmentCustomise_Muzzle_Statics::NewProp_MuzzleClass = { "MuzzleClass", nullptr, (EPropertyFlags)0x0014000000010005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAttachmentCustomise_Muzzle, MuzzleClass), Z_Construct_UClass_ATDMAttachment_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AAttachmentCustomise_Muzzle_Statics::NewProp_MuzzleClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAttachmentCustomise_Muzzle_Statics::NewProp_MuzzleClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAttachmentCustomise_Muzzle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAttachmentCustomise_Muzzle_Statics::NewProp_MuzzleClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAttachmentCustomise_Muzzle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAttachmentCustomise_Muzzle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAttachmentCustomise_Muzzle_Statics::ClassParams = {
		&AAttachmentCustomise_Muzzle::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAttachmentCustomise_Muzzle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAttachmentCustomise_Muzzle_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAttachmentCustomise_Muzzle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAttachmentCustomise_Muzzle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAttachmentCustomise_Muzzle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAttachmentCustomise_Muzzle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAttachmentCustomise_Muzzle, 2493769969);
	template<> TDMDEATHMATCH_API UClass* StaticClass<AAttachmentCustomise_Muzzle>()
	{
		return AAttachmentCustomise_Muzzle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAttachmentCustomise_Muzzle(Z_Construct_UClass_AAttachmentCustomise_Muzzle, &AAttachmentCustomise_Muzzle::StaticClass, TEXT("/Script/TDMDeathmatch"), TEXT("AAttachmentCustomise_Muzzle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAttachmentCustomise_Muzzle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
