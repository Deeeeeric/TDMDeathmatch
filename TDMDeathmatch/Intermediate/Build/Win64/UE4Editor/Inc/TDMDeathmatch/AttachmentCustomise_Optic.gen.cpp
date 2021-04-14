// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TDMDeathmatch/Public/Game/Customise/AttachmentCustomise_Optic.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAttachmentCustomise_Optic() {}
// Cross Module References
	TDMDEATHMATCH_API UClass* Z_Construct_UClass_AAttachmentCustomise_Optic_NoRegister();
	TDMDEATHMATCH_API UClass* Z_Construct_UClass_AAttachmentCustomise_Optic();
	TDMDEATHMATCH_API UClass* Z_Construct_UClass_ATDMAttachmentCustomise();
	UPackage* Z_Construct_UPackage__Script_TDMDeathmatch();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	TDMDEATHMATCH_API UClass* Z_Construct_UClass_ATDMAttachment_Optic_NoRegister();
// End Cross Module References
	void AAttachmentCustomise_Optic::StaticRegisterNativesAAttachmentCustomise_Optic()
	{
	}
	UClass* Z_Construct_UClass_AAttachmentCustomise_Optic_NoRegister()
	{
		return AAttachmentCustomise_Optic::StaticClass();
	}
	struct Z_Construct_UClass_AAttachmentCustomise_Optic_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpticClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_OpticClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAttachmentCustomise_Optic_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATDMAttachmentCustomise,
		(UObject* (*)())Z_Construct_UPackage__Script_TDMDeathmatch,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAttachmentCustomise_Optic_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Game/Customise/AttachmentCustomise_Optic.h" },
		{ "ModuleRelativePath", "Public/Game/Customise/AttachmentCustomise_Optic.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAttachmentCustomise_Optic_Statics::NewProp_OpticClass_MetaData[] = {
		{ "Category", "Attachment" },
		{ "ModuleRelativePath", "Public/Game/Customise/AttachmentCustomise_Optic.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAttachmentCustomise_Optic_Statics::NewProp_OpticClass = { "OpticClass", nullptr, (EPropertyFlags)0x0014000000010005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAttachmentCustomise_Optic, OpticClass), Z_Construct_UClass_ATDMAttachment_Optic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AAttachmentCustomise_Optic_Statics::NewProp_OpticClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAttachmentCustomise_Optic_Statics::NewProp_OpticClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAttachmentCustomise_Optic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAttachmentCustomise_Optic_Statics::NewProp_OpticClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAttachmentCustomise_Optic_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAttachmentCustomise_Optic>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAttachmentCustomise_Optic_Statics::ClassParams = {
		&AAttachmentCustomise_Optic::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAttachmentCustomise_Optic_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAttachmentCustomise_Optic_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAttachmentCustomise_Optic_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAttachmentCustomise_Optic_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAttachmentCustomise_Optic()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAttachmentCustomise_Optic_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAttachmentCustomise_Optic, 2799568615);
	template<> TDMDEATHMATCH_API UClass* StaticClass<AAttachmentCustomise_Optic>()
	{
		return AAttachmentCustomise_Optic::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAttachmentCustomise_Optic(Z_Construct_UClass_AAttachmentCustomise_Optic, &AAttachmentCustomise_Optic::StaticClass, TEXT("/Script/TDMDeathmatch"), TEXT("AAttachmentCustomise_Optic"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAttachmentCustomise_Optic);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
