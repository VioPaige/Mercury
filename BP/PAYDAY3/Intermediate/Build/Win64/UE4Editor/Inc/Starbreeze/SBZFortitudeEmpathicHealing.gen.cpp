// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZFortitudeEmpathicHealing.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZFortitudeEmpathicHealing() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZFortitudeEmpathicHealing_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZFortitudeEmpathicHealing();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZFortitudeEmpathicHealing::StaticRegisterNativesUSBZFortitudeEmpathicHealing()
	{
	}
	UClass* Z_Construct_UClass_USBZFortitudeEmpathicHealing_NoRegister()
	{
		return USBZFortitudeEmpathicHealing::StaticClass();
	}
	struct Z_Construct_UClass_USBZFortitudeEmpathicHealing_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZFortitudeEmpathicHealing_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZSkillData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZFortitudeEmpathicHealing_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZFortitudeEmpathicHealing.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZFortitudeEmpathicHealing.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZFortitudeEmpathicHealing_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZFortitudeEmpathicHealing>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZFortitudeEmpathicHealing_Statics::ClassParams = {
		&USBZFortitudeEmpathicHealing::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZFortitudeEmpathicHealing_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZFortitudeEmpathicHealing_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZFortitudeEmpathicHealing()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZFortitudeEmpathicHealing_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZFortitudeEmpathicHealing, 80526249);
	template<> STARBREEZE_API UClass* StaticClass<USBZFortitudeEmpathicHealing>()
	{
		return USBZFortitudeEmpathicHealing::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZFortitudeEmpathicHealing(Z_Construct_UClass_USBZFortitudeEmpathicHealing, &USBZFortitudeEmpathicHealing::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZFortitudeEmpathicHealing"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZFortitudeEmpathicHealing);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif