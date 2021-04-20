// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TDMDeathmatch/Public/Player/TDMPlayerState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTDMPlayerState() {}
// Cross Module References
	TDMDEATHMATCH_API UClass* Z_Construct_UClass_ATDMPlayerState_NoRegister();
	TDMDEATHMATCH_API UClass* Z_Construct_UClass_ATDMPlayerState();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState();
	UPackage* Z_Construct_UPackage__Script_TDMDeathmatch();
	TDMDEATHMATCH_API UEnum* Z_Construct_UEnum_TDMDeathmatch_ETeam();
// End Cross Module References
	DEFINE_FUNCTION(ATDMPlayerState::execSetTeam)
	{
		P_GET_ENUM(ETeam,Z_Param_JoinTeam);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetTeam(ETeam(Z_Param_JoinTeam));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDMPlayerState::execGetDeaths)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetDeaths();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDMPlayerState::execGetKills)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetKills();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDMPlayerState::execGetTeam)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ETeam*)Z_Param__Result=P_THIS->GetTeam();
		P_NATIVE_END;
	}
	void ATDMPlayerState::StaticRegisterNativesATDMPlayerState()
	{
		UClass* Class = ATDMPlayerState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDeaths", &ATDMPlayerState::execGetDeaths },
			{ "GetKills", &ATDMPlayerState::execGetKills },
			{ "GetTeam", &ATDMPlayerState::execGetTeam },
			{ "SetTeam", &ATDMPlayerState::execSetTeam },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATDMPlayerState_GetDeaths_Statics
	{
		struct TDMPlayerState_eventGetDeaths_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATDMPlayerState_GetDeaths_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TDMPlayerState_eventGetDeaths_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDMPlayerState_GetDeaths_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDMPlayerState_GetDeaths_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDMPlayerState_GetDeaths_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/TDMPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDMPlayerState_GetDeaths_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDMPlayerState, nullptr, "GetDeaths", nullptr, nullptr, sizeof(TDMPlayerState_eventGetDeaths_Parms), Z_Construct_UFunction_ATDMPlayerState_GetDeaths_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDMPlayerState_GetDeaths_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDMPlayerState_GetDeaths_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDMPlayerState_GetDeaths_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDMPlayerState_GetDeaths()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATDMPlayerState_GetDeaths_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDMPlayerState_GetKills_Statics
	{
		struct TDMPlayerState_eventGetKills_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATDMPlayerState_GetKills_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TDMPlayerState_eventGetKills_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDMPlayerState_GetKills_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDMPlayerState_GetKills_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDMPlayerState_GetKills_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/TDMPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDMPlayerState_GetKills_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDMPlayerState, nullptr, "GetKills", nullptr, nullptr, sizeof(TDMPlayerState_eventGetKills_Parms), Z_Construct_UFunction_ATDMPlayerState_GetKills_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDMPlayerState_GetKills_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDMPlayerState_GetKills_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDMPlayerState_GetKills_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDMPlayerState_GetKills()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATDMPlayerState_GetKills_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDMPlayerState_GetTeam_Statics
	{
		struct TDMPlayerState_eventGetTeam_Parms
		{
			ETeam ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ATDMPlayerState_GetTeam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TDMPlayerState_eventGetTeam_Parms, ReturnValue), Z_Construct_UEnum_TDMDeathmatch_ETeam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATDMPlayerState_GetTeam_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDMPlayerState_GetTeam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDMPlayerState_GetTeam_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDMPlayerState_GetTeam_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDMPlayerState_GetTeam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/TDMPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDMPlayerState_GetTeam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDMPlayerState, nullptr, "GetTeam", nullptr, nullptr, sizeof(TDMPlayerState_eventGetTeam_Parms), Z_Construct_UFunction_ATDMPlayerState_GetTeam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDMPlayerState_GetTeam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDMPlayerState_GetTeam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDMPlayerState_GetTeam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDMPlayerState_GetTeam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATDMPlayerState_GetTeam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDMPlayerState_SetTeam_Statics
	{
		struct TDMPlayerState_eventSetTeam_Parms
		{
			ETeam JoinTeam;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_JoinTeam;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_JoinTeam_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ATDMPlayerState_SetTeam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TDMPlayerState_eventSetTeam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATDMPlayerState_SetTeam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TDMPlayerState_eventSetTeam_Parms), &Z_Construct_UFunction_ATDMPlayerState_SetTeam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ATDMPlayerState_SetTeam_Statics::NewProp_JoinTeam = { "JoinTeam", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TDMPlayerState_eventSetTeam_Parms, JoinTeam), Z_Construct_UEnum_TDMDeathmatch_ETeam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATDMPlayerState_SetTeam_Statics::NewProp_JoinTeam_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDMPlayerState_SetTeam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDMPlayerState_SetTeam_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDMPlayerState_SetTeam_Statics::NewProp_JoinTeam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDMPlayerState_SetTeam_Statics::NewProp_JoinTeam_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDMPlayerState_SetTeam_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Returns true if join was successful\n" },
		{ "ModuleRelativePath", "Public/Player/TDMPlayerState.h" },
		{ "ToolTip", "Returns true if join was successful" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDMPlayerState_SetTeam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDMPlayerState, nullptr, "SetTeam", nullptr, nullptr, sizeof(TDMPlayerState_eventSetTeam_Parms), Z_Construct_UFunction_ATDMPlayerState_SetTeam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDMPlayerState_SetTeam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDMPlayerState_SetTeam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDMPlayerState_SetTeam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDMPlayerState_SetTeam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATDMPlayerState_SetTeam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATDMPlayerState_NoRegister()
	{
		return ATDMPlayerState::StaticClass();
	}
	struct Z_Construct_UClass_ATDMPlayerState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Deaths_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Deaths;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Kills_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Kills;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Team_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Team;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Team_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATDMPlayerState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerState,
		(UObject* (*)())Z_Construct_UPackage__Script_TDMDeathmatch,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATDMPlayerState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATDMPlayerState_GetDeaths, "GetDeaths" }, // 3963964564
		{ &Z_Construct_UFunction_ATDMPlayerState_GetKills, "GetKills" }, // 3222863019
		{ &Z_Construct_UFunction_ATDMPlayerState_GetTeam, "GetTeam" }, // 1352063378
		{ &Z_Construct_UFunction_ATDMPlayerState_SetTeam, "SetTeam" }, // 4067254320
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDMPlayerState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/* Set up teams*/" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Player/TDMPlayerState.h" },
		{ "ModuleRelativePath", "Public/Player/TDMPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "Set up teams" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDMPlayerState_Statics::NewProp_Deaths_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/TDMPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATDMPlayerState_Statics::NewProp_Deaths = { "Deaths", nullptr, (EPropertyFlags)0x0020080000000020, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATDMPlayerState, Deaths), METADATA_PARAMS(Z_Construct_UClass_ATDMPlayerState_Statics::NewProp_Deaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDMPlayerState_Statics::NewProp_Deaths_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDMPlayerState_Statics::NewProp_Kills_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/TDMPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATDMPlayerState_Statics::NewProp_Kills = { "Kills", nullptr, (EPropertyFlags)0x0020080000000020, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATDMPlayerState, Kills), METADATA_PARAMS(Z_Construct_UClass_ATDMPlayerState_Statics::NewProp_Kills_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDMPlayerState_Statics::NewProp_Kills_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDMPlayerState_Statics::NewProp_Team_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/TDMPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ATDMPlayerState_Statics::NewProp_Team = { "Team", nullptr, (EPropertyFlags)0x0020080000000020, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATDMPlayerState, Team), Z_Construct_UEnum_TDMDeathmatch_ETeam, METADATA_PARAMS(Z_Construct_UClass_ATDMPlayerState_Statics::NewProp_Team_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDMPlayerState_Statics::NewProp_Team_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATDMPlayerState_Statics::NewProp_Team_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATDMPlayerState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDMPlayerState_Statics::NewProp_Deaths,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDMPlayerState_Statics::NewProp_Kills,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDMPlayerState_Statics::NewProp_Team,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDMPlayerState_Statics::NewProp_Team_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATDMPlayerState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATDMPlayerState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATDMPlayerState_Statics::ClassParams = {
		&ATDMPlayerState::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATDMPlayerState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATDMPlayerState_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATDMPlayerState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATDMPlayerState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATDMPlayerState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATDMPlayerState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATDMPlayerState, 1472109454);
	template<> TDMDEATHMATCH_API UClass* StaticClass<ATDMPlayerState>()
	{
		return ATDMPlayerState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATDMPlayerState(Z_Construct_UClass_ATDMPlayerState, &ATDMPlayerState::StaticClass, TEXT("/Script/TDMDeathmatch"), TEXT("ATDMPlayerState"), false, nullptr, nullptr, nullptr);

	void ATDMPlayerState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Team(TEXT("Team"));
		static const FName Name_Kills(TEXT("Kills"));
		static const FName Name_Deaths(TEXT("Deaths"));

		const bool bIsValid = true
			&& Name_Team == ClassReps[(int32)ENetFields_Private::Team].Property->GetFName()
			&& Name_Kills == ClassReps[(int32)ENetFields_Private::Kills].Property->GetFName()
			&& Name_Deaths == ClassReps[(int32)ENetFields_Private::Deaths].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ATDMPlayerState"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATDMPlayerState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
