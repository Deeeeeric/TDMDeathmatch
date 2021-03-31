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
#ifdef TDMDEATHMATCH_TDMCharacterBase_generated_h
#error "TDMCharacterBase.generated.h already included, missing '#pragma once' in TDMCharacterBase.h"
#endif
#define TDMDEATHMATCH_TDMCharacterBase_generated_h

#define TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMCharacterBase_h_12_SPARSE_DATA
#define TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMCharacterBase_h_12_RPC_WRAPPERS \
	virtual bool Multi_OnFire_Validate(FVector , FRotator ); \
	virtual void Multi_OnFire_Implementation(FVector SpawnLocation, FRotator SpawnRotation); \
	virtual bool Server_OnFire_Validate(FVector , FRotator ); \
	virtual void Server_OnFire_Implementation(FVector SpawnLocation, FRotator SpawnRotation); \
 \
	DECLARE_FUNCTION(execMulti_OnFire); \
	DECLARE_FUNCTION(execServer_OnFire);


#define TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMCharacterBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMulti_OnFire); \
	DECLARE_FUNCTION(execServer_OnFire);


#define TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMCharacterBase_h_12_EVENT_PARMS \
	struct TDMCharacterBase_eventMulti_OnFire_Parms \
	{ \
		FVector SpawnLocation; \
		FRotator SpawnRotation; \
	}; \
	struct TDMCharacterBase_eventServer_OnFire_Parms \
	{ \
		FVector SpawnLocation; \
		FRotator SpawnRotation; \
	};


#define TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMCharacterBase_h_12_CALLBACK_WRAPPERS
#define TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMCharacterBase_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATDMCharacterBase(); \
	friend struct Z_Construct_UClass_ATDMCharacterBase_Statics; \
public: \
	DECLARE_CLASS(ATDMCharacterBase, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TDMDeathmatch"), NO_API) \
	DECLARE_SERIALIZER(ATDMCharacterBase)


#define TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMCharacterBase_h_12_INCLASS \
private: \
	static void StaticRegisterNativesATDMCharacterBase(); \
	friend struct Z_Construct_UClass_ATDMCharacterBase_Statics; \
public: \
	DECLARE_CLASS(ATDMCharacterBase, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TDMDeathmatch"), NO_API) \
	DECLARE_SERIALIZER(ATDMCharacterBase)


#define TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMCharacterBase_h_12_STANDARD_CONSTRUCTORS \
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


#define TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMCharacterBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATDMCharacterBase(ATDMCharacterBase&&); \
	NO_API ATDMCharacterBase(const ATDMCharacterBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATDMCharacterBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATDMCharacterBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATDMCharacterBase)


#define TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMCharacterBase_h_12_PRIVATE_PROPERTY_OFFSET
#define TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMCharacterBase_h_9_PROLOG \
	TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMCharacterBase_h_12_EVENT_PARMS


#define TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMCharacterBase_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMCharacterBase_h_12_PRIVATE_PROPERTY_OFFSET \
	TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMCharacterBase_h_12_SPARSE_DATA \
	TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMCharacterBase_h_12_RPC_WRAPPERS \
	TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMCharacterBase_h_12_CALLBACK_WRAPPERS \
	TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMCharacterBase_h_12_INCLASS \
	TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMCharacterBase_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMCharacterBase_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMCharacterBase_h_12_PRIVATE_PROPERTY_OFFSET \
	TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMCharacterBase_h_12_SPARSE_DATA \
	TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMCharacterBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMCharacterBase_h_12_CALLBACK_WRAPPERS \
	TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMCharacterBase_h_12_INCLASS_NO_PURE_DECLS \
	TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMCharacterBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TDMDEATHMATCH_API UClass* StaticClass<class ATDMCharacterBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMCharacterBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
