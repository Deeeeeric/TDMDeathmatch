// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TDMDeathmatch/Public/Player/TDMPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTDMPlayerController() {}
// Cross Module References
	TDMDEATHMATCH_API UEnum* Z_Construct_UEnum_TDMDeathmatch_EPossessed();
	UPackage* Z_Construct_UPackage__Script_TDMDeathmatch();
	TDMDEATHMATCH_API UClass* Z_Construct_UClass_ATDMPlayerController_NoRegister();
	TDMDEATHMATCH_API UClass* Z_Construct_UClass_ATDMPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
// End Cross Module References
	static UEnum* EPossessed_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TDMDeathmatch_EPossessed, Z_Construct_UPackage__Script_TDMDeathmatch(), TEXT("EPossessed"));
		}
		return Singleton;
	}
	template<> TDMDEATHMATCH_API UEnum* StaticEnum<EPossessed>()
	{
		return EPossessed_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPossessed(EPossessed_StaticEnum, TEXT("/Script/TDMDeathmatch"), TEXT("EPossessed"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TDMDeathmatch_EPossessed_Hash() { return 512414362U; }
	UEnum* Z_Construct_UEnum_TDMDeathmatch_EPossessed()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TDMDeathmatch();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPossessed"), 0, Get_Z_Construct_UEnum_TDMDeathmatch_EPossessed_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPossessed::Possessed", (int64)EPossessed::Possessed },
				{ "EPossessed::UnPossessed", (int64)EPossessed::UnPossessed },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Player/TDMPlayerController.h" },
				{ "Possessed.\"Possessed\"", "" },
				{ "Possessed.DisplayName", "" },
				{ "Possessed.Name", "EPossessed::Possessed" },
				{ "UnPossessed.\"UnPossessed\"", "" },
				{ "UnPossessed.DisplayName", "" },
				{ "UnPossessed.Name", "EPossessed::UnPossessed" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TDMDeathmatch,
				nullptr,
				"EPossessed",
				"EPossessed",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static FName NAME_ATDMPlayerController_OnPossessionChange = FName(TEXT("OnPossessionChange"));
	void ATDMPlayerController::OnPossessionChange(EPossessed Possessed)
	{
		TDMPlayerController_eventOnPossessionChange_Parms Parms;
		Parms.Possessed=Possessed;
		ProcessEvent(FindFunctionChecked(NAME_ATDMPlayerController_OnPossessionChange),&Parms);
	}
	void ATDMPlayerController::StaticRegisterNativesATDMPlayerController()
	{
	}
	struct Z_Construct_UFunction_ATDMPlayerController_OnPossessionChange_Statics
	{
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Possessed;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Possessed_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ATDMPlayerController_OnPossessionChange_Statics::NewProp_Possessed = { "Possessed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TDMPlayerController_eventOnPossessionChange_Parms, Possessed), Z_Construct_UEnum_TDMDeathmatch_EPossessed, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATDMPlayerController_OnPossessionChange_Statics::NewProp_Possessed_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDMPlayerController_OnPossessionChange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDMPlayerController_OnPossessionChange_Statics::NewProp_Possessed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDMPlayerController_OnPossessionChange_Statics::NewProp_Possessed_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDMPlayerController_OnPossessionChange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/TDMPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDMPlayerController_OnPossessionChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDMPlayerController, nullptr, "OnPossessionChange", nullptr, nullptr, sizeof(TDMPlayerController_eventOnPossessionChange_Parms), Z_Construct_UFunction_ATDMPlayerController_OnPossessionChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDMPlayerController_OnPossessionChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDMPlayerController_OnPossessionChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDMPlayerController_OnPossessionChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDMPlayerController_OnPossessionChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATDMPlayerController_OnPossessionChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATDMPlayerController_NoRegister()
	{
		return ATDMPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ATDMPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATDMPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_TDMDeathmatch,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATDMPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATDMPlayerController_OnPossessionChange, "OnPossessionChange" }, // 3719130521
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDMPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Player/TDMPlayerController.h" },
		{ "ModuleRelativePath", "Public/Player/TDMPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATDMPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATDMPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATDMPlayerController_Statics::ClassParams = {
		&ATDMPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATDMPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATDMPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATDMPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATDMPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATDMPlayerController, 2883868006);
	template<> TDMDEATHMATCH_API UClass* StaticClass<ATDMPlayerController>()
	{
		return ATDMPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATDMPlayerController(Z_Construct_UClass_ATDMPlayerController, &ATDMPlayerController::StaticClass, TEXT("/Script/TDMDeathmatch"), TEXT("ATDMPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATDMPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
