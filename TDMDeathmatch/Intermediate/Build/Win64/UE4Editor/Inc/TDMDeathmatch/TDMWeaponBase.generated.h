// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FRotator;
#ifdef TDMDEATHMATCH_TDMWeaponBase_generated_h
#error "TDMWeaponBase.generated.h already included, missing '#pragma once' in TDMWeaponBase.h"
#endif
#define TDMDEATHMATCH_TDMWeaponBase_generated_h

#define TDMDeathmatch_Source_TDMDeathmatch_Public_Game_Weapon_TDMWeaponBase_h_15_SPARSE_DATA
#define TDMDeathmatch_Source_TDMDeathmatch_Public_Game_Weapon_TDMWeaponBase_h_15_RPC_WRAPPERS \
	virtual bool Multi_Fire_Validate(FVector , FRotator ); \
	virtual void Multi_Fire_Implementation(FVector SpawnLocation, FRotator SpawnRotation); \
	virtual bool Server_Fire_Validate(FVector , FRotator ); \
	virtual void Server_Fire_Implementation(FVector SpawnLocation, FRotator SpawnRotation); \
 \
	DECLARE_FUNCTION(execMulti_Fire); \
	DECLARE_FUNCTION(execServer_Fire);


#define TDMDeathmatch_Source_TDMDeathmatch_Public_Game_Weapon_TDMWeaponBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMulti_Fire); \
	DECLARE_FUNCTION(execServer_Fire);


#define TDMDeathmatch_Source_TDMDeathmatch_Public_Game_Weapon_TDMWeaponBase_h_15_EVENT_PARMS \
	struct TDMWeaponBase_eventMulti_Fire_Parms \
	{ \
		FVector SpawnLocation; \
		FRotator SpawnRotation; \
	}; \
	struct TDMWeaponBase_eventServer_Fire_Parms \
	{ \
		FVector SpawnLocation; \
		FRotator SpawnRotation; \
	};


#define TDMDeathmatch_Source_TDMDeathmatch_Public_Game_Weapon_TDMWeaponBase_h_15_CALLBACK_WRAPPERS
#define TDMDeathmatch_Source_TDMDeathmatch_Public_Game_Weapon_TDMWeaponBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATDMWeaponBase(); \
	friend struct Z_Construct_UClass_ATDMWeaponBase_Statics; \
public: \
	DECLARE_CLASS(ATDMWeaponBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TDMDeathmatch"), NO_API) \
	DECLARE_SERIALIZER(ATDMWeaponBase)


#define TDMDeathmatch_Source_TDMDeathmatch_Public_Game_Weapon_TDMWeaponBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesATDMWeaponBase(); \
	friend struct Z_Construct_UClass_ATDMWeaponBase_Statics; \
public: \
	DECLARE_CLASS(ATDMWeaponBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TDMDeathmatch"), NO_API) \
	DECLARE_SERIALIZER(ATDMWeaponBase)


#define TDMDeathmatch_Source_TDMDeathmatch_Public_Game_Weapon_TDMWeaponBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATDMWeaponBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATDMWeaponBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATDMWeaponBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATDMWeaponBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATDMWeaponBase(ATDMWeaponBase&&); \
	NO_API ATDMWeaponBase(const ATDMWeaponBase&); \
public:


#define TDMDeathmatch_Source_TDMDeathmatch_Public_Game_Weapon_TDMWeaponBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATDMWeaponBase(ATDMWeaponBase&&); \
	NO_API ATDMWeaponBase(const ATDMWeaponBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATDMWeaponBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATDMWeaponBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATDMWeaponBase)


#define TDMDeathmatch_Source_TDMDeathmatch_Public_Game_Weapon_TDMWeaponBase_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WeaponMesh() { return STRUCT_OFFSET(ATDMWeaponBase, WeaponMesh); } \
	FORCEINLINE static uint32 __PPO__ProjectileClass() { return STRUCT_OFFSET(ATDMWeaponBase, ProjectileClass); }


#define TDMDeathmatch_Source_TDMDeathmatch_Public_Game_Weapon_TDMWeaponBase_h_12_PROLOG \
	TDMDeathmatch_Source_TDMDeathmatch_Public_Game_Weapon_TDMWeaponBase_h_15_EVENT_PARMS


#define TDMDeathmatch_Source_TDMDeathmatch_Public_Game_Weapon_TDMWeaponBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TDMDeathmatch_Source_TDMDeathmatch_Public_Game_Weapon_TDMWeaponBase_h_15_PRIVATE_PROPERTY_OFFSET \
	TDMDeathmatch_Source_TDMDeathmatch_Public_Game_Weapon_TDMWeaponBase_h_15_SPARSE_DATA \
	TDMDeathmatch_Source_TDMDeathmatch_Public_Game_Weapon_TDMWeaponBase_h_15_RPC_WRAPPERS \
	TDMDeathmatch_Source_TDMDeathmatch_Public_Game_Weapon_TDMWeaponBase_h_15_CALLBACK_WRAPPERS \
	TDMDeathmatch_Source_TDMDeathmatch_Public_Game_Weapon_TDMWeaponBase_h_15_INCLASS \
	TDMDeathmatch_Source_TDMDeathmatch_Public_Game_Weapon_TDMWeaponBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TDMDeathmatch_Source_TDMDeathmatch_Public_Game_Weapon_TDMWeaponBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TDMDeathmatch_Source_TDMDeathmatch_Public_Game_Weapon_TDMWeaponBase_h_15_PRIVATE_PROPERTY_OFFSET \
	TDMDeathmatch_Source_TDMDeathmatch_Public_Game_Weapon_TDMWeaponBase_h_15_SPARSE_DATA \
	TDMDeathmatch_Source_TDMDeathmatch_Public_Game_Weapon_TDMWeaponBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	TDMDeathmatch_Source_TDMDeathmatch_Public_Game_Weapon_TDMWeaponBase_h_15_CALLBACK_WRAPPERS \
	TDMDeathmatch_Source_TDMDeathmatch_Public_Game_Weapon_TDMWeaponBase_h_15_INCLASS_NO_PURE_DECLS \
	TDMDeathmatch_Source_TDMDeathmatch_Public_Game_Weapon_TDMWeaponBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TDMDEATHMATCH_API UClass* StaticClass<class ATDMWeaponBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TDMDeathmatch_Source_TDMDeathmatch_Public_Game_Weapon_TDMWeaponBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
