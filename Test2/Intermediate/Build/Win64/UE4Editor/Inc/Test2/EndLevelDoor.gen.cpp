// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Test2/EndLevelDoor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEndLevelDoor() {}
// Cross Module References
	TEST2_API UClass* Z_Construct_UClass_AEndLevelDoor_NoRegister();
	TEST2_API UClass* Z_Construct_UClass_AEndLevelDoor();
	TEST2_API UClass* Z_Construct_UClass_ADoorBase();
	UPackage* Z_Construct_UPackage__Script_Test2();
// End Cross Module References
	void AEndLevelDoor::StaticRegisterNativesAEndLevelDoor()
	{
	}
	UClass* Z_Construct_UClass_AEndLevelDoor_NoRegister()
	{
		return AEndLevelDoor::StaticClass();
	}
	struct Z_Construct_UClass_AEndLevelDoor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEndLevelDoor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADoorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Test2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEndLevelDoor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EndLevelDoor.h" },
		{ "ModuleRelativePath", "EndLevelDoor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEndLevelDoor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEndLevelDoor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEndLevelDoor_Statics::ClassParams = {
		&AEndLevelDoor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEndLevelDoor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEndLevelDoor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEndLevelDoor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEndLevelDoor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEndLevelDoor, 3533785745);
	template<> TEST2_API UClass* StaticClass<AEndLevelDoor>()
	{
		return AEndLevelDoor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEndLevelDoor(Z_Construct_UClass_AEndLevelDoor, &AEndLevelDoor::StaticClass, TEXT("/Script/Test2"), TEXT("AEndLevelDoor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEndLevelDoor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
