// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSkillInfiltratorBagger.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSkillInfiltratorBagger() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillInfiltratorBagger_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillInfiltratorBagger();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZSkillInfiltratorBagger::StaticRegisterNativesUSBZSkillInfiltratorBagger()
	{
	}
	UClass* Z_Construct_UClass_USBZSkillInfiltratorBagger_NoRegister()
	{
		return USBZSkillInfiltratorBagger::StaticClass();
	}
	struct Z_Construct_UClass_USBZSkillInfiltratorBagger_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSkillInfiltratorBagger_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZSkillData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSkillInfiltratorBagger_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSkillInfiltratorBagger.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSkillInfiltratorBagger.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSkillInfiltratorBagger_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSkillInfiltratorBagger>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSkillInfiltratorBagger_Statics::ClassParams = {
		&USBZSkillInfiltratorBagger::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZSkillInfiltratorBagger_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillInfiltratorBagger_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSkillInfiltratorBagger()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSkillInfiltratorBagger_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSkillInfiltratorBagger, 3791086413);
	template<> STARBREEZE_API UClass* StaticClass<USBZSkillInfiltratorBagger>()
	{
		return USBZSkillInfiltratorBagger::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSkillInfiltratorBagger(Z_Construct_UClass_USBZSkillInfiltratorBagger, &USBZSkillInfiltratorBagger::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSkillInfiltratorBagger"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSkillInfiltratorBagger);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif