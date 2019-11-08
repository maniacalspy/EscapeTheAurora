// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "PuzzleGrid.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePuzzleGrid() {}
// Cross Module References
	TEST2_API UClass* Z_Construct_UClass_APuzzleGrid_NoRegister();
	TEST2_API UClass* Z_Construct_UClass_APuzzleGrid();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Test2();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void APuzzleGrid::StaticRegisterNativesAPuzzleGrid()
	{
	}
	UClass* Z_Construct_UClass_APuzzleGrid_NoRegister()
	{
		return APuzzleGrid::StaticClass();
	}
	UClass* Z_Construct_UClass_APuzzleGrid()
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
				{ "IncludePath", "PuzzleGrid.h" },
				{ "ModuleRelativePath", "PuzzleGrid.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelGridNumber_MetaData[] = {
				{ "Category", "PuzzleGrid" },
				{ "ModuleRelativePath", "PuzzleGrid.h" },
			};
#endif
			static const UE4CodeGen_Private::FInt8PropertyParams NewProp_LevelGridNumber = { UE4CodeGen_Private::EPropertyClass::Int8, "LevelGridNumber", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(APuzzleGrid, LevelGridNumber), METADATA_PARAMS(NewProp_LevelGridNumber_MetaData, ARRAY_COUNT(NewProp_LevelGridNumber_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pTileGridMesh_MetaData[] = {
				{ "Category", "Mesh" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "PuzzleGrid.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pTileGridMesh = { UE4CodeGen_Private::EPropertyClass::Object, "pTileGridMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000b0009, 1, nullptr, STRUCT_OFFSET(APuzzleGrid, pTileGridMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_pTileGridMesh_MetaData, ARRAY_COUNT(NewProp_pTileGridMesh_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LevelGridNumber,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_pTileGridMesh,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<APuzzleGrid>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&APuzzleGrid::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APuzzleGrid, 2494779862);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APuzzleGrid(Z_Construct_UClass_APuzzleGrid, &APuzzleGrid::StaticClass, TEXT("/Script/Test2"), TEXT("APuzzleGrid"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APuzzleGrid);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
