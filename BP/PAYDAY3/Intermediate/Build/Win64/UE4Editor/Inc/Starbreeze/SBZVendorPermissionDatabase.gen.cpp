// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZVendorPermissionDatabase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZVendorPermissionDatabase() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVendorPermissionDatabase_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVendorPermissionDatabase();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZItemDatabase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVendorPermissionData_NoRegister();
// End Cross Module References
	void USBZVendorPermissionDatabase::StaticRegisterNativesUSBZVendorPermissionDatabase()
	{
	}
	UClass* Z_Construct_UClass_USBZVendorPermissionDatabase_NoRegister()
	{
		return USBZVendorPermissionDatabase::StaticClass();
	}
	struct Z_Construct_UClass_USBZVendorPermissionDatabase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VendorPermissionArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VendorPermissionArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VendorPermissionArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZVendorPermissionDatabase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZItemDatabase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVendorPermissionDatabase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZVendorPermissionDatabase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZVendorPermissionDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZVendorPermissionDatabase_Statics::NewProp_VendorPermissionArray_Inner = { "VendorPermissionArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZVendorPermissionData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVendorPermissionDatabase_Statics::NewProp_VendorPermissionArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVendorPermissionDatabase" },
		{ "ModuleRelativePath", "Public/SBZVendorPermissionDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZVendorPermissionDatabase_Statics::NewProp_VendorPermissionArray = { "VendorPermissionArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZVendorPermissionDatabase, VendorPermissionArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZVendorPermissionDatabase_Statics::NewProp_VendorPermissionArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVendorPermissionDatabase_Statics::NewProp_VendorPermissionArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZVendorPermissionDatabase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVendorPermissionDatabase_Statics::NewProp_VendorPermissionArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVendorPermissionDatabase_Statics::NewProp_VendorPermissionArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZVendorPermissionDatabase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZVendorPermissionDatabase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZVendorPermissionDatabase_Statics::ClassParams = {
		&USBZVendorPermissionDatabase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZVendorPermissionDatabase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZVendorPermissionDatabase_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZVendorPermissionDatabase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVendorPermissionDatabase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZVendorPermissionDatabase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZVendorPermissionDatabase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZVendorPermissionDatabase, 3173144392);
	template<> STARBREEZE_API UClass* StaticClass<USBZVendorPermissionDatabase>()
	{
		return USBZVendorPermissionDatabase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZVendorPermissionDatabase(Z_Construct_UClass_USBZVendorPermissionDatabase, &USBZVendorPermissionDatabase::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZVendorPermissionDatabase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZVendorPermissionDatabase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif