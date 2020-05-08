// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEST2_IA_SuitPod_generated_h
#error "IA_SuitPod.generated.h already included, missing '#pragma once' in IA_SuitPod.h"
#endif
#define TEST2_IA_SuitPod_generated_h

#define Test2_Source_Test2_IA_SuitPod_h_16_SPARSE_DATA
#define Test2_Source_Test2_IA_SuitPod_h_16_RPC_WRAPPERS
#define Test2_Source_Test2_IA_SuitPod_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define Test2_Source_Test2_IA_SuitPod_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAIA_SuitPod(); \
	friend struct Z_Construct_UClass_AIA_SuitPod_Statics; \
public: \
	DECLARE_CLASS(AIA_SuitPod, AInteractableActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Test2"), NO_API) \
	DECLARE_SERIALIZER(AIA_SuitPod)


#define Test2_Source_Test2_IA_SuitPod_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAIA_SuitPod(); \
	friend struct Z_Construct_UClass_AIA_SuitPod_Statics; \
public: \
	DECLARE_CLASS(AIA_SuitPod, AInteractableActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Test2"), NO_API) \
	DECLARE_SERIALIZER(AIA_SuitPod)


#define Test2_Source_Test2_IA_SuitPod_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AIA_SuitPod(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AIA_SuitPod) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AIA_SuitPod); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AIA_SuitPod); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AIA_SuitPod(AIA_SuitPod&&); \
	NO_API AIA_SuitPod(const AIA_SuitPod&); \
public:


#define Test2_Source_Test2_IA_SuitPod_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AIA_SuitPod(AIA_SuitPod&&); \
	NO_API AIA_SuitPod(const AIA_SuitPod&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AIA_SuitPod); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AIA_SuitPod); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AIA_SuitPod)


#define Test2_Source_Test2_IA_SuitPod_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MeshComponent() { return STRUCT_OFFSET(AIA_SuitPod, MeshComponent); } \
	FORCEINLINE static uint32 __PPO__FullMesh() { return STRUCT_OFFSET(AIA_SuitPod, FullMesh); } \
	FORCEINLINE static uint32 __PPO__Suitoff() { return STRUCT_OFFSET(AIA_SuitPod, Suitoff); }


#define Test2_Source_Test2_IA_SuitPod_h_13_PROLOG
#define Test2_Source_Test2_IA_SuitPod_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test2_Source_Test2_IA_SuitPod_h_16_PRIVATE_PROPERTY_OFFSET \
	Test2_Source_Test2_IA_SuitPod_h_16_SPARSE_DATA \
	Test2_Source_Test2_IA_SuitPod_h_16_RPC_WRAPPERS \
	Test2_Source_Test2_IA_SuitPod_h_16_INCLASS \
	Test2_Source_Test2_IA_SuitPod_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Test2_Source_Test2_IA_SuitPod_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test2_Source_Test2_IA_SuitPod_h_16_PRIVATE_PROPERTY_OFFSET \
	Test2_Source_Test2_IA_SuitPod_h_16_SPARSE_DATA \
	Test2_Source_Test2_IA_SuitPod_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Test2_Source_Test2_IA_SuitPod_h_16_INCLASS_NO_PURE_DECLS \
	Test2_Source_Test2_IA_SuitPod_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEST2_API UClass* StaticClass<class AIA_SuitPod>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test2_Source_Test2_IA_SuitPod_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
