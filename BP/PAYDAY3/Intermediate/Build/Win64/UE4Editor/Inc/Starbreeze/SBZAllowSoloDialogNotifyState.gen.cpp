// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAllowSoloDialogNotifyState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAllowSoloDialogNotifyState() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAllowSoloDialogNotifyState_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAllowSoloDialogNotifyState();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZAllowSoloDialogNotifyState::StaticRegisterNativesUSBZAllowSoloDialogNotifyState()
	{
	}
	UClass* Z_Construct_UClass_USBZAllowSoloDialogNotifyState_NoRegister()
	{
		return USBZAllowSoloDialogNotifyState::StaticClass();
	}
	struct Z_Construct_UClass_USBZAllowSoloDialogNotifyState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAllowSoloDialogNotifyState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAllowSoloDialogNotifyState_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SBZAllowSoloDialogNotifyState.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAllowSoloDialogNotifyState.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAllowSoloDialogNotifyState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAllowSoloDialogNotifyState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAllowSoloDialogNotifyState_Statics::ClassParams = {
		&USBZAllowSoloDialogNotifyState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001130A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAllowSoloDialogNotifyState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAllowSoloDialogNotifyState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAllowSoloDialogNotifyState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAllowSoloDialogNotifyState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAllowSoloDialogNotifyState, 594779773);
	template<> STARBREEZE_API UClass* StaticClass<USBZAllowSoloDialogNotifyState>()
	{
		return USBZAllowSoloDialogNotifyState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAllowSoloDialogNotifyState(Z_Construct_UClass_USBZAllowSoloDialogNotifyState, &USBZAllowSoloDialogNotifyState::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAllowSoloDialogNotifyState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAllowSoloDialogNotifyState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif