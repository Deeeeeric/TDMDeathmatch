// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TDMDeathmatch/Public/Game/Customise/TDMWeaponCustomise.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTDMWeaponCustomise() {}
// Cross Module References
	TDMDEATHMATCH_API UClass* Z_Construct_UClass_ATDMWeaponCustomise_NoRegister();
	TDMDEATHMATCH_API UClass* Z_Construct_UClass_ATDMWeaponCustomise();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TDMDeathmatch();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	TDMDEATHMATCH_API UClass* Z_Construct_UClass_ATDMAttachmentCustomise_NoRegister();
	TDMDEATHMATCH_API UClass* Z_Construct_UClass_AAttachmentCustomise_Muzzle_NoRegister();
	TDMDEATHMATCH_API UClass* Z_Construct_UClass_AAttachmentCustomise_Optic_NoRegister();
	TDMDEATHMATCH_API UClass* Z_Construct_UClass_ATDMWeaponBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ATDMWeaponCustomise::execGetMuzzle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AAttachmentCustomise_Muzzle**)Z_Param__Result=P_THIS->GetMuzzle();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDMWeaponCustomise::execGetOptic)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AAttachmentCustomise_Optic**)Z_Param__Result=P_THIS->GetOptic();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDMWeaponCustomise::execAddAttachment)
	{
		P_GET_OBJECT(UClass,Z_Param_AttachmentClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddAttachment(Z_Param_AttachmentClass);
		P_NATIVE_END;
	}
	void ATDMWeaponCustomise::StaticRegisterNativesATDMWeaponCustomise()
	{
		UClass* Class = ATDMWeaponCustomise::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddAttachment", &ATDMWeaponCustomise::execAddAttachment },
			{ "GetMuzzle", &ATDMWeaponCustomise::execGetMuzzle },
			{ "GetOptic", &ATDMWeaponCustomise::execGetOptic },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATDMWeaponCustomise_AddAttachment_Statics
	{
		struct TDMWeaponCustomise_eventAddAttachment_Parms
		{
			TSubclassOf<ATDMAttachmentCustomise>  AttachmentClass;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AttachmentClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ATDMWeaponCustomise_AddAttachment_Statics::NewProp_AttachmentClass = { "AttachmentClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TDMWeaponCustomise_eventAddAttachment_Parms, AttachmentClass), Z_Construct_UClass_ATDMAttachmentCustomise_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDMWeaponCustomise_AddAttachment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDMWeaponCustomise_AddAttachment_Statics::NewProp_AttachmentClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDMWeaponCustomise_AddAttachment_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Game/Customise/TDMWeaponCustomise.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDMWeaponCustomise_AddAttachment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDMWeaponCustomise, nullptr, "AddAttachment", nullptr, nullptr, sizeof(TDMWeaponCustomise_eventAddAttachment_Parms), Z_Construct_UFunction_ATDMWeaponCustomise_AddAttachment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDMWeaponCustomise_AddAttachment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDMWeaponCustomise_AddAttachment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDMWeaponCustomise_AddAttachment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDMWeaponCustomise_AddAttachment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATDMWeaponCustomise_AddAttachment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDMWeaponCustomise_GetMuzzle_Statics
	{
		struct TDMWeaponCustomise_eventGetMuzzle_Parms
		{
			AAttachmentCustomise_Muzzle* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATDMWeaponCustomise_GetMuzzle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TDMWeaponCustomise_eventGetMuzzle_Parms, ReturnValue), Z_Construct_UClass_AAttachmentCustomise_Muzzle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDMWeaponCustomise_GetMuzzle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDMWeaponCustomise_GetMuzzle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDMWeaponCustomise_GetMuzzle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Game/Customise/TDMWeaponCustomise.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDMWeaponCustomise_GetMuzzle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDMWeaponCustomise, nullptr, "GetMuzzle", nullptr, nullptr, sizeof(TDMWeaponCustomise_eventGetMuzzle_Parms), Z_Construct_UFunction_ATDMWeaponCustomise_GetMuzzle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDMWeaponCustomise_GetMuzzle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDMWeaponCustomise_GetMuzzle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDMWeaponCustomise_GetMuzzle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDMWeaponCustomise_GetMuzzle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATDMWeaponCustomise_GetMuzzle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDMWeaponCustomise_GetOptic_Statics
	{
		struct TDMWeaponCustomise_eventGetOptic_Parms
		{
			AAttachmentCustomise_Optic* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATDMWeaponCustomise_GetOptic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TDMWeaponCustomise_eventGetOptic_Parms, ReturnValue), Z_Construct_UClass_AAttachmentCustomise_Optic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDMWeaponCustomise_GetOptic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDMWeaponCustomise_GetOptic_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDMWeaponCustomise_GetOptic_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Game/Customise/TDMWeaponCustomise.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDMWeaponCustomise_GetOptic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDMWeaponCustomise, nullptr, "GetOptic", nullptr, nullptr, sizeof(TDMWeaponCustomise_eventGetOptic_Parms), Z_Construct_UFunction_ATDMWeaponCustomise_GetOptic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDMWeaponCustomise_GetOptic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDMWeaponCustomise_GetOptic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDMWeaponCustomise_GetOptic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDMWeaponCustomise_GetOptic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATDMWeaponCustomise_GetOptic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATDMWeaponCustomise_NoRegister()
	{
		return ATDMWeaponCustomise::StaticClass();
	}
	struct Z_Construct_UClass_ATDMWeaponCustomise_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WeaponClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATDMWeaponCustomise_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TDMDeathmatch,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATDMWeaponCustomise_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATDMWeaponCustomise_AddAttachment, "AddAttachment" }, // 2521520381
		{ &Z_Construct_UFunction_ATDMWeaponCustomise_GetMuzzle, "GetMuzzle" }, // 2413543417
		{ &Z_Construct_UFunction_ATDMWeaponCustomise_GetOptic, "GetOptic" }, // 1561855799
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDMWeaponCustomise_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Game/Customise/TDMWeaponCustomise.h" },
		{ "ModuleRelativePath", "Public/Game/Customise/TDMWeaponCustomise.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDMWeaponCustomise_Statics::NewProp_WeaponClass_MetaData[] = {
		{ "Category", "Attachment" },
		{ "ModuleRelativePath", "Public/Game/Customise/TDMWeaponCustomise.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATDMWeaponCustomise_Statics::NewProp_WeaponClass = { "WeaponClass", nullptr, (EPropertyFlags)0x0024080000010005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATDMWeaponCustomise, WeaponClass), Z_Construct_UClass_ATDMWeaponBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ATDMWeaponCustomise_Statics::NewProp_WeaponClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDMWeaponCustomise_Statics::NewProp_WeaponClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDMWeaponCustomise_Statics::NewProp_WeaponMesh_MetaData[] = {
		{ "Category", "Weapon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Game/Customise/TDMWeaponCustomise.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATDMWeaponCustomise_Statics::NewProp_WeaponMesh = { "WeaponMesh", nullptr, (EPropertyFlags)0x0020080000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATDMWeaponCustomise, WeaponMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATDMWeaponCustomise_Statics::NewProp_WeaponMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDMWeaponCustomise_Statics::NewProp_WeaponMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATDMWeaponCustomise_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDMWeaponCustomise_Statics::NewProp_WeaponClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDMWeaponCustomise_Statics::NewProp_WeaponMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATDMWeaponCustomise_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATDMWeaponCustomise>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATDMWeaponCustomise_Statics::ClassParams = {
		&ATDMWeaponCustomise::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATDMWeaponCustomise_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATDMWeaponCustomise_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATDMWeaponCustomise_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATDMWeaponCustomise_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATDMWeaponCustomise()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATDMWeaponCustomise_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATDMWeaponCustomise, 3958691606);
	template<> TDMDEATHMATCH_API UClass* StaticClass<ATDMWeaponCustomise>()
	{
		return ATDMWeaponCustomise::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATDMWeaponCustomise(Z_Construct_UClass_ATDMWeaponCustomise, &ATDMWeaponCustomise::StaticClass, TEXT("/Script/TDMDeathmatch"), TEXT("ATDMWeaponCustomise"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATDMWeaponCustomise);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
