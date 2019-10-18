// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "FitToGrid.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFitToGrid() {}
// Cross Module References
	TEST2_API UClass* Z_Construct_UClass_UFitToGrid_NoRegister();
	TEST2_API UClass* Z_Construct_UClass_UFitToGrid();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Test2();
// End Cross Module References
	void UFitToGrid::StaticRegisterNativesUFitToGrid()
	{
	}
	UClass* Z_Construct_UClass_UFitToGrid_NoRegister()
	{
		return UFitToGrid::StaticClass();
	}
	UClass* Z_Construct_UClass_UFitToGrid()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UActorComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_Test2,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Custom" },
				{ "IncludePath", "FitToGrid.h" },
				{ "ModuleRelativePath", "FitToGrid.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UFitToGrid>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UFitToGrid::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
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
	IMPLEMENT_CLASS(UFitToGrid, 1647149878);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFitToGrid(Z_Construct_UClass_UFitToGrid, &UFitToGrid::StaticClass, TEXT("/Script/Test2"), TEXT("UFitToGrid"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFitToGrid);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
