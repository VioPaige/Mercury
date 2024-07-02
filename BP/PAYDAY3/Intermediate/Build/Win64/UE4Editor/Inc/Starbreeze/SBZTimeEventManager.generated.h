// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class USBZTimeEventManager;
struct FDateTime;
#ifdef STARBREEZE_SBZTimeEventManager_generated_h
#error "SBZTimeEventManager.generated.h already included, missing '#pragma once' in SBZTimeEventManager.h"
#endif
#define STARBREEZE_SBZTimeEventManager_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZTimeEventManager_h_11_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZTimeEventManager_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGet); \
	DECLARE_FUNCTION(execGetLastKnownServerTime); \
	DECLARE_FUNCTION(execGetNextResetTime); \
	DECLARE_FUNCTION(execRequestTimeEventCheck);


#define PAYDAY3_Source_Starbreeze_Public_SBZTimeEventManager_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGet); \
	DECLARE_FUNCTION(execGetLastKnownServerTime); \
	DECLARE_FUNCTION(execGetNextResetTime); \
	DECLARE_FUNCTION(execRequestTimeEventCheck);


#define PAYDAY3_Source_Starbreeze_Public_SBZTimeEventManager_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZTimeEventManager(); \
	friend struct Z_Construct_UClass_USBZTimeEventManager_Statics; \
public: \
	DECLARE_CLASS(USBZTimeEventManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZTimeEventManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZTimeEventManager_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUSBZTimeEventManager(); \
	friend struct Z_Construct_UClass_USBZTimeEventManager_Statics; \
public: \
	DECLARE_CLASS(USBZTimeEventManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZTimeEventManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZTimeEventManager_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZTimeEventManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZTimeEventManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZTimeEventManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZTimeEventManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZTimeEventManager(USBZTimeEventManager&&); \
	NO_API USBZTimeEventManager(const USBZTimeEventManager&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZTimeEventManager_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZTimeEventManager(USBZTimeEventManager&&); \
	NO_API USBZTimeEventManager(const USBZTimeEventManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZTimeEventManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZTimeEventManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZTimeEventManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZTimeEventManager_h_11_PRIVATE_PROPERTY_OFFSET
#define PAYDAY3_Source_Starbreeze_Public_SBZTimeEventManager_h_9_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZTimeEventManager_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZTimeEventManager_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZTimeEventManager_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZTimeEventManager_h_11_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZTimeEventManager_h_11_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZTimeEventManager_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZTimeEventManager_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZTimeEventManager_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZTimeEventManager_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZTimeEventManager_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZTimeEventManager_h_11_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZTimeEventManager_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZTimeEventManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZTimeEventManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS