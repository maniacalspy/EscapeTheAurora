// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Test2/HUDWidgetBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHUDWidgetBase() {}
// Cross Module References
	TEST2_API UClass* Z_Construct_UClass_UHUDWidgetBase_NoRegister();
	TEST2_API UClass* Z_Construct_UClass_UHUDWidgetBase();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Test2();
	TEST2_API UFunction* Z_Construct_UFunction_UHUDWidgetBase_CloseMenu();
	TEST2_API UFunction* Z_Construct_UFunction_UHUDWidgetBase_OpenMenu();
// End Cross Module References
	void UHUDWidgetBase::StaticRegisterNativesUHUDWidgetBase()
	{
		UClass* Class = UHUDWidgetBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CloseMenu", &UHUDWidgetBase::execCloseMenu },
			{ "OpenMenu", &UHUDWidgetBase::execOpenMenu },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHUDWidgetBase_CloseMenu_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHUDWidgetBase_CloseMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HUDWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHUDWidgetBase_CloseMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHUDWidgetBase, nullptr, "CloseMenu", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHUDWidgetBase_CloseMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHUDWidgetBase_CloseMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHUDWidgetBase_CloseMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHUDWidgetBase_CloseMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHUDWidgetBase_OpenMenu_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHUDWidgetBase_OpenMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HUDWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHUDWidgetBase_OpenMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHUDWidgetBase, nullptr, "OpenMenu", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHUDWidgetBase_OpenMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHUDWidgetBase_OpenMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHUDWidgetBase_OpenMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHUDWidgetBase_OpenMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHUDWidgetBase_NoRegister()
	{
		return UHUDWidgetBase::StaticClass();
	}
	struct Z_Construct_UClass_UHUDWidgetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHUDWidgetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Test2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHUDWidgetBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHUDWidgetBase_CloseMenu, "CloseMenu" }, // 2506568875
		{ &Z_Construct_UFunction_UHUDWidgetBase_OpenMenu, "OpenMenu" }, // 1326024347
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHUDWidgetBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "HUDWidgetBase.h" },
		{ "ModuleRelativePath", "HUDWidgetBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHUDWidgetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHUDWidgetBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHUDWidgetBase_Statics::ClassParams = {
		&UHUDWidgetBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHUDWidgetBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHUDWidgetBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHUDWidgetBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHUDWidgetBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHUDWidgetBase, 2133148070);
	template<> TEST2_API UClass* StaticClass<UHUDWidgetBase>()
	{
		return UHUDWidgetBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHUDWidgetBase(Z_Construct_UClass_UHUDWidgetBase, &UHUDWidgetBase::StaticClass, TEXT("/Script/Test2"), TEXT("UHUDWidgetBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHUDWidgetBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
