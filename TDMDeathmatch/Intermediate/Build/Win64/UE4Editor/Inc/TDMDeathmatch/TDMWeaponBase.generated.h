// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ATDMAttachment;
class ATDMAttachment_Optic;
struct FVector_NetQuantize10;
struct FHitResult;
#ifdef TDMDEATHMATCH_TDMWeaponBase_generated_h
#error "TDMWeaponBase.generated.h already included, missing '#pragma once' in TDMWeaponBase.h"
#endif
#define TDMDEATHMATCH_TDMWeaponBase_generated_h

#define TDMDeathmatch_Source_TDMDeathmatch_Public_Game_Weapon_TDMWeaponBase_h_29_SPARSE_DATA
#define TDMDeathmatch_Source_TDMDeathmatch_Public_Game_Weapon_TDMWeaponBase_h_29_RPC_WRAPPERS \
	virtual bool Multi_Reload_Validate(); \
	virtual void Multi_Reload_Implementation(); \
	virtual bool Server_Reload_Validate(); \
	virtual void Server_Reload_Implementation(); \
	virtual bool Multi_Fire_Validate(FVector_NetQuantize10 , FVector_NetQuantize10 ); \
	virtual void Multi_Fire_Implementation(FVector_NetQuantize10 SpawnLocation, FVector_NetQuantize10 MuzzleRotationVector); \
	virtual bool Server_Fire_Validate(FVector_NetQuantize10 , FVector_NetQuantize10 ); \
	virtual void Server_Fire_Implementation(FVector_NetQuantize10 SpawnLocation, FVector_NetQuantize10 MuzzleRotationVector); \
	virtual bool Server_AddAttachment_Validate(TSubclassOf<ATDMAttachment>  ); \
	virtual void Server_AddAttachment_Implementation(TSubclassOf<ATDMAttachment>  AttachmentClass); \
 \
	DECLARE_FUNCTION(execGetMuzzle); \
	DECLARE_FUNCTION(execGetOptic); \
	DECLARE_FUNCTION(execAddAttachment); \
	DECLARE_FUNCTION(execActivateWeapon); \
	DECLARE_FUNCTION(execMulti_Reload); \
	DECLARE_FUNCTION(execServer_Reload); \
	DECLARE_FUNCTION(execMulti_Fire); \
	DECLARE_FUNCTION(execServer_Fire); \
	DECLARE_FUNCTION(execServer_AddAttachment);


#define TDMDeathmatch_Source_TDMDeathmatch_Public_Game_Weapon_TDMWeaponBase_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMuzzle); \
	DECLARE_FUNCTION(execGetOptic); \
	DECLARE_FUNCTION(execAddAttachment); \
	DECLARE_FUNCTION(execActivateWeapon); \
	DECLARE_FUNCTION(execMulti_Reload); \
	DECLARE_FUNCTION(execServer_Reload); \
	DECLARE_FUNCTION(execMulti_Fire); \
	DECLARE_FUNCTION(execServer_Fire); \
	DECLARE_FUNCTION(execServer_AddAttachment);


#define TDMDeathmatch_Source_TDMDeathmatch_Public_Game_Weapon_TDMWeaponBase_h_29_EVENT_PARMS \
	struct TDMWeaponBase_eventMulti_Fire_Parms \
	{ \
		FVector_NetQuantize10 SpawnLocation; \
		FVector_NetQuantize10 MuzzleRotationVector; \
	}; \
	struct TDMWeaponBase_eventOnHit_Parms \
	{ \
		FHitResult HitResult; \
	}; \
	struct TDMWeaponBase_eventServer_AddAttachment_Parms \
	{ \
		TSubclassOf<ATDMAttachment>  AttachmentClass; \
	}; \
	struct TDMWeaponBase_eventServer_Fire_Parms \
	{ \
		FVector_NetQuantize10 SpawnLocation; \
		FVector_NetQuantize10 MuzzleRotationVector; \
	};


#define TDMDeathmatch_Source_TDMDeathmatch_Public_Game_Weapon_TDMWeaponBase_h_29_CALLBACK_WRAPPERS
#define TDMDeathmatch_Source_TDMDeathmatch_Public_Game_Weapon_TDMWeaponBase_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATDMWeaponBase(); \
	friend struct Z_Construct_UClass_ATDMWeaponBase_Statics; \
public: \
	DECLARE_CLASS(ATDMWeaponBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TDMDeathmatch"), NO_API) \
	DECLARE_SERIALIZER(ATDMWeaponBase) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentAmmoRemaining=NETFIELD_REP_START, \
		MagazineAmmo, \
		Optic, \
		Muzzle, \
		NETFIELD_REP_END=Muzzle	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define TDMDeathmatch_Source_TDMDeathmatch_Public_Game_Weapon_TDMWeaponBase_h_29_INCLASS \
private: \
	static void StaticRegisterNativesATDMWeaponBase(); \
	friend struct Z_Construct_UClass_ATDMWeaponBase_Statics; \
public: \
	DECLARE_CLASS(ATDMWeaponBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TDMDeathmatch"), NO_API) \
	DECLARE_SERIALIZER(ATDMWeaponBase) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentAmmoRemaining=NETFIELD_REP_START, \
		MagazineAmmo, \
		Optic, \
		Muzzle, \
		NETFIELD_REP_END=Muzzle	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define TDMDeathmatch_Source_TDMDeathmatch_Public_Game_Weapon_TDMWeaponBase_h_29_STANDARD_CONSTRUCTORS \
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


#define TDMDeathmatch_Source_TDMDeathmatch_Public_Game_Weapon_TDMWeaponBase_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATDMWeaponBase(ATDMWeaponBase&&); \
	NO_API ATDMWeaponBase(const ATDMWeaponBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATDMWeaponBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATDMWeaponBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATDMWeaponBase)


#define TDMDeathmatch_Source_TDMDeathmatch_Public_Game_Weapon_TDMWeaponBase_h_29_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileClass() { return STRUCT_OFFSET(ATDMWeaponBase, ProjectileClass); } \
	FORCEINLINE static uint32 __PPO__WeaponMesh() { return STRUCT_OFFSET(ATDMWeaponBase, WeaponMesh); } \
	FORCEINLINE static uint32 __PPO__NS_Default() { return STRUCT_OFFSET(ATDMWeaponBase, NS_Default); } \
	FORCEINLINE static uint32 __PPO__NS_Flesh() { return STRUCT_OFFSET(ATDMWeaponBase, NS_Flesh); } \
	FORCEINLINE static uint32 __PPO__NS_Metal() { return STRUCT_OFFSET(ATDMWeaponBase, NS_Metal); } \
	FORCEINLINE static uint32 __PPO__NS_Wood() { return STRUCT_OFFSET(ATDMWeaponBase, NS_Wood); } \
	FORCEINLINE static uint32 __PPO__SB_Default() { return STRUCT_OFFSET(ATDMWeaponBase, SB_Default); } \
	FORCEINLINE static uint32 __PPO__SB_Flesh() { return STRUCT_OFFSET(ATDMWeaponBase, SB_Flesh); } \
	FORCEINLINE static uint32 __PPO__SB_Metal() { return STRUCT_OFFSET(ATDMWeaponBase, SB_Metal); } \
	FORCEINLINE static uint32 __PPO__SB_Wood() { return STRUCT_OFFSET(ATDMWeaponBase, SB_Wood); } \
	FORCEINLINE static uint32 __PPO__FireAnimation() { return STRUCT_OFFSET(ATDMWeaponBase, FireAnimation); } \
	FORCEINLINE static uint32 __PPO__ReloadAnimation() { return STRUCT_OFFSET(ATDMWeaponBase, ReloadAnimation); } \
	FORCEINLINE static uint32 __PPO__ReloadEmptyAnimation() { return STRUCT_OFFSET(ATDMWeaponBase, ReloadEmptyAnimation); } \
	FORCEINLINE static uint32 __PPO__TPPReloadAnimation() { return STRUCT_OFFSET(ATDMWeaponBase, TPPReloadAnimation); } \
	FORCEINLINE static uint32 __PPO__TPPReloadEmptyAnimation() { return STRUCT_OFFSET(ATDMWeaponBase, TPPReloadEmptyAnimation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonMontage() { return STRUCT_OFFSET(ATDMWeaponBase, FirstPersonMontage); } \
	FORCEINLINE static uint32 __PPO__ADSFireNames() { return STRUCT_OFFSET(ATDMWeaponBase, ADSFireNames); } \
	FORCEINLINE static uint32 __PPO__HipFireNames() { return STRUCT_OFFSET(ATDMWeaponBase, HipFireNames); } \
	FORCEINLINE static uint32 __PPO__ThirdPersonMontage() { return STRUCT_OFFSET(ATDMWeaponBase, ThirdPersonMontage); } \
	FORCEINLINE static uint32 __PPO__FireModes() { return STRUCT_OFFSET(ATDMWeaponBase, FireModes); } \
	FORCEINLINE static uint32 __PPO__BurstFireAmount() { return STRUCT_OFFSET(ATDMWeaponBase, BurstFireAmount); } \
	FORCEINLINE static uint32 __PPO__FireRate() { return STRUCT_OFFSET(ATDMWeaponBase, FireRate); } \
	FORCEINLINE static uint32 __PPO__MagazineCapacity() { return STRUCT_OFFSET(ATDMWeaponBase, MagazineCapacity); } \
	FORCEINLINE static uint32 __PPO__TotalAmmoCapacity() { return STRUCT_OFFSET(ATDMWeaponBase, TotalAmmoCapacity); } \
	FORCEINLINE static uint32 __PPO__CurrentAmmoRemaining() { return STRUCT_OFFSET(ATDMWeaponBase, CurrentAmmoRemaining); } \
	FORCEINLINE static uint32 __PPO__MagazineAmmo() { return STRUCT_OFFSET(ATDMWeaponBase, MagazineAmmo); } \
	FORCEINLINE static uint32 __PPO__Optic() { return STRUCT_OFFSET(ATDMWeaponBase, Optic); } \
	FORCEINLINE static uint32 __PPO__Muzzle() { return STRUCT_OFFSET(ATDMWeaponBase, Muzzle); } \
	FORCEINLINE static uint32 __PPO__CameraFOV() { return STRUCT_OFFSET(ATDMWeaponBase, CameraFOV); } \
	FORCEINLINE static uint32 __PPO__CameraFOVSpeed() { return STRUCT_OFFSET(ATDMWeaponBase, CameraFOVSpeed); } \
	FORCEINLINE static uint32 __PPO__FireCameraShakes() { return STRUCT_OFFSET(ATDMWeaponBase, FireCameraShakes); }


#define TDMDeathmatch_Source_TDMDeathmatch_Public_Game_Weapon_TDMWeaponBase_h_26_PROLOG \
	TDMDeathmatch_Source_TDMDeathmatch_Public_Game_Weapon_TDMWeaponBase_h_29_EVENT_PARMS


#define TDMDeathmatch_Source_TDMDeathmatch_Public_Game_Weapon_TDMWeaponBase_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TDMDeathmatch_Source_TDMDeathmatch_Public_Game_Weapon_TDMWeaponBase_h_29_PRIVATE_PROPERTY_OFFSET \
	TDMDeathmatch_Source_TDMDeathmatch_Public_Game_Weapon_TDMWeaponBase_h_29_SPARSE_DATA \
	TDMDeathmatch_Source_TDMDeathmatch_Public_Game_Weapon_TDMWeaponBase_h_29_RPC_WRAPPERS \
	TDMDeathmatch_Source_TDMDeathmatch_Public_Game_Weapon_TDMWeaponBase_h_29_CALLBACK_WRAPPERS \
	TDMDeathmatch_Source_TDMDeathmatch_Public_Game_Weapon_TDMWeaponBase_h_29_INCLASS \
	TDMDeathmatch_Source_TDMDeathmatch_Public_Game_Weapon_TDMWeaponBase_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TDMDeathmatch_Source_TDMDeathmatch_Public_Game_Weapon_TDMWeaponBase_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TDMDeathmatch_Source_TDMDeathmatch_Public_Game_Weapon_TDMWeaponBase_h_29_PRIVATE_PROPERTY_OFFSET \
	TDMDeathmatch_Source_TDMDeathmatch_Public_Game_Weapon_TDMWeaponBase_h_29_SPARSE_DATA \
	TDMDeathmatch_Source_TDMDeathmatch_Public_Game_Weapon_TDMWeaponBase_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	TDMDeathmatch_Source_TDMDeathmatch_Public_Game_Weapon_TDMWeaponBase_h_29_CALLBACK_WRAPPERS \
	TDMDeathmatch_Source_TDMDeathmatch_Public_Game_Weapon_TDMWeaponBase_h_29_INCLASS_NO_PURE_DECLS \
	TDMDeathmatch_Source_TDMDeathmatch_Public_Game_Weapon_TDMWeaponBase_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TDMDEATHMATCH_API UClass* StaticClass<class ATDMWeaponBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TDMDeathmatch_Source_TDMDeathmatch_Public_Game_Weapon_TDMWeaponBase_h


#define FOREACH_ENUM_EFIREMODE(op) \
	op(EFireMode::Semi) \
	op(EFireMode::Burst) \
	op(EFireMode::Full) 

enum class EFireMode : uint8;
template<> TDMDEATHMATCH_API UEnum* StaticEnum<EFireMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
