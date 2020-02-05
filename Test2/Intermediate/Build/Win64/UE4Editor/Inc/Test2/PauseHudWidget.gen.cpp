// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Test2/PauseHudWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePauseHudWidget() {}
// Cross Module References
	TEST2_API UClass* Z_Construct_UClass_UPauseHudWidget_NoRegister();
	TEST2_API UClass* Z_Construct_UClass_UPauseHudWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Test2();
// End Cross Module References
	void UPauseHudWidget::StaticRegisterNativesUPauseHudWidget()
	{
	}
	UClass* Z_Construct_UClass_UPauseHudWidget_NoRegister()
	{
		return UPauseHudWidget::StaticClass();
	}
	struct Z_Construct_UClass_UPauseHudWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPauseHudWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Test2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPauseHudWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PauseHudWidget.h" },
		{ "ModuleRelativePath", "PauseHudWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPauseHudWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPauseHudWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPauseHudWidget_Statics::ClassParams = {
		&UPauseHudWidget::StaticClass,
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
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPauseHudWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPauseHudWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPauseHudWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPauseHudWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPauseHudWidget, 3535564212);
	template<> TEST2_API UClass* StaticClass<UPauseHudWidget>()
	{
		return UPauseHudWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPauseHudWidget(Z_Construct_UClass_UPauseHudWidget, &UPauseHudWidget::StaticClass, TEXT("/Script/Test2"), TEXT("UPauseHudWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPauseHudWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
