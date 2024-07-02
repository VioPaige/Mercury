// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZSessionSettings_generated_h
#error "SBZSessionSettings.generated.h already included, missing '#pragma once' in SBZSessionSettings.h"
#endif
#define STARBREEZE_SBZSessionSettings_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZSessionSettings_h_11_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZSessionSettings_h_11_RPC_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZSessionSettings_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define PAYDAY3_Source_Starbreeze_Public_SBZSessionSettings_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZSessionSettings(); \
	friend struct Z_Construct_UClass_USBZSessionSettings_Statics; \
public: \
	DECLARE_CLASS(USBZSessionSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZSessionSettings)


#define PAYDAY3_Source_Starbreeze_Public_SBZSessionSettings_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUSBZSessionSettings(); \
	friend struct Z_Construct_UClass_USBZSessionSettings_Statics; \
public: \
	DECLARE_CLASS(USBZSessionSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZSessionSettings)


#define PAYDAY3_Source_Starbreeze_Public_SBZSessionSettings_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZSessionSettings(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZSessionSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZSessionSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZSessionSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZSessionSettings(USBZSessionSettings&&); \
	NO_API USBZSessionSettings(const USBZSessionSettings&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZSessionSettings_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZSessionSettings(USBZSessionSettings&&); \
	NO_API USBZSessionSettings(const USBZSessionSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZSessionSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZSessionSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZSessionSettings)


#define PAYDAY3_Source_Starbreeze_Public_SBZSessionSettings_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SessionSettingsQueue() { return STRUCT_OFFSET(USBZSessionSettings, SessionSettingsQueue); } \
	FORCEINLINE static uint32 __PPO__SessionSettingsManager() { return STRUCT_OFFSET(USBZSessionSettings, SessionSettingsManager); }


#define PAYDAY3_Source_Starbreeze_Public_SBZSessionSettings_h_9_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZSessionSettings_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZSessionSettings_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZSessionSettings_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZSessionSettings_h_11_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZSessionSettings_h_11_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZSessionSettings_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZSessionSettings_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZSessionSettings_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZSessionSettings_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZSessionSettings_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZSessionSettings_h_11_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZSessionSettings_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZSessionSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZSessionSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS