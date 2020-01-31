// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef TEST2_PuzzleBlockComponent_generated_h
#error "PuzzleBlockComponent.generated.h already included, missing '#pragma once' in PuzzleBlockComponent.h"
#endif
#define TEST2_PuzzleBlockComponent_generated_h

#define Test2_Source_Test2_PuzzleBlockComponent_h_14_SPARSE_DATA
#define Test2_Source_Test2_PuzzleBlockComponent_h_14_RPC_WRAPPERS \
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


#define Test2_Source_Test2_PuzzleBlockComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
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


#define Test2_Source_Test2_PuzzleBlockComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPuzzleBlockComponent(); \
	friend struct Z_Construct_UClass_UPuzzleBlockComponent_Statics; \
public: \
	DECLARE_CLASS(UPuzzleBlockComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Test2"), NO_API) \
	DECLARE_SERIALIZER(UPuzzleBlockComponent)


#define Test2_Source_Test2_PuzzleBlockComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUPuzzleBlockComponent(); \
	friend struct Z_Construct_UClass_UPuzzleBlockComponent_Statics; \
public: \
	DECLARE_CLASS(UPuzzleBlockComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Test2"), NO_API) \
	DECLARE_SERIALIZER(UPuzzleBlockComponent)


#define Test2_Source_Test2_PuzzleBlockComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPuzzleBlockComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPuzzleBlockComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPuzzleBlockComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPuzzleBlockComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPuzzleBlockComponent(UPuzzleBlockComponent&&); \
	NO_API UPuzzleBlockComponent(const UPuzzleBlockComponent&); \
public:


#define Test2_Source_Test2_PuzzleBlockComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPuzzleBlockComponent(UPuzzleBlockComponent&&); \
	NO_API UPuzzleBlockComponent(const UPuzzleBlockComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPuzzleBlockComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPuzzleBlockComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPuzzleBlockComponent)


#define Test2_Source_Test2_PuzzleBlockComponent_h_14_PRIVATE_PROPERTY_OFFSET
#define Test2_Source_Test2_PuzzleBlockComponent_h_11_PROLOG
#define Test2_Source_Test2_PuzzleBlockComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test2_Source_Test2_PuzzleBlockComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	Test2_Source_Test2_PuzzleBlockComponent_h_14_SPARSE_DATA \
	Test2_Source_Test2_PuzzleBlockComponent_h_14_RPC_WRAPPERS \
	Test2_Source_Test2_PuzzleBlockComponent_h_14_INCLASS \
	Test2_Source_Test2_PuzzleBlockComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Test2_Source_Test2_PuzzleBlockComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test2_Source_Test2_PuzzleBlockComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	Test2_Source_Test2_PuzzleBlockComponent_h_14_SPARSE_DATA \
	Test2_Source_Test2_PuzzleBlockComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Test2_Source_Test2_PuzzleBlockComponent_h_14_INCLASS_NO_PURE_DECLS \
	Test2_Source_Test2_PuzzleBlockComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEST2_API UClass* StaticClass<class UPuzzleBlockComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test2_Source_Test2_PuzzleBlockComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
