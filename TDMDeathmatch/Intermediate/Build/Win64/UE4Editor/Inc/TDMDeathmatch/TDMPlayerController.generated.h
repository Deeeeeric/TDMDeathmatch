// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EPossessed : uint8;
#ifdef TDMDEATHMATCH_TDMPlayerController_generated_h
#error "TDMPlayerController.generated.h already included, missing '#pragma once' in TDMPlayerController.h"
#endif
#define TDMDEATHMATCH_TDMPlayerController_generated_h

#define TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMPlayerController_h_19_SPARSE_DATA
#define TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMPlayerController_h_19_RPC_WRAPPERS
#define TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMPlayerController_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMPlayerController_h_19_EVENT_PARMS \
	struct TDMPlayerController_eventOnPossessionChange_Parms \
	{ \
		EPossessed Possessed; \
	};


#define TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMPlayerController_h_19_CALLBACK_WRAPPERS
#define TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMPlayerController_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATDMPlayerController(); \
	friend struct Z_Construct_UClass_ATDMPlayerController_Statics; \
public: \
	DECLARE_CLASS(ATDMPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TDMDeathmatch"), NO_API) \
	DECLARE_SERIALIZER(ATDMPlayerController)


#define TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMPlayerController_h_19_INCLASS \
private: \
	static void StaticRegisterNativesATDMPlayerController(); \
	friend struct Z_Construct_UClass_ATDMPlayerController_Statics; \
public: \
	DECLARE_CLASS(ATDMPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TDMDeathmatch"), NO_API) \
	DECLARE_SERIALIZER(ATDMPlayerController)


#define TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMPlayerController_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATDMPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATDMPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATDMPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATDMPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATDMPlayerController(ATDMPlayerController&&); \
	NO_API ATDMPlayerController(const ATDMPlayerController&); \
public:


#define TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMPlayerController_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATDMPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATDMPlayerController(ATDMPlayerController&&); \
	NO_API ATDMPlayerController(const ATDMPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATDMPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATDMPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATDMPlayerController)


#define TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMPlayerController_h_19_PRIVATE_PROPERTY_OFFSET
#define TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMPlayerController_h_16_PROLOG \
	TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMPlayerController_h_19_EVENT_PARMS


#define TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMPlayerController_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMPlayerController_h_19_PRIVATE_PROPERTY_OFFSET \
	TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMPlayerController_h_19_SPARSE_DATA \
	TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMPlayerController_h_19_RPC_WRAPPERS \
	TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMPlayerController_h_19_CALLBACK_WRAPPERS \
	TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMPlayerController_h_19_INCLASS \
	TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMPlayerController_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMPlayerController_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMPlayerController_h_19_PRIVATE_PROPERTY_OFFSET \
	TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMPlayerController_h_19_SPARSE_DATA \
	TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMPlayerController_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMPlayerController_h_19_CALLBACK_WRAPPERS \
	TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMPlayerController_h_19_INCLASS_NO_PURE_DECLS \
	TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMPlayerController_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TDMDEATHMATCH_API UClass* StaticClass<class ATDMPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TDMDeathmatch_Source_TDMDeathmatch_Public_Player_TDMPlayerController_h


#define FOREACH_ENUM_EPOSSESSED(op) \
	op(EPossessed::Possessed) \
	op(EPossessed::UnPossessed) 

enum class EPossessed : uint8;
template<> TDMDEATHMATCH_API UEnum* StaticEnum<EPossessed>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
