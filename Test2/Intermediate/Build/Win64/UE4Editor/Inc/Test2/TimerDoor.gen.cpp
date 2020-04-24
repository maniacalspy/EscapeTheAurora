// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Test2/TimerDoor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTimerDoor() {}
// Cross Module References
	TEST2_API UClass* Z_Construct_UClass_ATimerDoor_NoRegister();
	TEST2_API UClass* Z_Construct_UClass_ATimerDoor();
	TEST2_API UClass* Z_Construct_UClass_ADoorBase();
	UPackage* Z_Construct_UPackage__Script_Test2();
// End Cross Module References
	void ATimerDoor::StaticRegisterNativesATimerDoor()
	{
	}
	UClass* Z_Construct_UClass_ATimerDoor_NoRegister()
	{
		return ATimerDoor::StaticClass();
	}
	struct Z_Construct_UClass_ATimerDoor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTimerIsRunning_MetaData[];
#endif
		static void NewProp_bTimerIsRunning_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTimerIsRunning;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpenDelayTimeSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OpenDelayTimeSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATimerDoor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADoorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Test2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimerDoor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "TimerDoor.h" },
		{ "ModuleRelativePath", "TimerDoor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimerDoor_Statics::NewProp_bTimerIsRunning_MetaData[] = {
		{ "Category", "Door" },
		{ "ModuleRelativePath", "TimerDoor.h" },
	};
#endif
	void Z_Construct_UClass_ATimerDoor_Statics::NewProp_bTimerIsRunning_SetBit(void* Obj)
	{
		((ATimerDoor*)Obj)->bTimerIsRunning = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATimerDoor_Statics::NewProp_bTimerIsRunning = { "bTimerIsRunning", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ATimerDoor), &Z_Construct_UClass_ATimerDoor_Statics::NewProp_bTimerIsRunning_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATimerDoor_Statics::NewProp_bTimerIsRunning_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATimerDoor_Statics::NewProp_bTimerIsRunning_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimerDoor_Statics::NewProp_OpenDelayTimeSeconds_MetaData[] = {
		{ "Category", "Door" },
		{ "ModuleRelativePath", "TimerDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATimerDoor_Statics::NewProp_OpenDelayTimeSeconds = { "OpenDelayTimeSeconds", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATimerDoor, OpenDelayTimeSeconds), METADATA_PARAMS(Z_Construct_UClass_ATimerDoor_Statics::NewProp_OpenDelayTimeSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATimerDoor_Statics::NewProp_OpenDelayTimeSeconds_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATimerDoor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimerDoor_Statics::NewProp_bTimerIsRunning,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimerDoor_Statics::NewProp_OpenDelayTimeSeconds,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATimerDoor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATimerDoor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATimerDoor_Statics::ClassParams = {
		&ATimerDoor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATimerDoor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATimerDoor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATimerDoor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATimerDoor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATimerDoor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATimerDoor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATimerDoor, 2198196411);
	template<> TEST2_API UClass* StaticClass<ATimerDoor>()
	{
		return ATimerDoor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATimerDoor(Z_Construct_UClass_ATimerDoor, &ATimerDoor::StaticClass, TEXT("/Script/Test2"), TEXT("ATimerDoor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATimerDoor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
