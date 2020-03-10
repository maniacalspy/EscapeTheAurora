// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Test2/EditableTextWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditableTextWidget() {}
// Cross Module References
	TEST2_API UClass* Z_Construct_UClass_UEditableTextWidget_NoRegister();
	TEST2_API UClass* Z_Construct_UClass_UEditableTextWidget();
	TEST2_API UClass* Z_Construct_UClass_UHUDWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Test2();
// End Cross Module References
	void UEditableTextWidget::StaticRegisterNativesUEditableTextWidget()
	{
	}
	UClass* Z_Construct_UClass_UEditableTextWidget_NoRegister()
	{
		return UEditableTextWidget::StaticClass();
	}
	struct Z_Construct_UClass_UEditableTextWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PromptTextString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PromptTextString;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditableTextWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHUDWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Test2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditableTextWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EditableTextWidget.h" },
		{ "ModuleRelativePath", "EditableTextWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditableTextWidget_Statics::NewProp_PromptTextString_MetaData[] = {
		{ "Category", "Text" },
		{ "ModuleRelativePath", "EditableTextWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEditableTextWidget_Statics::NewProp_PromptTextString = { "PromptTextString", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditableTextWidget, PromptTextString), METADATA_PARAMS(Z_Construct_UClass_UEditableTextWidget_Statics::NewProp_PromptTextString_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditableTextWidget_Statics::NewProp_PromptTextString_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditableTextWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableTextWidget_Statics::NewProp_PromptTextString,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditableTextWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditableTextWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEditableTextWidget_Statics::ClassParams = {
		&UEditableTextWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEditableTextWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEditableTextWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEditableTextWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditableTextWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditableTextWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEditableTextWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEditableTextWidget, 4193885728);
	template<> TEST2_API UClass* StaticClass<UEditableTextWidget>()
	{
		return UEditableTextWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEditableTextWidget(Z_Construct_UClass_UEditableTextWidget, &UEditableTextWidget::StaticClass, TEXT("/Script/Test2"), TEXT("UEditableTextWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditableTextWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
