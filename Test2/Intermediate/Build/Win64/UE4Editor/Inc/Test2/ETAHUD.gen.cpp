// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Test2/ETAHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeETAHUD() {}
// Cross Module References
	TEST2_API UClass* Z_Construct_UClass_UETAHUD_NoRegister();
	TEST2_API UClass* Z_Construct_UClass_UETAHUD();
	TEST2_API UClass* Z_Construct_UClass_UHUDWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Test2();
	TEST2_API UFunction* Z_Construct_UFunction_UETAHUD_PlayDownload();
	UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
// End Cross Module References
	void UETAHUD::StaticRegisterNativesUETAHUD()
	{
		UClass* Class = UETAHUD::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PlayDownload", &UETAHUD::execPlayDownload },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UETAHUD_PlayDownload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UETAHUD_PlayDownload_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ETAHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UETAHUD_PlayDownload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UETAHUD, nullptr, "PlayDownload", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UETAHUD_PlayDownload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UETAHUD_PlayDownload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UETAHUD_PlayDownload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UETAHUD_PlayDownload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UETAHUD_NoRegister()
	{
		return UETAHUD::StaticClass();
	}
	struct Z_Construct_UClass_UETAHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AudioAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MapAnimation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UETAHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHUDWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Test2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UETAHUD_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UETAHUD_PlayDownload, "PlayDownload" }, // 4057765625
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UETAHUD_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ETAHUD.h" },
		{ "ModuleRelativePath", "ETAHUD.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UETAHUD_Statics::NewProp_AudioAnimation_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "ETAHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UETAHUD_Statics::NewProp_AudioAnimation = { "AudioAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UETAHUD, AudioAnimation), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UETAHUD_Statics::NewProp_AudioAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UETAHUD_Statics::NewProp_AudioAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UETAHUD_Statics::NewProp_MapAnimation_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "ETAHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UETAHUD_Statics::NewProp_MapAnimation = { "MapAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UETAHUD, MapAnimation), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UETAHUD_Statics::NewProp_MapAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UETAHUD_Statics::NewProp_MapAnimation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UETAHUD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UETAHUD_Statics::NewProp_AudioAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UETAHUD_Statics::NewProp_MapAnimation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UETAHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UETAHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UETAHUD_Statics::ClassParams = {
		&UETAHUD::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UETAHUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UETAHUD_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UETAHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UETAHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UETAHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UETAHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UETAHUD, 3217085191);
	template<> TEST2_API UClass* StaticClass<UETAHUD>()
	{
		return UETAHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UETAHUD(Z_Construct_UClass_UETAHUD, &UETAHUD::StaticClass, TEXT("/Script/Test2"), TEXT("UETAHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UETAHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
