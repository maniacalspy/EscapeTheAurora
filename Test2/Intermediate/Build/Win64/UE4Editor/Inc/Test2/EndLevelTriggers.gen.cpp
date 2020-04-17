// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Test2/EndLevelTriggers.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEndLevelTriggers() {}
// Cross Module References
	TEST2_API UClass* Z_Construct_UClass_AEndLevelTriggers_NoRegister();
	TEST2_API UClass* Z_Construct_UClass_AEndLevelTriggers();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Test2();
	TEST2_API UFunction* Z_Construct_UFunction_AEndLevelTriggers_DebugPing();
	TEST2_API UFunction* Z_Construct_UFunction_AEndLevelTriggers_PlayNextSound();
// End Cross Module References
	void AEndLevelTriggers::StaticRegisterNativesAEndLevelTriggers()
	{
		UClass* Class = AEndLevelTriggers::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DebugPing", &AEndLevelTriggers::execDebugPing },
			{ "PlayNextSound", &AEndLevelTriggers::execPlayNextSound },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AEndLevelTriggers_DebugPing_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEndLevelTriggers_DebugPing_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EndLevelTriggers.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEndLevelTriggers_DebugPing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEndLevelTriggers, nullptr, "DebugPing", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEndLevelTriggers_DebugPing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEndLevelTriggers_DebugPing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEndLevelTriggers_DebugPing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEndLevelTriggers_DebugPing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEndLevelTriggers_PlayNextSound_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEndLevelTriggers_PlayNextSound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EndLevelTriggers.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEndLevelTriggers_PlayNextSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEndLevelTriggers, nullptr, "PlayNextSound", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEndLevelTriggers_PlayNextSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEndLevelTriggers_PlayNextSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEndLevelTriggers_PlayNextSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEndLevelTriggers_PlayNextSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AEndLevelTriggers_NoRegister()
	{
		return AEndLevelTriggers::StaticClass();
	}
	struct Z_Construct_UClass_AEndLevelTriggers_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEndLevelTriggers_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Test2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AEndLevelTriggers_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AEndLevelTriggers_DebugPing, "DebugPing" }, // 385765069
		{ &Z_Construct_UFunction_AEndLevelTriggers_PlayNextSound, "PlayNextSound" }, // 3515180282
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEndLevelTriggers_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EndLevelTriggers.h" },
		{ "ModuleRelativePath", "EndLevelTriggers.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEndLevelTriggers_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEndLevelTriggers>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEndLevelTriggers_Statics::ClassParams = {
		&AEndLevelTriggers::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEndLevelTriggers_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEndLevelTriggers_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEndLevelTriggers()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEndLevelTriggers_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEndLevelTriggers, 3689691084);
	template<> TEST2_API UClass* StaticClass<AEndLevelTriggers>()
	{
		return AEndLevelTriggers::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEndLevelTriggers(Z_Construct_UClass_AEndLevelTriggers, &AEndLevelTriggers::StaticClass, TEXT("/Script/Test2"), TEXT("AEndLevelTriggers"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEndLevelTriggers);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
