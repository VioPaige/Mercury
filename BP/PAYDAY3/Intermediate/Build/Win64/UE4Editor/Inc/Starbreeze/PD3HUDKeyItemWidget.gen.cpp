// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/PD3HUDKeyItemWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePD3HUDKeyItemWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3HUDKeyItemWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3HUDKeyItemWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerStateWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZKeyItemData_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
// End Cross Module References
	static FName NAME_UPD3HUDKeyItemWidget_OnKeyItemCountChanged = FName(TEXT("OnKeyItemCountChanged"));
	void UPD3HUDKeyItemWidget::OnKeyItemCountChanged(int32 InKeyItemCount)
	{
		PD3HUDKeyItemWidget_eventOnKeyItemCountChanged_Parms Parms;
		Parms.InKeyItemCount=InKeyItemCount;
		ProcessEvent(FindFunctionChecked(NAME_UPD3HUDKeyItemWidget_OnKeyItemCountChanged),&Parms);
	}
	static FName NAME_UPD3HUDKeyItemWidget_OnKeyItemDataCleared = FName(TEXT("OnKeyItemDataCleared"));
	void UPD3HUDKeyItemWidget::OnKeyItemDataCleared()
	{
		ProcessEvent(FindFunctionChecked(NAME_UPD3HUDKeyItemWidget_OnKeyItemDataCleared),NULL);
	}
	static FName NAME_UPD3HUDKeyItemWidget_OnKeyItemPickedUp = FName(TEXT("OnKeyItemPickedUp"));
	void UPD3HUDKeyItemWidget::OnKeyItemPickedUp(USBZKeyItemData* InKeyItemData, int32 InitialCount)
	{
		PD3HUDKeyItemWidget_eventOnKeyItemPickedUp_Parms Parms;
		Parms.InKeyItemData=InKeyItemData;
		Parms.InitialCount=InitialCount;
		ProcessEvent(FindFunctionChecked(NAME_UPD3HUDKeyItemWidget_OnKeyItemPickedUp),&Parms);
	}
	void UPD3HUDKeyItemWidget::StaticRegisterNativesUPD3HUDKeyItemWidget()
	{
	}
	struct Z_Construct_UFunction_UPD3HUDKeyItemWidget_OnKeyItemCountChanged_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InKeyItemCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPD3HUDKeyItemWidget_OnKeyItemCountChanged_Statics::NewProp_InKeyItemCount = { "InKeyItemCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3HUDKeyItemWidget_eventOnKeyItemCountChanged_Parms, InKeyItemCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPD3HUDKeyItemWidget_OnKeyItemCountChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3HUDKeyItemWidget_OnKeyItemCountChanged_Statics::NewProp_InKeyItemCount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3HUDKeyItemWidget_OnKeyItemCountChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3HUDKeyItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3HUDKeyItemWidget_OnKeyItemCountChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3HUDKeyItemWidget, nullptr, "OnKeyItemCountChanged", nullptr, nullptr, sizeof(PD3HUDKeyItemWidget_eventOnKeyItemCountChanged_Parms), Z_Construct_UFunction_UPD3HUDKeyItemWidget_OnKeyItemCountChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3HUDKeyItemWidget_OnKeyItemCountChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3HUDKeyItemWidget_OnKeyItemCountChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3HUDKeyItemWidget_OnKeyItemCountChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3HUDKeyItemWidget_OnKeyItemCountChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3HUDKeyItemWidget_OnKeyItemCountChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPD3HUDKeyItemWidget_OnKeyItemDataCleared_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3HUDKeyItemWidget_OnKeyItemDataCleared_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3HUDKeyItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3HUDKeyItemWidget_OnKeyItemDataCleared_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3HUDKeyItemWidget, nullptr, "OnKeyItemDataCleared", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3HUDKeyItemWidget_OnKeyItemDataCleared_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3HUDKeyItemWidget_OnKeyItemDataCleared_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3HUDKeyItemWidget_OnKeyItemDataCleared()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3HUDKeyItemWidget_OnKeyItemDataCleared_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPD3HUDKeyItemWidget_OnKeyItemPickedUp_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InKeyItemData;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InitialCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPD3HUDKeyItemWidget_OnKeyItemPickedUp_Statics::NewProp_InKeyItemData = { "InKeyItemData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3HUDKeyItemWidget_eventOnKeyItemPickedUp_Parms, InKeyItemData), Z_Construct_UClass_USBZKeyItemData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPD3HUDKeyItemWidget_OnKeyItemPickedUp_Statics::NewProp_InitialCount = { "InitialCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3HUDKeyItemWidget_eventOnKeyItemPickedUp_Parms, InitialCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPD3HUDKeyItemWidget_OnKeyItemPickedUp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3HUDKeyItemWidget_OnKeyItemPickedUp_Statics::NewProp_InKeyItemData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3HUDKeyItemWidget_OnKeyItemPickedUp_Statics::NewProp_InitialCount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3HUDKeyItemWidget_OnKeyItemPickedUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3HUDKeyItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3HUDKeyItemWidget_OnKeyItemPickedUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3HUDKeyItemWidget, nullptr, "OnKeyItemPickedUp", nullptr, nullptr, sizeof(PD3HUDKeyItemWidget_eventOnKeyItemPickedUp_Parms), Z_Construct_UFunction_UPD3HUDKeyItemWidget_OnKeyItemPickedUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3HUDKeyItemWidget_OnKeyItemPickedUp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3HUDKeyItemWidget_OnKeyItemPickedUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3HUDKeyItemWidget_OnKeyItemPickedUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3HUDKeyItemWidget_OnKeyItemPickedUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3HUDKeyItemWidget_OnKeyItemPickedUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPD3HUDKeyItemWidget_NoRegister()
	{
		return UPD3HUDKeyItemWidget::StaticClass();
	}
	struct Z_Construct_UClass_UPD3HUDKeyItemWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyItemData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KeyItemData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Image_KeyItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Image_KeyItem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyItemCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_KeyItemCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPD3HUDKeyItemWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZPlayerStateWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPD3HUDKeyItemWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPD3HUDKeyItemWidget_OnKeyItemCountChanged, "OnKeyItemCountChanged" }, // 1189900422
		{ &Z_Construct_UFunction_UPD3HUDKeyItemWidget_OnKeyItemDataCleared, "OnKeyItemDataCleared" }, // 1297378078
		{ &Z_Construct_UFunction_UPD3HUDKeyItemWidget_OnKeyItemPickedUp, "OnKeyItemPickedUp" }, // 1425878777
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3HUDKeyItemWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PD3HUDKeyItemWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PD3HUDKeyItemWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3HUDKeyItemWidget_Statics::NewProp_KeyItemData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HUDKeyItemWidget" },
		{ "ModuleRelativePath", "Public/PD3HUDKeyItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPD3HUDKeyItemWidget_Statics::NewProp_KeyItemData = { "KeyItemData", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3HUDKeyItemWidget, KeyItemData), Z_Construct_UClass_USBZKeyItemData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPD3HUDKeyItemWidget_Statics::NewProp_KeyItemData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3HUDKeyItemWidget_Statics::NewProp_KeyItemData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3HUDKeyItemWidget_Statics::NewProp_Image_KeyItem_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HUDKeyItemWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PD3HUDKeyItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPD3HUDKeyItemWidget_Statics::NewProp_Image_KeyItem = { "Image_KeyItem", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3HUDKeyItemWidget, Image_KeyItem), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPD3HUDKeyItemWidget_Statics::NewProp_Image_KeyItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3HUDKeyItemWidget_Statics::NewProp_Image_KeyItem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3HUDKeyItemWidget_Statics::NewProp_KeyItemCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HUDKeyItemWidget" },
		{ "ModuleRelativePath", "Public/PD3HUDKeyItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPD3HUDKeyItemWidget_Statics::NewProp_KeyItemCount = { "KeyItemCount", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3HUDKeyItemWidget, KeyItemCount), METADATA_PARAMS(Z_Construct_UClass_UPD3HUDKeyItemWidget_Statics::NewProp_KeyItemCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3HUDKeyItemWidget_Statics::NewProp_KeyItemCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPD3HUDKeyItemWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3HUDKeyItemWidget_Statics::NewProp_KeyItemData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3HUDKeyItemWidget_Statics::NewProp_Image_KeyItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3HUDKeyItemWidget_Statics::NewProp_KeyItemCount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPD3HUDKeyItemWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPD3HUDKeyItemWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPD3HUDKeyItemWidget_Statics::ClassParams = {
		&UPD3HUDKeyItemWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPD3HUDKeyItemWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPD3HUDKeyItemWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPD3HUDKeyItemWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3HUDKeyItemWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPD3HUDKeyItemWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPD3HUDKeyItemWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPD3HUDKeyItemWidget, 146892092);
	template<> STARBREEZE_API UClass* StaticClass<UPD3HUDKeyItemWidget>()
	{
		return UPD3HUDKeyItemWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPD3HUDKeyItemWidget(Z_Construct_UClass_UPD3HUDKeyItemWidget, &UPD3HUDKeyItemWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("UPD3HUDKeyItemWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPD3HUDKeyItemWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif