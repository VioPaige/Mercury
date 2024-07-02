// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESBZServiceStatus : uint8;
#ifdef STARBREEZE_SBZInternetStatusWidget_generated_h
#error "SBZInternetStatusWidget.generated.h already included, missing '#pragma once' in SBZInternetStatusWidget.h"
#endif
#define STARBREEZE_SBZInternetStatusWidget_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZInternetStatusWidget_h_11_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZInternetStatusWidget_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetNetworkLostConnectionVisibility);


#define PAYDAY3_Source_Starbreeze_Public_SBZInternetStatusWidget_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetNetworkLostConnectionVisibility);


#define PAYDAY3_Source_Starbreeze_Public_SBZInternetStatusWidget_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZInternetStatusWidget(); \
	friend struct Z_Construct_UClass_USBZInternetStatusWidget_Statics; \
public: \
	DECLARE_CLASS(USBZInternetStatusWidget, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZInternetStatusWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZInternetStatusWidget_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUSBZInternetStatusWidget(); \
	friend struct Z_Construct_UClass_USBZInternetStatusWidget_Statics; \
public: \
	DECLARE_CLASS(USBZInternetStatusWidget, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZInternetStatusWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZInternetStatusWidget_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZInternetStatusWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZInternetStatusWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZInternetStatusWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZInternetStatusWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZInternetStatusWidget(USBZInternetStatusWidget&&); \
	NO_API USBZInternetStatusWidget(const USBZInternetStatusWidget&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZInternetStatusWidget_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZInternetStatusWidget(USBZInternetStatusWidget&&); \
	NO_API USBZInternetStatusWidget(const USBZInternetStatusWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZInternetStatusWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZInternetStatusWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZInternetStatusWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZInternetStatusWidget_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__NetworkErrorImage() { return STRUCT_OFFSET(USBZInternetStatusWidget, NetworkErrorImage); }


#define PAYDAY3_Source_Starbreeze_Public_SBZInternetStatusWidget_h_9_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZInternetStatusWidget_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZInternetStatusWidget_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZInternetStatusWidget_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZInternetStatusWidget_h_11_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZInternetStatusWidget_h_11_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZInternetStatusWidget_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZInternetStatusWidget_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZInternetStatusWidget_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZInternetStatusWidget_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZInternetStatusWidget_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZInternetStatusWidget_h_11_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZInternetStatusWidget_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZInternetStatusWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZInternetStatusWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS