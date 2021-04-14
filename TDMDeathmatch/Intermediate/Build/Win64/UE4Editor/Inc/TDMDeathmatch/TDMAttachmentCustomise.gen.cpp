// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TDMDeathmatch/Public/Game/Customise/TDMAttachmentCustomise.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTDMAttachmentCustomise() {}
// Cross Module References
	TDMDEATHMATCH_API UClass* Z_Construct_UClass_ATDMAttachmentCustomise_NoRegister();
	TDMDEATHMATCH_API UClass* Z_Construct_UClass_ATDMAttachmentCustomise();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TDMDeathmatch();
	TDMDEATHMATCH_API UEnum* Z_Construct_UEnum_TDMDeathmatch_EAttachmentType();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ATDMAttachmentCustomise::StaticRegisterNativesATDMAttachmentCustomise()
	{
	}
	UClass* Z_Construct_UClass_ATDMAttachmentCustomise_NoRegister()
	{
		return ATDMAttachmentCustomise::StaticClass();
	}
	struct Z_Construct_UClass_ATDMAttachmentCustomise_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachmentType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AttachmentType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AttachmentType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachmentMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttachmentMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATDMAttachmentCustomise_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TDMDeathmatch,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDMAttachmentCustomise_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Game/Customise/TDMAttachmentCustomise.h" },
		{ "ModuleRelativePath", "Public/Game/Customise/TDMAttachmentCustomise.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDMAttachmentCustomise_Statics::NewProp_AttachmentType_MetaData[] = {
		{ "Category", "Attachment" },
		{ "ModuleRelativePath", "Public/Game/Customise/TDMAttachmentCustomise.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ATDMAttachmentCustomise_Statics::NewProp_AttachmentType = { "AttachmentType", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATDMAttachmentCustomise, AttachmentType), Z_Construct_UEnum_TDMDeathmatch_EAttachmentType, METADATA_PARAMS(Z_Construct_UClass_ATDMAttachmentCustomise_Statics::NewProp_AttachmentType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDMAttachmentCustomise_Statics::NewProp_AttachmentType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATDMAttachmentCustomise_Statics::NewProp_AttachmentType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDMAttachmentCustomise_Statics::NewProp_AttachmentMesh_MetaData[] = {
		{ "Category", "Attachment" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Game/Customise/TDMAttachmentCustomise.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATDMAttachmentCustomise_Statics::NewProp_AttachmentMesh = { "AttachmentMesh", nullptr, (EPropertyFlags)0x0020080000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATDMAttachmentCustomise, AttachmentMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATDMAttachmentCustomise_Statics::NewProp_AttachmentMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDMAttachmentCustomise_Statics::NewProp_AttachmentMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATDMAttachmentCustomise_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDMAttachmentCustomise_Statics::NewProp_AttachmentType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDMAttachmentCustomise_Statics::NewProp_AttachmentType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDMAttachmentCustomise_Statics::NewProp_AttachmentMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATDMAttachmentCustomise_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATDMAttachmentCustomise>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATDMAttachmentCustomise_Statics::ClassParams = {
		&ATDMAttachmentCustomise::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATDMAttachmentCustomise_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATDMAttachmentCustomise_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATDMAttachmentCustomise_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATDMAttachmentCustomise_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATDMAttachmentCustomise()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATDMAttachmentCustomise_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATDMAttachmentCustomise, 3232622298);
	template<> TDMDEATHMATCH_API UClass* StaticClass<ATDMAttachmentCustomise>()
	{
		return ATDMAttachmentCustomise::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATDMAttachmentCustomise(Z_Construct_UClass_ATDMAttachmentCustomise, &ATDMAttachmentCustomise::StaticClass, TEXT("/Script/TDMDeathmatch"), TEXT("ATDMAttachmentCustomise"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATDMAttachmentCustomise);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
