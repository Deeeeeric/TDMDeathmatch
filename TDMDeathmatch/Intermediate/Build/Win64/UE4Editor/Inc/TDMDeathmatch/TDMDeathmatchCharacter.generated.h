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
#ifdef TDMDEATHMATCH_TDMDeathmatchCharacter_generated_h
#error "TDMDeathmatchCharacter.generated.h already included, missing '#pragma once' in TDMDeathmatchCharacter.h"
#endif
#define TDMDEATHMATCH_TDMDeathmatchCharacter_generated_h

#define TDMDeathmatch_Source_TDMDeathmatch_TDMDeathmatchCharacter_h_14_SPARSE_DATA
#define TDMDeathmatch_Source_TDMDeathmatch_TDMDeathmatchCharacter_h_14_RPC_WRAPPERS \
	virtual bool Multi_OnFire_Validate(FVector , FRotator ); \
	virtual void Multi_OnFire_Implementation(FVector SpawnLocation, FRotator SpawnRotation); \
	virtual bool Server_OnFire_Validate(FVector , FRotator ); \
	virtual void Server_OnFire_Implementation(FVector SpawnLocation, FRotator SpawnRotation); \
 \
	DECLARE_FUNCTION(execMulti_OnFire); \
	DECLARE_FUNCTION(execServer_OnFire);


#define TDMDeathmatch_Source_TDMDeathmatch_TDMDeathmatchCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMulti_OnFire); \
	DECLARE_FUNCTION(execServer_OnFire);


#define TDMDeathmatch_Source_TDMDeathmatch_TDMDeathmatchCharacter_h_14_EVENT_PARMS \
	struct TDMDeathmatchCharacter_eventMulti_OnFire_Parms \
	{ \
		FVector SpawnLocation; \
		FRotator SpawnRotation; \
	}; \
	struct TDMDeathmatchCharacter_eventServer_OnFire_Parms \
	{ \
		FVector SpawnLocation; \
		FRotator SpawnRotation; \
	};


#define TDMDeathmatch_Source_TDMDeathmatch_TDMDeathmatchCharacter_h_14_CALLBACK_WRAPPERS
#define TDMDeathmatch_Source_TDMDeathmatch_TDMDeathmatchCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATDMDeathmatchCharacter(); \
	friend struct Z_Construct_UClass_ATDMDeathmatchCharacter_Statics; \
public: \
	DECLARE_CLASS(ATDMDeathmatchCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TDMDeathmatch"), NO_API) \
	DECLARE_SERIALIZER(ATDMDeathmatchCharacter)


#define TDMDeathmatch_Source_TDMDeathmatch_TDMDeathmatchCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesATDMDeathmatchCharacter(); \
	friend struct Z_Construct_UClass_ATDMDeathmatchCharacter_Statics; \
public: \
	DECLARE_CLASS(ATDMDeathmatchCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TDMDeathmatch"), NO_API) \
	DECLARE_SERIALIZER(ATDMDeathmatchCharacter)


#define TDMDeathmatch_Source_TDMDeathmatch_TDMDeathmatchCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATDMDeathmatchCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATDMDeathmatchCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATDMDeathmatchCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATDMDeathmatchCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATDMDeathmatchCharacter(ATDMDeathmatchCharacter&&); \
	NO_API ATDMDeathmatchCharacter(const ATDMDeathmatchCharacter&); \
public:


#define TDMDeathmatch_Source_TDMDeathmatch_TDMDeathmatchCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATDMDeathmatchCharacter(ATDMDeathmatchCharacter&&); \
	NO_API ATDMDeathmatchCharacter(const ATDMDeathmatchCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATDMDeathmatchCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATDMDeathmatchCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATDMDeathmatchCharacter)


#define TDMDeathmatch_Source_TDMDeathmatch_TDMDeathmatchCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(ATDMDeathmatchCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(ATDMDeathmatchCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(ATDMDeathmatchCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(ATDMDeathmatchCharacter, FirstPersonCameraComponent); }


#define TDMDeathmatch_Source_TDMDeathmatch_TDMDeathmatchCharacter_h_11_PROLOG \
	TDMDeathmatch_Source_TDMDeathmatch_TDMDeathmatchCharacter_h_14_EVENT_PARMS


#define TDMDeathmatch_Source_TDMDeathmatch_TDMDeathmatchCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TDMDeathmatch_Source_TDMDeathmatch_TDMDeathmatchCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	TDMDeathmatch_Source_TDMDeathmatch_TDMDeathmatchCharacter_h_14_SPARSE_DATA \
	TDMDeathmatch_Source_TDMDeathmatch_TDMDeathmatchCharacter_h_14_RPC_WRAPPERS \
	TDMDeathmatch_Source_TDMDeathmatch_TDMDeathmatchCharacter_h_14_CALLBACK_WRAPPERS \
	TDMDeathmatch_Source_TDMDeathmatch_TDMDeathmatchCharacter_h_14_INCLASS \
	TDMDeathmatch_Source_TDMDeathmatch_TDMDeathmatchCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TDMDeathmatch_Source_TDMDeathmatch_TDMDeathmatchCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TDMDeathmatch_Source_TDMDeathmatch_TDMDeathmatchCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	TDMDeathmatch_Source_TDMDeathmatch_TDMDeathmatchCharacter_h_14_SPARSE_DATA \
	TDMDeathmatch_Source_TDMDeathmatch_TDMDeathmatchCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	TDMDeathmatch_Source_TDMDeathmatch_TDMDeathmatchCharacter_h_14_CALLBACK_WRAPPERS \
	TDMDeathmatch_Source_TDMDeathmatch_TDMDeathmatchCharacter_h_14_INCLASS_NO_PURE_DECLS \
	TDMDeathmatch_Source_TDMDeathmatch_TDMDeathmatchCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TDMDEATHMATCH_API UClass* StaticClass<class ATDMDeathmatchCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TDMDeathmatch_Source_TDMDeathmatch_TDMDeathmatchCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
