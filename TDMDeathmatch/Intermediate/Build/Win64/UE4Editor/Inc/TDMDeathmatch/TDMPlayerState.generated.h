// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ETeam : uint8;
#ifdef TDMDEATHMATCH_TDMPlayerState_generated_h
#error "TDMPlayerState.generated.h already included, missing '#pragma once' in TDMPlayerState.h"
#endif
#define TDMDEATHMATCH_TDMPlayerState_generated_h

#define TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMPlayerState_h_15_SPARSE_DATA
#define TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMPlayerState_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetTeam); \
	DECLARE_FUNCTION(execGetDeaths); \
	DECLARE_FUNCTION(execGetKills); \
	DECLARE_FUNCTION(execGetTeam);


#define TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMPlayerState_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetTeam); \
	DECLARE_FUNCTION(execGetDeaths); \
	DECLARE_FUNCTION(execGetKills); \
	DECLARE_FUNCTION(execGetTeam);


#define TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMPlayerState_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATDMPlayerState(); \
	friend struct Z_Construct_UClass_ATDMPlayerState_Statics; \
public: \
	DECLARE_CLASS(ATDMPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TDMDeathmatch"), NO_API) \
	DECLARE_SERIALIZER(ATDMPlayerState) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Team=NETFIELD_REP_START, \
		Kills, \
		Deaths, \
		NETFIELD_REP_END=Deaths	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMPlayerState_h_15_INCLASS \
private: \
	static void StaticRegisterNativesATDMPlayerState(); \
	friend struct Z_Construct_UClass_ATDMPlayerState_Statics; \
public: \
	DECLARE_CLASS(ATDMPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TDMDeathmatch"), NO_API) \
	DECLARE_SERIALIZER(ATDMPlayerState) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Team=NETFIELD_REP_START, \
		Kills, \
		Deaths, \
		NETFIELD_REP_END=Deaths	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMPlayerState_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATDMPlayerState(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATDMPlayerState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATDMPlayerState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATDMPlayerState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATDMPlayerState(ATDMPlayerState&&); \
	NO_API ATDMPlayerState(const ATDMPlayerState&); \
public:


#define TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMPlayerState_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATDMPlayerState(ATDMPlayerState&&); \
	NO_API ATDMPlayerState(const ATDMPlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATDMPlayerState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATDMPlayerState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATDMPlayerState)


#define TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMPlayerState_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Team() { return STRUCT_OFFSET(ATDMPlayerState, Team); } \
	FORCEINLINE static uint32 __PPO__Kills() { return STRUCT_OFFSET(ATDMPlayerState, Kills); } \
	FORCEINLINE static uint32 __PPO__Deaths() { return STRUCT_OFFSET(ATDMPlayerState, Deaths); }


#define TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMPlayerState_h_12_PROLOG
#define TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMPlayerState_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMPlayerState_h_15_PRIVATE_PROPERTY_OFFSET \
	TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMPlayerState_h_15_SPARSE_DATA \
	TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMPlayerState_h_15_RPC_WRAPPERS \
	TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMPlayerState_h_15_INCLASS \
	TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMPlayerState_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMPlayerState_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMPlayerState_h_15_PRIVATE_PROPERTY_OFFSET \
	TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMPlayerState_h_15_SPARSE_DATA \
	TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMPlayerState_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMPlayerState_h_15_INCLASS_NO_PURE_DECLS \
	TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMPlayerState_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TDMDEATHMATCH_API UClass* StaticClass<class ATDMPlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMPlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
