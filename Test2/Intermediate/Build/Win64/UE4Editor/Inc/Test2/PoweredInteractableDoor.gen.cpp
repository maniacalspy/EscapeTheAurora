// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Test2/PoweredInteractableDoor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePoweredInteractableDoor() {}
// Cross Module References
	TEST2_API UClass* Z_Construct_UClass_APoweredInteractableDoor_NoRegister();
	TEST2_API UClass* Z_Construct_UClass_APoweredInteractableDoor();
	TEST2_API UClass* Z_Construct_UClass_APoweredDoor();
	UPackage* Z_Construct_UPackage__Script_Test2();
	TEST2_API UClass* Z_Construct_UClass_UInteractable_NoRegister();
// End Cross Module References
	void APoweredInteractableDoor::StaticRegisterNativesAPoweredInteractableDoor()
	{
	}
	UClass* Z_Construct_UClass_APoweredInteractableDoor_NoRegister()
	{
		return APoweredInteractableDoor::StaticClass();
	}
	struct Z_Construct_UClass_APoweredInteractableDoor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APoweredInteractableDoor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APoweredDoor,
		(UObject* (*)())Z_Construct_UPackage__Script_Test2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APoweredInteractableDoor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PoweredInteractableDoor.h" },
		{ "ModuleRelativePath", "PoweredInteractableDoor.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_APoweredInteractableDoor_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInteractable_NoRegister, (int32)VTABLE_OFFSET(APoweredInteractableDoor, IInteractable), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APoweredInteractableDoor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APoweredInteractableDoor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APoweredInteractableDoor_Statics::ClassParams = {
		&APoweredInteractableDoor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APoweredInteractableDoor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APoweredInteractableDoor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APoweredInteractableDoor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APoweredInteractableDoor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APoweredInteractableDoor, 743752273);
	template<> TEST2_API UClass* StaticClass<APoweredInteractableDoor>()
	{
		return APoweredInteractableDoor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APoweredInteractableDoor(Z_Construct_UClass_APoweredInteractableDoor, &APoweredInteractableDoor::StaticClass, TEXT("/Script/Test2"), TEXT("APoweredInteractableDoor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APoweredInteractableDoor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
