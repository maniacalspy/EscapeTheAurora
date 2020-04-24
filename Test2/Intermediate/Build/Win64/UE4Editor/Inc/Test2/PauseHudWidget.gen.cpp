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
	TEST2_API UClass* Z_Construct_UClass_UHUDWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Test2();
	TEST2_API UFunction* Z_Construct_UFunction_UPauseHudWidget_EnableMap();
	TEST2_API UFunction* Z_Construct_UFunction_UPauseHudWidget_OpenPauseMenu();
	UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
// End Cross Module References
	static FName NAME_UPauseHudWidget_EnableMap = FName(TEXT("EnableMap"));
	void UPauseHudWidget::EnableMap()
	{
		ProcessEvent(FindFunctionChecked(NAME_UPauseHudWidget_EnableMap),NULL);
	}
	static FName NAME_UPauseHudWidget_OpenPauseMenu = FName(TEXT("OpenPauseMenu"));
	void UPauseHudWidget::OpenPauseMenu()
	{
		ProcessEvent(FindFunctionChecked(NAME_UPauseHudWidget_OpenPauseMenu),NULL);
	}
	void UPauseHudWidget::StaticRegisterNativesUPauseHudWidget()
	{
		UClass* Class = UPauseHudWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OpenPauseMenu", &UPauseHudWidget::execOpenPauseMenu },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPauseHudWidget_EnableMap_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPauseHudWidget_EnableMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "Map" },
		{ "Comment", "//UFUNCTION(BlueprintCallable)\n//\x09void CloseMenu();\n" },
		{ "ModuleRelativePath", "PauseHudWidget.h" },
		{ "ToolTip", "UFUNCTION(BlueprintCallable)\n       void CloseMenu();" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPauseHudWidget_EnableMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPauseHudWidget, nullptr, "EnableMap", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPauseHudWidget_EnableMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPauseHudWidget_EnableMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPauseHudWidget_EnableMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPauseHudWidget_EnableMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPauseHudWidget_OpenPauseMenu_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPauseHudWidget_OpenPauseMenu_Statics::Function_MetaDataParams[] = {
		{ "Category", "Map" },
		{ "ModuleRelativePath", "PauseHudWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPauseHudWidget_OpenPauseMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPauseHudWidget, nullptr, "OpenPauseMenu", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPauseHudWidget_OpenPauseMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPauseHudWidget_OpenPauseMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPauseHudWidget_OpenPauseMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPauseHudWidget_OpenPauseMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPauseHudWidget_NoRegister()
	{
		return UPauseHudWidget::StaticClass();
	}
	struct Z_Construct_UClass_UPauseHudWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MenuOpenAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MenuOpenAnimation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPauseHudWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHUDWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Test2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPauseHudWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPauseHudWidget_EnableMap, "EnableMap" }, // 425708375
		{ &Z_Construct_UFunction_UPauseHudWidget_OpenPauseMenu, "OpenPauseMenu" }, // 3585296223
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPauseHudWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PauseHudWidget.h" },
		{ "ModuleRelativePath", "PauseHudWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPauseHudWidget_Statics::NewProp_MenuOpenAnimation_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "PauseHudWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPauseHudWidget_Statics::NewProp_MenuOpenAnimation = { "MenuOpenAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPauseHudWidget, MenuOpenAnimation), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPauseHudWidget_Statics::NewProp_MenuOpenAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPauseHudWidget_Statics::NewProp_MenuOpenAnimation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPauseHudWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPauseHudWidget_Statics::NewProp_MenuOpenAnimation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPauseHudWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPauseHudWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPauseHudWidget_Statics::ClassParams = {
		&UPauseHudWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPauseHudWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPauseHudWidget_Statics::PropPointers),
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
	IMPLEMENT_CLASS(UPauseHudWidget, 1998279371);
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
