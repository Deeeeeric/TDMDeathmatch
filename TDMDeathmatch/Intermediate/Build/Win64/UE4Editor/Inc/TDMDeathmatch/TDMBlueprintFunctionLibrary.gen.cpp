// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TDMDeathmatch/Public/TDMBlueprintFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTDMBlueprintFunctionLibrary() {}
// Cross Module References
	TDMDEATHMATCH_API UClass* Z_Construct_UClass_UTDMBlueprintFunctionLibrary_NoRegister();
	TDMDEATHMATCH_API UClass* Z_Construct_UClass_UTDMBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_TDMDeathmatch();
	TDMDEATHMATCH_API UClass* Z_Construct_UClass_ATDMPlayerState_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UTDMBlueprintFunctionLibrary::execGetSortedPlayerStates)
	{
		P_GET_OBJECT(ACharacter,Z_Param_LocalPlayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<ATDMPlayerState*>*)Z_Param__Result=UTDMBlueprintFunctionLibrary::GetSortedPlayerStates(Z_Param_LocalPlayer);
		P_NATIVE_END;
	}
	void UTDMBlueprintFunctionLibrary::StaticRegisterNativesUTDMBlueprintFunctionLibrary()
	{
		UClass* Class = UTDMBlueprintFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSortedPlayerStates", &UTDMBlueprintFunctionLibrary::execGetSortedPlayerStates },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTDMBlueprintFunctionLibrary_GetSortedPlayerStates_Statics
	{
		struct TDMBlueprintFunctionLibrary_eventGetSortedPlayerStates_Parms
		{
			ACharacter* LocalPlayer;
			TArray<ATDMPlayerState*> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LocalPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTDMBlueprintFunctionLibrary_GetSortedPlayerStates_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TDMBlueprintFunctionLibrary_eventGetSortedPlayerStates_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTDMBlueprintFunctionLibrary_GetSortedPlayerStates_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ATDMPlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTDMBlueprintFunctionLibrary_GetSortedPlayerStates_Statics::NewProp_LocalPlayer = { "LocalPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TDMBlueprintFunctionLibrary_eventGetSortedPlayerStates_Parms, LocalPlayer), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTDMBlueprintFunctionLibrary_GetSortedPlayerStates_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDMBlueprintFunctionLibrary_GetSortedPlayerStates_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDMBlueprintFunctionLibrary_GetSortedPlayerStates_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDMBlueprintFunctionLibrary_GetSortedPlayerStates_Statics::NewProp_LocalPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDMBlueprintFunctionLibrary_GetSortedPlayerStates_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDMBlueprintFunctionLibrary" },
		{ "ModuleRelativePath", "Public/TDMBlueprintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTDMBlueprintFunctionLibrary_GetSortedPlayerStates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTDMBlueprintFunctionLibrary, nullptr, "GetSortedPlayerStates", nullptr, nullptr, sizeof(TDMBlueprintFunctionLibrary_eventGetSortedPlayerStates_Parms), Z_Construct_UFunction_UTDMBlueprintFunctionLibrary_GetSortedPlayerStates_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDMBlueprintFunctionLibrary_GetSortedPlayerStates_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTDMBlueprintFunctionLibrary_GetSortedPlayerStates_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDMBlueprintFunctionLibrary_GetSortedPlayerStates_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTDMBlueprintFunctionLibrary_GetSortedPlayerStates()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTDMBlueprintFunctionLibrary_GetSortedPlayerStates_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTDMBlueprintFunctionLibrary_NoRegister()
	{
		return UTDMBlueprintFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UTDMBlueprintFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTDMBlueprintFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_TDMDeathmatch,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTDMBlueprintFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTDMBlueprintFunctionLibrary_GetSortedPlayerStates, "GetSortedPlayerStates" }, // 2886008425
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDMBlueprintFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TDMBlueprintFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/TDMBlueprintFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTDMBlueprintFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTDMBlueprintFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTDMBlueprintFunctionLibrary_Statics::ClassParams = {
		&UTDMBlueprintFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTDMBlueprintFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTDMBlueprintFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTDMBlueprintFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTDMBlueprintFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTDMBlueprintFunctionLibrary, 1324724099);
	template<> TDMDEATHMATCH_API UClass* StaticClass<UTDMBlueprintFunctionLibrary>()
	{
		return UTDMBlueprintFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTDMBlueprintFunctionLibrary(Z_Construct_UClass_UTDMBlueprintFunctionLibrary, &UTDMBlueprintFunctionLibrary::StaticClass, TEXT("/Script/TDMDeathmatch"), TEXT("UTDMBlueprintFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTDMBlueprintFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
