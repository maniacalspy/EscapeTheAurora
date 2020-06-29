// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Test2/IA_MedBayMonster.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIA_MedBayMonster() {}
// Cross Module References
	TEST2_API UClass* Z_Construct_UClass_AIA_MedBayMonster_NoRegister();
	TEST2_API UClass* Z_Construct_UClass_AIA_MedBayMonster();
	TEST2_API UClass* Z_Construct_UClass_AInteractableActor();
	UPackage* Z_Construct_UPackage__Script_Test2();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
// End Cross Module References
	void AIA_MedBayMonster::StaticRegisterNativesAIA_MedBayMonster()
	{
	}
	UClass* Z_Construct_UClass_AIA_MedBayMonster_NoRegister()
	{
		return AIA_MedBayMonster::StaticClass();
	}
	struct Z_Construct_UClass_AIA_MedBayMonster_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InteractSound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AIA_MedBayMonster_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInteractableActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Test2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIA_MedBayMonster_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "IA_MedBayMonster.h" },
		{ "ModuleRelativePath", "IA_MedBayMonster.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIA_MedBayMonster_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "IA_MedBayMonster.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIA_MedBayMonster_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIA_MedBayMonster, MeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AIA_MedBayMonster_Statics::NewProp_MeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AIA_MedBayMonster_Statics::NewProp_MeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIA_MedBayMonster_Statics::NewProp_InteractSound_MetaData[] = {
		{ "Category", "Audio" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "IA_MedBayMonster.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIA_MedBayMonster_Statics::NewProp_InteractSound = { "InteractSound", nullptr, (EPropertyFlags)0x00100000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIA_MedBayMonster, InteractSound), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AIA_MedBayMonster_Statics::NewProp_InteractSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AIA_MedBayMonster_Statics::NewProp_InteractSound_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AIA_MedBayMonster_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIA_MedBayMonster_Statics::NewProp_MeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIA_MedBayMonster_Statics::NewProp_InteractSound,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AIA_MedBayMonster_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIA_MedBayMonster>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AIA_MedBayMonster_Statics::ClassParams = {
		&AIA_MedBayMonster::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AIA_MedBayMonster_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AIA_MedBayMonster_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AIA_MedBayMonster_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AIA_MedBayMonster_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AIA_MedBayMonster()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AIA_MedBayMonster_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AIA_MedBayMonster, 1491342682);
	template<> TEST2_API UClass* StaticClass<AIA_MedBayMonster>()
	{
		return AIA_MedBayMonster::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AIA_MedBayMonster(Z_Construct_UClass_AIA_MedBayMonster, &AIA_MedBayMonster::StaticClass, TEXT("/Script/Test2"), TEXT("AIA_MedBayMonster"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AIA_MedBayMonster);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
