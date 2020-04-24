// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Test2/IA_SuitPod.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIA_SuitPod() {}
// Cross Module References
	TEST2_API UClass* Z_Construct_UClass_AIA_SuitPod_NoRegister();
	TEST2_API UClass* Z_Construct_UClass_AIA_SuitPod();
	TEST2_API UClass* Z_Construct_UClass_AInteractableActor();
	UPackage* Z_Construct_UPackage__Script_Test2();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AIA_SuitPod::StaticRegisterNativesAIA_SuitPod()
	{
	}
	UClass* Z_Construct_UClass_AIA_SuitPod_NoRegister()
	{
		return AIA_SuitPod::StaticClass();
	}
	struct Z_Construct_UClass_AIA_SuitPod_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Suitoff_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Suitoff;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshMaterials_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MeshMaterials;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshMaterials_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FullMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FullMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AIA_SuitPod_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInteractableActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Test2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIA_SuitPod_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "IA_SuitPod.h" },
		{ "ModuleRelativePath", "IA_SuitPod.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIA_SuitPod_Statics::NewProp_Suitoff_MetaData[] = {
		{ "Category", "Audio" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "IA_SuitPod.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIA_SuitPod_Statics::NewProp_Suitoff = { "Suitoff", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIA_SuitPod, Suitoff), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AIA_SuitPod_Statics::NewProp_Suitoff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AIA_SuitPod_Statics::NewProp_Suitoff_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIA_SuitPod_Statics::NewProp_MeshMaterials_MetaData[] = {
		{ "Category", "Suit Pod Mesh" },
		{ "ModuleRelativePath", "IA_SuitPod.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AIA_SuitPod_Statics::NewProp_MeshMaterials = { "MeshMaterials", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIA_SuitPod, MeshMaterials), METADATA_PARAMS(Z_Construct_UClass_AIA_SuitPod_Statics::NewProp_MeshMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AIA_SuitPod_Statics::NewProp_MeshMaterials_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIA_SuitPod_Statics::NewProp_MeshMaterials_Inner = { "MeshMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIA_SuitPod_Statics::NewProp_FullMesh_MetaData[] = {
		{ "Category", "Suit Pod Mesh" },
		{ "ModuleRelativePath", "IA_SuitPod.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIA_SuitPod_Statics::NewProp_FullMesh = { "FullMesh", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIA_SuitPod, FullMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AIA_SuitPod_Statics::NewProp_FullMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AIA_SuitPod_Statics::NewProp_FullMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIA_SuitPod_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "IA_SuitPod.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIA_SuitPod_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIA_SuitPod, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AIA_SuitPod_Statics::NewProp_MeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AIA_SuitPod_Statics::NewProp_MeshComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AIA_SuitPod_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIA_SuitPod_Statics::NewProp_Suitoff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIA_SuitPod_Statics::NewProp_MeshMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIA_SuitPod_Statics::NewProp_MeshMaterials_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIA_SuitPod_Statics::NewProp_FullMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIA_SuitPod_Statics::NewProp_MeshComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AIA_SuitPod_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIA_SuitPod>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AIA_SuitPod_Statics::ClassParams = {
		&AIA_SuitPod::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AIA_SuitPod_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AIA_SuitPod_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AIA_SuitPod_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AIA_SuitPod_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AIA_SuitPod()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AIA_SuitPod_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AIA_SuitPod, 2868084446);
	template<> TEST2_API UClass* StaticClass<AIA_SuitPod>()
	{
		return AIA_SuitPod::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AIA_SuitPod(Z_Construct_UClass_AIA_SuitPod, &AIA_SuitPod::StaticClass, TEXT("/Script/Test2"), TEXT("AIA_SuitPod"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AIA_SuitPod);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
