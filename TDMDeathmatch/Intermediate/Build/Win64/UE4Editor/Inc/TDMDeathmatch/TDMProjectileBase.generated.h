// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef TDMDEATHMATCH_TDMProjectileBase_generated_h
#error "TDMProjectileBase.generated.h already included, missing '#pragma once' in TDMProjectileBase.h"
#endif
#define TDMDEATHMATCH_TDMProjectileBase_generated_h

#define TDMDeathmatch_Source_TDMDeathmatch_Public_Game_Weapon_TDMProjectileBase_h_12_SPARSE_DATA
#define TDMDeathmatch_Source_TDMDeathmatch_Public_Game_Weapon_TDMProjectileBase_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define TDMDeathmatch_Source_TDMDeathmatch_Public_Game_Weapon_TDMProjectileBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define TDMDeathmatch_Source_TDMDeathmatch_Public_Game_Weapon_TDMProjectileBase_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATDMProjectileBase(); \
	friend struct Z_Construct_UClass_ATDMProjectileBase_Statics; \
public: \
	DECLARE_CLASS(ATDMProjectileBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TDMDeathmatch"), NO_API) \
	DECLARE_SERIALIZER(ATDMProjectileBase)


#define TDMDeathmatch_Source_TDMDeathmatch_Public_Game_Weapon_TDMProjectileBase_h_12_INCLASS \
private: \
	static void StaticRegisterNativesATDMProjectileBase(); \
	friend struct Z_Construct_UClass_ATDMProjectileBase_Statics; \
public: \
	DECLARE_CLASS(ATDMProjectileBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TDMDeathmatch"), NO_API) \
	DECLARE_SERIALIZER(ATDMProjectileBase)


#define TDMDeathmatch_Source_TDMDeathmatch_Public_Game_Weapon_TDMProjectileBase_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATDMProjectileBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATDMProjectileBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATDMProjectileBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATDMProjectileBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATDMProjectileBase(ATDMProjectileBase&&); \
	NO_API ATDMProjectileBase(const ATDMProjectileBase&); \
public:


#define TDMDeathmatch_Source_TDMDeathmatch_Public_Game_Weapon_TDMProjectileBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATDMProjectileBase(ATDMProjectileBase&&); \
	NO_API ATDMProjectileBase(const ATDMProjectileBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATDMProjectileBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATDMProjectileBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATDMProjectileBase)


#define TDMDeathmatch_Source_TDMDeathmatch_Public_Game_Weapon_TDMProjectileBase_h_12_PRIVATE_PROPERTY_OFFSET
#define TDMDeathmatch_Source_TDMDeathmatch_Public_Game_Weapon_TDMProjectileBase_h_9_PROLOG
#define TDMDeathmatch_Source_TDMDeathmatch_Public_Game_Weapon_TDMProjectileBase_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TDMDeathmatch_Source_TDMDeathmatch_Public_Game_Weapon_TDMProjectileBase_h_12_PRIVATE_PROPERTY_OFFSET \
	TDMDeathmatch_Source_TDMDeathmatch_Public_Game_Weapon_TDMProjectileBase_h_12_SPARSE_DATA \
	TDMDeathmatch_Source_TDMDeathmatch_Public_Game_Weapon_TDMProjectileBase_h_12_RPC_WRAPPERS \
	TDMDeathmatch_Source_TDMDeathmatch_Public_Game_Weapon_TDMProjectileBase_h_12_INCLASS \
	TDMDeathmatch_Source_TDMDeathmatch_Public_Game_Weapon_TDMProjectileBase_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TDMDeathmatch_Source_TDMDeathmatch_Public_Game_Weapon_TDMProjectileBase_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TDMDeathmatch_Source_TDMDeathmatch_Public_Game_Weapon_TDMProjectileBase_h_12_PRIVATE_PROPERTY_OFFSET \
	TDMDeathmatch_Source_TDMDeathmatch_Public_Game_Weapon_TDMProjectileBase_h_12_SPARSE_DATA \
	TDMDeathmatch_Source_TDMDeathmatch_Public_Game_Weapon_TDMProjectileBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	TDMDeathmatch_Source_TDMDeathmatch_Public_Game_Weapon_TDMProjectileBase_h_12_INCLASS_NO_PURE_DECLS \
	TDMDeathmatch_Source_TDMDeathmatch_Public_Game_Weapon_TDMProjectileBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TDMDEATHMATCH_API UClass* StaticClass<class ATDMProjectileBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TDMDeathmatch_Source_TDMDeathmatch_Public_Game_Weapon_TDMProjectileBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
