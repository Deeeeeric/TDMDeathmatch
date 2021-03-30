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
#ifdef TDMDEATHMATCH_TDMDeathmatchProjectile_generated_h
#error "TDMDeathmatchProjectile.generated.h already included, missing '#pragma once' in TDMDeathmatchProjectile.h"
#endif
#define TDMDEATHMATCH_TDMDeathmatchProjectile_generated_h

#define TDMDeathmatch_Source_TDMDeathmatch_TDMDeathmatchProjectile_h_12_SPARSE_DATA
#define TDMDeathmatch_Source_TDMDeathmatch_TDMDeathmatchProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define TDMDeathmatch_Source_TDMDeathmatch_TDMDeathmatchProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define TDMDeathmatch_Source_TDMDeathmatch_TDMDeathmatchProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATDMDeathmatchProjectile(); \
	friend struct Z_Construct_UClass_ATDMDeathmatchProjectile_Statics; \
public: \
	DECLARE_CLASS(ATDMDeathmatchProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TDMDeathmatch"), NO_API) \
	DECLARE_SERIALIZER(ATDMDeathmatchProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define TDMDeathmatch_Source_TDMDeathmatch_TDMDeathmatchProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesATDMDeathmatchProjectile(); \
	friend struct Z_Construct_UClass_ATDMDeathmatchProjectile_Statics; \
public: \
	DECLARE_CLASS(ATDMDeathmatchProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TDMDeathmatch"), NO_API) \
	DECLARE_SERIALIZER(ATDMDeathmatchProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define TDMDeathmatch_Source_TDMDeathmatch_TDMDeathmatchProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATDMDeathmatchProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATDMDeathmatchProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATDMDeathmatchProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATDMDeathmatchProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATDMDeathmatchProjectile(ATDMDeathmatchProjectile&&); \
	NO_API ATDMDeathmatchProjectile(const ATDMDeathmatchProjectile&); \
public:


#define TDMDeathmatch_Source_TDMDeathmatch_TDMDeathmatchProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATDMDeathmatchProjectile(ATDMDeathmatchProjectile&&); \
	NO_API ATDMDeathmatchProjectile(const ATDMDeathmatchProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATDMDeathmatchProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATDMDeathmatchProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATDMDeathmatchProjectile)


#define TDMDeathmatch_Source_TDMDeathmatch_TDMDeathmatchProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(ATDMDeathmatchProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(ATDMDeathmatchProjectile, ProjectileMovement); }


#define TDMDeathmatch_Source_TDMDeathmatch_TDMDeathmatchProjectile_h_9_PROLOG
#define TDMDeathmatch_Source_TDMDeathmatch_TDMDeathmatchProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TDMDeathmatch_Source_TDMDeathmatch_TDMDeathmatchProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	TDMDeathmatch_Source_TDMDeathmatch_TDMDeathmatchProjectile_h_12_SPARSE_DATA \
	TDMDeathmatch_Source_TDMDeathmatch_TDMDeathmatchProjectile_h_12_RPC_WRAPPERS \
	TDMDeathmatch_Source_TDMDeathmatch_TDMDeathmatchProjectile_h_12_INCLASS \
	TDMDeathmatch_Source_TDMDeathmatch_TDMDeathmatchProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TDMDeathmatch_Source_TDMDeathmatch_TDMDeathmatchProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TDMDeathmatch_Source_TDMDeathmatch_TDMDeathmatchProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	TDMDeathmatch_Source_TDMDeathmatch_TDMDeathmatchProjectile_h_12_SPARSE_DATA \
	TDMDeathmatch_Source_TDMDeathmatch_TDMDeathmatchProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	TDMDeathmatch_Source_TDMDeathmatch_TDMDeathmatchProjectile_h_12_INCLASS_NO_PURE_DECLS \
	TDMDeathmatch_Source_TDMDeathmatch_TDMDeathmatchProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TDMDEATHMATCH_API UClass* StaticClass<class ATDMDeathmatchProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TDMDeathmatch_Source_TDMDeathmatch_TDMDeathmatchProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
