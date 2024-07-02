// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZKickingInfo;
#ifdef STARBREEZE_OnKickInfoChangedDelegate_generated_h
#error "OnKickInfoChangedDelegate.generated.h already included, missing '#pragma once' in OnKickInfoChangedDelegate.h"
#endif
#define STARBREEZE_OnKickInfoChangedDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_OnKickInfoChangedDelegate_h_6_DELEGATE \
struct _Script_Starbreeze_eventOnKickInfoChanged_Parms \
{ \
	FSBZKickingInfo KickingInfo; \
}; \
static inline void FOnKickInfoChanged_DelegateWrapper(const FMulticastScriptDelegate& OnKickInfoChanged, FSBZKickingInfo KickingInfo) \
{ \
	_Script_Starbreeze_eventOnKickInfoChanged_Parms Parms; \
	Parms.KickingInfo=KickingInfo; \
	OnKickInfoChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_OnKickInfoChangedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS