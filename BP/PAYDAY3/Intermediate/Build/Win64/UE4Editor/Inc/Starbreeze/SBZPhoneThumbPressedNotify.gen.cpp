// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPhoneThumbPressedNotify.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPhoneThumbPressedNotify() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPhoneThumbPressedNotify_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPhoneThumbPressedNotify();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZPhoneThumbPressedNotify::StaticRegisterNativesUSBZPhoneThumbPressedNotify()
	{
	}
	UClass* Z_Construct_UClass_USBZPhoneThumbPressedNotify_NoRegister()
	{
		return USBZPhoneThumbPressedNotify::StaticClass();
	}
	struct Z_Construct_UClass_USBZPhoneThumbPressedNotify_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZPhoneThumbPressedNotify_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPhoneThumbPressedNotify_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SBZPhoneThumbPressedNotify.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPhoneThumbPressedNotify.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZPhoneThumbPressedNotify_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZPhoneThumbPressedNotify>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZPhoneThumbPressedNotify_Statics::ClassParams = {
		&USBZPhoneThumbPressedNotify::StaticClass,
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
		0x000120A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZPhoneThumbPressedNotify_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPhoneThumbPressedNotify_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZPhoneThumbPressedNotify()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZPhoneThumbPressedNotify_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZPhoneThumbPressedNotify, 986258222);
	template<> STARBREEZE_API UClass* StaticClass<USBZPhoneThumbPressedNotify>()
	{
		return USBZPhoneThumbPressedNotify::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZPhoneThumbPressedNotify(Z_Construct_UClass_USBZPhoneThumbPressedNotify, &USBZPhoneThumbPressedNotify::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZPhoneThumbPressedNotify"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZPhoneThumbPressedNotify);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif