// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "EndLevelTriggers.h"
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
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AEndLevelTriggers_DebugPing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "EndLevelTriggers.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AEndLevelTriggers, "DebugPing", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AEndLevelTriggers_PlayNextSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "EndLevelTriggers.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AEndLevelTriggers, "PlayNextSound", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AEndLevelTriggers_NoRegister()
	{
		return AEndLevelTriggers::StaticClass();
	}
	UClass* Z_Construct_UClass_AEndLevelTriggers()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_Test2,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AEndLevelTriggers_DebugPing, "DebugPing" }, // 2423120811
				{ &Z_Construct_UFunction_AEndLevelTriggers_PlayNextSound, "PlayNextSound" }, // 253390711
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "EndLevelTriggers.h" },
				{ "ModuleRelativePath", "EndLevelTriggers.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AEndLevelTriggers>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AEndLevelTriggers::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEndLevelTriggers, 1364173908);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEndLevelTriggers(Z_Construct_UClass_AEndLevelTriggers, &AEndLevelTriggers::StaticClass, TEXT("/Script/Test2"), TEXT("AEndLevelTriggers"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEndLevelTriggers);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
