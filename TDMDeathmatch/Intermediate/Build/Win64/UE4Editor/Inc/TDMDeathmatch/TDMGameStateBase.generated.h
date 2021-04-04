// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TDMDEATHMATCH_TDMGameStateBase_generated_h
#error "TDMGameStateBase.generated.h already included, missing '#pragma once' in TDMGameStateBase.h"
#endif
#define TDMDEATHMATCH_TDMGameStateBase_generated_h

#define TDMDeathmatch_Source_TDMDeathmatch_Public_Game_GameMode_TDMGameStateBase_h_16_SPARSE_DATA
#define TDMDeathmatch_Source_TDMDeathmatch_Public_Game_GameMode_TDMGameStateBase_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetBravoTeamScore); \
	DECLARE_FUNCTION(execGetAlphaTeamScore);


#define TDMDeathmatch_Source_TDMDeathmatch_Public_Game_GameMode_TDMGameStateBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetBravoTeamScore); \
	DECLARE_FUNCTION(execGetAlphaTeamScore);


#define TDMDeathmatch_Source_TDMDeathmatch_Public_Game_GameMode_TDMGameStateBase_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATDMGameStateBase(); \
	friend struct Z_Construct_UClass_ATDMGameStateBase_Statics; \
public: \
	DECLARE_CLASS(ATDMGameStateBase, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TDMDeathmatch"), NO_API) \
	DECLARE_SERIALIZER(ATDMGameStateBase) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		AlphaTeamScore=NETFIELD_REP_START, \
		BravoTeamScore, \
		NETFIELD_REP_END=BravoTeamScore	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define TDMDeathmatch_Source_TDMDeathmatch_Public_Game_GameMode_TDMGameStateBase_h_16_INCLASS \
private: \
	static void StaticRegisterNativesATDMGameStateBase(); \
	friend struct Z_Construct_UClass_ATDMGameStateBase_Statics; \
public: \
	DECLARE_CLASS(ATDMGameStateBase, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TDMDeathmatch"), NO_API) \
	DECLARE_SERIALIZER(ATDMGameStateBase) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		AlphaTeamScore=NETFIELD_REP_START, \
		BravoTeamScore, \
		NETFIELD_REP_END=BravoTeamScore	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define TDMDeathmatch_Source_TDMDeathmatch_Public_Game_GameMode_TDMGameStateBase_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATDMGameStateBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATDMGameStateBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATDMGameStateBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATDMGameStateBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATDMGameStateBase(ATDMGameStateBase&&); \
	NO_API ATDMGameStateBase(const ATDMGameStateBase&); \
public:


#define TDMDeathmatch_Source_TDMDeathmatch_Public_Game_GameMode_TDMGameStateBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATDMGameStateBase(ATDMGameStateBase&&); \
	NO_API ATDMGameStateBase(const ATDMGameStateBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATDMGameStateBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATDMGameStateBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATDMGameStateBase)


#define TDMDeathmatch_Source_TDMDeathmatch_Public_Game_GameMode_TDMGameStateBase_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ScoreToWin() { return STRUCT_OFFSET(ATDMGameStateBase, ScoreToWin); } \
	FORCEINLINE static uint32 __PPO__IncrementScoreValue() { return STRUCT_OFFSET(ATDMGameStateBase, IncrementScoreValue); } \
	FORCEINLINE static uint32 __PPO__AlphaTeamScore() { return STRUCT_OFFSET(ATDMGameStateBase, AlphaTeamScore); } \
	FORCEINLINE static uint32 __PPO__BravoTeamScore() { return STRUCT_OFFSET(ATDMGameStateBase, BravoTeamScore); }


#define TDMDeathmatch_Source_TDMDeathmatch_Public_Game_GameMode_TDMGameStateBase_h_13_PROLOG
#define TDMDeathmatch_Source_TDMDeathmatch_Public_Game_GameMode_TDMGameStateBase_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TDMDeathmatch_Source_TDMDeathmatch_Public_Game_GameMode_TDMGameStateBase_h_16_PRIVATE_PROPERTY_OFFSET \
	TDMDeathmatch_Source_TDMDeathmatch_Public_Game_GameMode_TDMGameStateBase_h_16_SPARSE_DATA \
	TDMDeathmatch_Source_TDMDeathmatch_Public_Game_GameMode_TDMGameStateBase_h_16_RPC_WRAPPERS \
	TDMDeathmatch_Source_TDMDeathmatch_Public_Game_GameMode_TDMGameStateBase_h_16_INCLASS \
	TDMDeathmatch_Source_TDMDeathmatch_Public_Game_GameMode_TDMGameStateBase_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TDMDeathmatch_Source_TDMDeathmatch_Public_Game_GameMode_TDMGameStateBase_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TDMDeathmatch_Source_TDMDeathmatch_Public_Game_GameMode_TDMGameStateBase_h_16_PRIVATE_PROPERTY_OFFSET \
	TDMDeathmatch_Source_TDMDeathmatch_Public_Game_GameMode_TDMGameStateBase_h_16_SPARSE_DATA \
	TDMDeathmatch_Source_TDMDeathmatch_Public_Game_GameMode_TDMGameStateBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	TDMDeathmatch_Source_TDMDeathmatch_Public_Game_GameMode_TDMGameStateBase_h_16_INCLASS_NO_PURE_DECLS \
	TDMDeathmatch_Source_TDMDeathmatch_Public_Game_GameMode_TDMGameStateBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TDMDEATHMATCH_API UClass* StaticClass<class ATDMGameStateBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TDMDeathmatch_Source_TDMDeathmatch_Public_Game_GameMode_TDMGameStateBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
