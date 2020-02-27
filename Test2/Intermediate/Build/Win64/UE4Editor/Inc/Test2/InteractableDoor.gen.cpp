// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Test2/InteractableDoor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractableDoor() {}
// Cross Module References
	TEST2_API UClass* Z_Construct_UClass_AInteractableDoor_NoRegister();
	TEST2_API UClass* Z_Construct_UClass_AInteractableDoor();
	TEST2_API UClass* Z_Construct_UClass_ADoorBase();
	UPackage* Z_Construct_UPackage__Script_Test2();
	TEST2_API UClass* Z_Construct_UClass_UInteractable_NoRegister();
// End Cross Module References
	void AInteractableDoor::StaticRegisterNativesAInteractableDoor()
	{
	}
	UClass* Z_Construct_UClass_AInteractableDoor_NoRegister()
	{
		return AInteractableDoor::StaticClass();
	}
	struct Z_Construct_UClass_AInteractableDoor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInteractableDoor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADoorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Test2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractableDoor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InteractableDoor.h" },
		{ "ModuleRelativePath", "InteractableDoor.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AInteractableDoor_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInteractable_NoRegister, (int32)VTABLE_OFFSET(AInteractableDoor, IInteractable), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInteractableDoor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInteractableDoor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AInteractableDoor_Statics::ClassParams = {
		&AInteractableDoor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AInteractableDoor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableDoor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInteractableDoor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AInteractableDoor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AInteractableDoor, 1442617676);
	template<> TEST2_API UClass* StaticClass<AInteractableDoor>()
	{
		return AInteractableDoor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AInteractableDoor(Z_Construct_UClass_AInteractableDoor, &AInteractableDoor::StaticClass, TEXT("/Script/Test2"), TEXT("AInteractableDoor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInteractableDoor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
