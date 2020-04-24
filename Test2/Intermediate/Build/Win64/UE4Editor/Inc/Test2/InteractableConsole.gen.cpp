// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Test2/InteractableConsole.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractableConsole() {}
// Cross Module References
	TEST2_API UClass* Z_Construct_UClass_AInteractableConsole_NoRegister();
	TEST2_API UClass* Z_Construct_UClass_AInteractableConsole();
	TEST2_API UClass* Z_Construct_UClass_AInteractableActor();
	UPackage* Z_Construct_UPackage__Script_Test2();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AInteractableConsole::StaticRegisterNativesAInteractableConsole()
	{
	}
	UClass* Z_Construct_UClass_AInteractableConsole_NoRegister()
	{
		return AInteractableConsole::StaticClass();
	}
	struct Z_Construct_UClass_AInteractableConsole_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pConsoleMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pConsoleMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInteractableConsole_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInteractableActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Test2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractableConsole_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "InteractableConsole.h" },
		{ "ModuleRelativePath", "InteractableConsole.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractableConsole_Statics::NewProp_pConsoleMesh_MetaData[] = {
		{ "Category", "InteractableConsole" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InteractableConsole.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInteractableConsole_Statics::NewProp_pConsoleMesh = { "pConsoleMesh", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInteractableConsole, pConsoleMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AInteractableConsole_Statics::NewProp_pConsoleMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableConsole_Statics::NewProp_pConsoleMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInteractableConsole_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractableConsole_Statics::NewProp_pConsoleMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInteractableConsole_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInteractableConsole>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AInteractableConsole_Statics::ClassParams = {
		&AInteractableConsole::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AInteractableConsole_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableConsole_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AInteractableConsole_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableConsole_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInteractableConsole()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AInteractableConsole_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AInteractableConsole, 3002641917);
	template<> TEST2_API UClass* StaticClass<AInteractableConsole>()
	{
		return AInteractableConsole::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AInteractableConsole(Z_Construct_UClass_AInteractableConsole, &AInteractableConsole::StaticClass, TEXT("/Script/Test2"), TEXT("AInteractableConsole"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInteractableConsole);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
