// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Test2/KeyCardSpawner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKeyCardSpawner() {}
// Cross Module References
	TEST2_API UClass* Z_Construct_UClass_AKeyCardSpawner_NoRegister();
	TEST2_API UClass* Z_Construct_UClass_AKeyCardSpawner();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Test2();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	TEST2_API UClass* Z_Construct_UClass_UTriggerable_NoRegister();
// End Cross Module References
	void AKeyCardSpawner::StaticRegisterNativesAKeyCardSpawner()
	{
	}
	UClass* Z_Construct_UClass_AKeyCardSpawner_NoRegister()
	{
		return AKeyCardSpawner::StaticClass();
	}
	struct Z_Construct_UClass_AKeyCardSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyCardClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_KeyCardClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AKeyCardSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Test2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKeyCardSpawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "KeyCardSpawner.h" },
		{ "ModuleRelativePath", "KeyCardSpawner.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKeyCardSpawner_Statics::NewProp_KeyCardClass_MetaData[] = {
		{ "Category", "SpawnInfo" },
		{ "ModuleRelativePath", "KeyCardSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AKeyCardSpawner_Statics::NewProp_KeyCardClass = { "KeyCardClass", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKeyCardSpawner, KeyCardClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AKeyCardSpawner_Statics::NewProp_KeyCardClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKeyCardSpawner_Statics::NewProp_KeyCardClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AKeyCardSpawner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKeyCardSpawner_Statics::NewProp_KeyCardClass,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AKeyCardSpawner_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UTriggerable_NoRegister, (int32)VTABLE_OFFSET(AKeyCardSpawner, ITriggerable), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AKeyCardSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKeyCardSpawner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AKeyCardSpawner_Statics::ClassParams = {
		&AKeyCardSpawner::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AKeyCardSpawner_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AKeyCardSpawner_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AKeyCardSpawner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AKeyCardSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AKeyCardSpawner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AKeyCardSpawner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AKeyCardSpawner, 1385671477);
	template<> TEST2_API UClass* StaticClass<AKeyCardSpawner>()
	{
		return AKeyCardSpawner::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AKeyCardSpawner(Z_Construct_UClass_AKeyCardSpawner, &AKeyCardSpawner::StaticClass, TEXT("/Script/Test2"), TEXT("AKeyCardSpawner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AKeyCardSpawner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
