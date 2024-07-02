// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
class USBZAISquad;
class UObject;
class USBZAISquadManager;
enum class EPD3HeistState : uint8;
#ifdef STARBREEZE_SBZAISquadManager_generated_h
#error "SBZAISquadManager.generated.h already included, missing '#pragma once' in SBZAISquadManager.h"
#endif
#define STARBREEZE_SBZAISquadManager_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZAISquadManager_h_16_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZAISquadManager_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddSquad); \
	DECLARE_FUNCTION(execGet); \
	DECLARE_FUNCTION(execOnHeistStateChanged);


#define PAYDAY3_Source_Starbreeze_Public_SBZAISquadManager_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddSquad); \
	DECLARE_FUNCTION(execGet); \
	DECLARE_FUNCTION(execOnHeistStateChanged);


#define PAYDAY3_Source_Starbreeze_Public_SBZAISquadManager_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZAISquadManager(); \
	friend struct Z_Construct_UClass_USBZAISquadManager_Statics; \
public: \
	DECLARE_CLASS(USBZAISquadManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZAISquadManager) \
	DECLARE_WITHIN(APD3HeistGameMode)


#define PAYDAY3_Source_Starbreeze_Public_SBZAISquadManager_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUSBZAISquadManager(); \
	friend struct Z_Construct_UClass_USBZAISquadManager_Statics; \
public: \
	DECLARE_CLASS(USBZAISquadManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZAISquadManager) \
	DECLARE_WITHIN(APD3HeistGameMode)


#define PAYDAY3_Source_Starbreeze_Public_SBZAISquadManager_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZAISquadManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZAISquadManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZAISquadManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZAISquadManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZAISquadManager(USBZAISquadManager&&); \
	NO_API USBZAISquadManager(const USBZAISquadManager&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZAISquadManager_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZAISquadManager(USBZAISquadManager&&); \
	NO_API USBZAISquadManager(const USBZAISquadManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZAISquadManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZAISquadManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZAISquadManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZAISquadManager_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SpawnOrders() { return STRUCT_OFFSET(USBZAISquadManager, SpawnOrders); } \
	FORCEINLINE static uint32 __PPO__RuntimeOrders() { return STRUCT_OFFSET(USBZAISquadManager, RuntimeOrders); } \
	FORCEINLINE static uint32 __PPO__MemberTypeBlacklist() { return STRUCT_OFFSET(USBZAISquadManager, MemberTypeBlacklist); } \
	FORCEINLINE static uint32 __PPO__Squads() { return STRUCT_OFFSET(USBZAISquadManager, Squads); }


#define PAYDAY3_Source_Starbreeze_Public_SBZAISquadManager_h_14_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZAISquadManager_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAISquadManager_h_16_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAISquadManager_h_16_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAISquadManager_h_16_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAISquadManager_h_16_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZAISquadManager_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZAISquadManager_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAISquadManager_h_16_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAISquadManager_h_16_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAISquadManager_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAISquadManager_h_16_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAISquadManager_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZAISquadManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZAISquadManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS