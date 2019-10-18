// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef TEST2_PuzzleBlock_generated_h
#error "PuzzleBlock.generated.h already included, missing '#pragma once' in PuzzleBlock.h"
#endif
#define TEST2_PuzzleBlock_generated_h

#define Test2_Source_Test2_PuzzleBlock_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnBlockHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnBlockHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define Test2_Source_Test2_PuzzleBlock_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnBlockHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnBlockHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define Test2_Source_Test2_PuzzleBlock_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPuzzleBlock(); \
	friend TEST2_API class UClass* Z_Construct_UClass_APuzzleBlock(); \
public: \
	DECLARE_CLASS(APuzzleBlock, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Test2"), NO_API) \
	DECLARE_SERIALIZER(APuzzleBlock) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Test2_Source_Test2_PuzzleBlock_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAPuzzleBlock(); \
	friend TEST2_API class UClass* Z_Construct_UClass_APuzzleBlock(); \
public: \
	DECLARE_CLASS(APuzzleBlock, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Test2"), NO_API) \
	DECLARE_SERIALIZER(APuzzleBlock) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Test2_Source_Test2_PuzzleBlock_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APuzzleBlock(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APuzzleBlock) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APuzzleBlock); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APuzzleBlock); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APuzzleBlock(APuzzleBlock&&); \
	NO_API APuzzleBlock(const APuzzleBlock&); \
public:


#define Test2_Source_Test2_PuzzleBlock_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APuzzleBlock(APuzzleBlock&&); \
	NO_API APuzzleBlock(const APuzzleBlock&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APuzzleBlock); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APuzzleBlock); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APuzzleBlock)


#define Test2_Source_Test2_PuzzleBlock_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BlockMesh() { return STRUCT_OFFSET(APuzzleBlock, BlockMesh); }


#define Test2_Source_Test2_PuzzleBlock_h_11_PROLOG
#define Test2_Source_Test2_PuzzleBlock_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test2_Source_Test2_PuzzleBlock_h_14_PRIVATE_PROPERTY_OFFSET \
	Test2_Source_Test2_PuzzleBlock_h_14_RPC_WRAPPERS \
	Test2_Source_Test2_PuzzleBlock_h_14_INCLASS \
	Test2_Source_Test2_PuzzleBlock_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Test2_Source_Test2_PuzzleBlock_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test2_Source_Test2_PuzzleBlock_h_14_PRIVATE_PROPERTY_OFFSET \
	Test2_Source_Test2_PuzzleBlock_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Test2_Source_Test2_PuzzleBlock_h_14_INCLASS_NO_PURE_DECLS \
	Test2_Source_Test2_PuzzleBlock_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test2_Source_Test2_PuzzleBlock_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
