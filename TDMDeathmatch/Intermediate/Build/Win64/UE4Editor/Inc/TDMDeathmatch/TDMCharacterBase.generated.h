// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TDMDEATHMATCH_TDMCharacterBase_generated_h
#error "TDMCharacterBase.generated.h already included, missing '#pragma once' in TDMCharacterBase.h"
#endif
#define TDMDEATHMATCH_TDMCharacterBase_generated_h

#define TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMCharacterBase_h_15_SPARSE_DATA
#define TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMCharacterBase_h_15_RPC_WRAPPERS \
	virtual bool Server_Aim_Validate(bool ); \
	virtual void Server_Aim_Implementation(bool Aiming); \
 \
	DECLARE_FUNCTION(execServer_Aim); \
	DECLARE_FUNCTION(execOnRep_IsDead);


#define TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMCharacterBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execServer_Aim); \
	DECLARE_FUNCTION(execOnRep_IsDead);


#define TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMCharacterBase_h_15_EVENT_PARMS \
	struct TDMCharacterBase_eventServer_Aim_Parms \
	{ \
		bool Aiming; \
	};


#define TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMCharacterBase_h_15_CALLBACK_WRAPPERS
#define TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMCharacterBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATDMCharacterBase(); \
	friend struct Z_Construct_UClass_ATDMCharacterBase_Statics; \
public: \
	DECLARE_CLASS(ATDMCharacterBase, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TDMDeathmatch"), NO_API) \
	DECLARE_SERIALIZER(ATDMCharacterBase) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bIsDead=NETFIELD_REP_START, \
		WeaponInHand, \
		bIsAiming, \
		NETFIELD_REP_END=bIsAiming	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMCharacterBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesATDMCharacterBase(); \
	friend struct Z_Construct_UClass_ATDMCharacterBase_Statics; \
public: \
	DECLARE_CLASS(ATDMCharacterBase, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TDMDeathmatch"), NO_API) \
	DECLARE_SERIALIZER(ATDMCharacterBase) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bIsDead=NETFIELD_REP_START, \
		WeaponInHand, \
		bIsAiming, \
		NETFIELD_REP_END=bIsAiming	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMCharacterBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATDMCharacterBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATDMCharacterBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATDMCharacterBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATDMCharacterBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATDMCharacterBase(ATDMCharacterBase&&); \
	NO_API ATDMCharacterBase(const ATDMCharacterBase&); \
public:


#define TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMCharacterBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATDMCharacterBase(ATDMCharacterBase&&); \
	NO_API ATDMCharacterBase(const ATDMCharacterBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATDMCharacterBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATDMCharacterBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATDMCharacterBase)


#define TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMCharacterBase_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WeaponToSpawn() { return STRUCT_OFFSET(ATDMCharacterBase, WeaponToSpawn); } \
	FORCEINLINE static uint32 __PPO__WeaponInHand() { return STRUCT_OFFSET(ATDMCharacterBase, WeaponInHand); } \
	FORCEINLINE static uint32 __PPO__bIsAiming() { return STRUCT_OFFSET(ATDMCharacterBase, bIsAiming); }


#define TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMCharacterBase_h_12_PROLOG \
	TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMCharacterBase_h_15_EVENT_PARMS


#define TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMCharacterBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMCharacterBase_h_15_PRIVATE_PROPERTY_OFFSET \
	TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMCharacterBase_h_15_SPARSE_DATA \
	TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMCharacterBase_h_15_RPC_WRAPPERS \
	TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMCharacterBase_h_15_CALLBACK_WRAPPERS \
	TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMCharacterBase_h_15_INCLASS \
	TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMCharacterBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMCharacterBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMCharacterBase_h_15_PRIVATE_PROPERTY_OFFSET \
	TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMCharacterBase_h_15_SPARSE_DATA \
	TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMCharacterBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMCharacterBase_h_15_CALLBACK_WRAPPERS \
	TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMCharacterBase_h_15_INCLASS_NO_PURE_DECLS \
	TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMCharacterBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TDMDEATHMATCH_API UClass* StaticClass<class ATDMCharacterBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMCharacterBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
