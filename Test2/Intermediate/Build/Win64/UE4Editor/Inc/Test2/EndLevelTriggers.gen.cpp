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
// End Cross Module References
	void AEndLevelTriggers::StaticRegisterNativesAEndLevelTriggers()
	{
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
				nullptr, 0,
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
	IMPLEMENT_CLASS(AEndLevelTriggers, 529107856);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEndLevelTriggers(Z_Construct_UClass_AEndLevelTriggers, &AEndLevelTriggers::StaticClass, TEXT("/Script/Test2"), TEXT("AEndLevelTriggers"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEndLevelTriggers);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
