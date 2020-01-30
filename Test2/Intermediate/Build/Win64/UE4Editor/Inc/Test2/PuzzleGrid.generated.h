// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEST2_PuzzleGrid_generated_h
#error "PuzzleGrid.generated.h already included, missing '#pragma once' in PuzzleGrid.h"
#endif
#define TEST2_PuzzleGrid_generated_h

#define Test2_Source_Test2_PuzzleGrid_h_19_SPARSE_DATA
#define Test2_Source_Test2_PuzzleGrid_h_19_RPC_WRAPPERS
#define Test2_Source_Test2_PuzzleGrid_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define Test2_Source_Test2_PuzzleGrid_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPuzzleGrid(); \
	friend struct Z_Construct_UClass_APuzzleGrid_Statics; \
public: \
	DECLARE_CLASS(APuzzleGrid, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Test2"), NO_API) \
	DECLARE_SERIALIZER(APuzzleGrid)


#define Test2_Source_Test2_PuzzleGrid_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAPuzzleGrid(); \
	friend struct Z_Construct_UClass_APuzzleGrid_Statics; \
public: \
	DECLARE_CLASS(APuzzleGrid, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Test2"), NO_API) \
	DECLARE_SERIALIZER(APuzzleGrid)


#define Test2_Source_Test2_PuzzleGrid_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APuzzleGrid(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APuzzleGrid) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APuzzleGrid); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APuzzleGrid); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APuzzleGrid(APuzzleGrid&&); \
	NO_API APuzzleGrid(const APuzzleGrid&); \
public:


#define Test2_Source_Test2_PuzzleGrid_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APuzzleGrid(APuzzleGrid&&); \
	NO_API APuzzleGrid(const APuzzleGrid&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APuzzleGrid); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APuzzleGrid); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APuzzleGrid)


#define Test2_Source_Test2_PuzzleGrid_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__pTileGridMesh() { return STRUCT_OFFSET(APuzzleGrid, pTileGridMesh); } \
	FORCEINLINE static uint32 __PPO__LevelGridNumber() { return STRUCT_OFFSET(APuzzleGrid, LevelGridNumber); }


#define Test2_Source_Test2_PuzzleGrid_h_16_PROLOG
#define Test2_Source_Test2_PuzzleGrid_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test2_Source_Test2_PuzzleGrid_h_19_PRIVATE_PROPERTY_OFFSET \
	Test2_Source_Test2_PuzzleGrid_h_19_SPARSE_DATA \
	Test2_Source_Test2_PuzzleGrid_h_19_RPC_WRAPPERS \
	Test2_Source_Test2_PuzzleGrid_h_19_INCLASS \
	Test2_Source_Test2_PuzzleGrid_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Test2_Source_Test2_PuzzleGrid_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test2_Source_Test2_PuzzleGrid_h_19_PRIVATE_PROPERTY_OFFSET \
	Test2_Source_Test2_PuzzleGrid_h_19_SPARSE_DATA \
	Test2_Source_Test2_PuzzleGrid_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Test2_Source_Test2_PuzzleGrid_h_19_INCLASS_NO_PURE_DECLS \
	Test2_Source_Test2_PuzzleGrid_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEST2_API UClass* StaticClass<class APuzzleGrid>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test2_Source_Test2_PuzzleGrid_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
