// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TDMDEATHMATCH_TDMStructs_generated_h
#error "TDMStructs.generated.h already included, missing '#pragma once' in TDMStructs.h"
#endif
#define TDMDEATHMATCH_TDMStructs_generated_h

#define TDMDeathmatch_Source_TDMDeathmatch_TDMStructs_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFirearmToSpawn_Statics; \
	TDMDEATHMATCH_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> TDMDEATHMATCH_API UScriptStruct* StaticStruct<struct FFirearmToSpawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TDMDeathmatch_Source_TDMDeathmatch_TDMStructs_h


#define FOREACH_ENUM_EATTACHMENTTYPE(op) \
	op(EAttachmentType::Optic) \
	op(EAttachmentType::Muzzle) 

enum class EAttachmentType : uint8;
template<> TDMDEATHMATCH_API UEnum* StaticEnum<EAttachmentType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
