// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Test2/PuzzleGrid.h"
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
	TEST2_API UFunction* Z_Construct_UFunction_APuzzleGrid_ResetPuzzle();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void APuzzleGrid::StaticRegisterNativesAPuzzleGrid()
	{
		UClass* Class = APuzzleGrid::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ResetPuzzle", &APuzzleGrid::execResetPuzzle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APuzzleGrid_ResetPuzzle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APuzzleGrid_ResetPuzzle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PuzzleGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APuzzleGrid_ResetPuzzle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APuzzleGrid, nullptr, "ResetPuzzle", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APuzzleGrid_ResetPuzzle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleGrid_ResetPuzzle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APuzzleGrid_ResetPuzzle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APuzzleGrid_ResetPuzzle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APuzzleGrid_NoRegister()
	{
		return APuzzleGrid::StaticClass();
	}
	struct Z_Construct_UClass_APuzzleGrid_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelGridNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt8PropertyParams NewProp_LevelGridNumber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pTileGridMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pTileGridMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APuzzleGrid_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Test2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APuzzleGrid_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APuzzleGrid_ResetPuzzle, "ResetPuzzle" }, // 3186974619
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuzzleGrid_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PuzzleGrid.h" },
		{ "ModuleRelativePath", "PuzzleGrid.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuzzleGrid_Statics::NewProp_LevelGridNumber_MetaData[] = {
		{ "Category", "PuzzleGrid" },
		{ "ModuleRelativePath", "PuzzleGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FInt8PropertyParams Z_Construct_UClass_APuzzleGrid_Statics::NewProp_LevelGridNumber = { "LevelGridNumber", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APuzzleGrid, LevelGridNumber), METADATA_PARAMS(Z_Construct_UClass_APuzzleGrid_Statics::NewProp_LevelGridNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APuzzleGrid_Statics::NewProp_LevelGridNumber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuzzleGrid_Statics::NewProp_pTileGridMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PuzzleGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APuzzleGrid_Statics::NewProp_pTileGridMesh = { "pTileGridMesh", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APuzzleGrid, pTileGridMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APuzzleGrid_Statics::NewProp_pTileGridMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APuzzleGrid_Statics::NewProp_pTileGridMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APuzzleGrid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzleGrid_Statics::NewProp_LevelGridNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzleGrid_Statics::NewProp_pTileGridMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APuzzleGrid_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APuzzleGrid>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APuzzleGrid_Statics::ClassParams = {
		&APuzzleGrid::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APuzzleGrid_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APuzzleGrid_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APuzzleGrid_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APuzzleGrid_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APuzzleGrid()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APuzzleGrid_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APuzzleGrid, 3454770366);
	template<> TEST2_API UClass* StaticClass<APuzzleGrid>()
	{
		return APuzzleGrid::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APuzzleGrid(Z_Construct_UClass_APuzzleGrid, &APuzzleGrid::StaticClass, TEXT("/Script/Test2"), TEXT("APuzzleGrid"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APuzzleGrid);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
