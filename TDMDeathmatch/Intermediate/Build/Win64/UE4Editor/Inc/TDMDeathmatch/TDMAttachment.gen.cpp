// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TDMDeathmatch/Public/Game/Weapon/TDMAttachment.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTDMAttachment() {}
// Cross Module References
	TDMDEATHMATCH_API UClass* Z_Construct_UClass_ATDMAttachment_NoRegister();
	TDMDEATHMATCH_API UClass* Z_Construct_UClass_ATDMAttachment();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TDMDeathmatch();
	TDMDEATHMATCH_API UEnum* Z_Construct_UEnum_TDMDeathmatch_EAttachmentType();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ATDMAttachment::StaticRegisterNativesATDMAttachment()
	{
	}
	UClass* Z_Construct_UClass_ATDMAttachment_NoRegister()
	{
		return ATDMAttachment::StaticClass();
	}
	struct Z_Construct_UClass_ATDMAttachment_Statics
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
	UObject* (*const Z_Construct_UClass_ATDMAttachment_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TDMDeathmatch,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDMAttachment_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Game/Weapon/TDMAttachment.h" },
		{ "ModuleRelativePath", "Public/Game/Weapon/TDMAttachment.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDMAttachment_Statics::NewProp_AttachmentType_MetaData[] = {
		{ "Category", "Attachment" },
		{ "ModuleRelativePath", "Public/Game/Weapon/TDMAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ATDMAttachment_Statics::NewProp_AttachmentType = { "AttachmentType", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATDMAttachment, AttachmentType), Z_Construct_UEnum_TDMDeathmatch_EAttachmentType, METADATA_PARAMS(Z_Construct_UClass_ATDMAttachment_Statics::NewProp_AttachmentType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDMAttachment_Statics::NewProp_AttachmentType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATDMAttachment_Statics::NewProp_AttachmentType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDMAttachment_Statics::NewProp_AttachmentMesh_MetaData[] = {
		{ "Category", "Attachment" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Game/Weapon/TDMAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATDMAttachment_Statics::NewProp_AttachmentMesh = { "AttachmentMesh", nullptr, (EPropertyFlags)0x0020080000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATDMAttachment, AttachmentMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATDMAttachment_Statics::NewProp_AttachmentMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDMAttachment_Statics::NewProp_AttachmentMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATDMAttachment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDMAttachment_Statics::NewProp_AttachmentType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDMAttachment_Statics::NewProp_AttachmentType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDMAttachment_Statics::NewProp_AttachmentMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATDMAttachment_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATDMAttachment>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATDMAttachment_Statics::ClassParams = {
		&ATDMAttachment::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATDMAttachment_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATDMAttachment_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATDMAttachment_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATDMAttachment_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATDMAttachment()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATDMAttachment_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATDMAttachment, 2378583419);
	template<> TDMDEATHMATCH_API UClass* StaticClass<ATDMAttachment>()
	{
		return ATDMAttachment::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATDMAttachment(Z_Construct_UClass_ATDMAttachment, &ATDMAttachment::StaticClass, TEXT("/Script/TDMDeathmatch"), TEXT("ATDMAttachment"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATDMAttachment);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
