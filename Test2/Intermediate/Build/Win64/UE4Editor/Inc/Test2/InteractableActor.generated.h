// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEST2_InteractableActor_generated_h
#error "InteractableActor.generated.h already included, missing '#pragma once' in InteractableActor.h"
#endif
#define TEST2_InteractableActor_generated_h

#define Test2_Source_Test2_InteractableActor_h_13_SPARSE_DATA
#define Test2_Source_Test2_InteractableActor_h_13_RPC_WRAPPERS
#define Test2_Source_Test2_InteractableActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Test2_Source_Test2_InteractableActor_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInteractableActor(); \
	friend struct Z_Construct_UClass_AInteractableActor_Statics; \
public: \
	DECLARE_CLASS(AInteractableActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Test2"), NO_API) \
	DECLARE_SERIALIZER(AInteractableActor) \
	virtual UObject* _getUObject() const override { return const_cast<AInteractableActor*>(this); }


#define Test2_Source_Test2_InteractableActor_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAInteractableActor(); \
	friend struct Z_Construct_UClass_AInteractableActor_Statics; \
public: \
	DECLARE_CLASS(AInteractableActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Test2"), NO_API) \
	DECLARE_SERIALIZER(AInteractableActor) \
	virtual UObject* _getUObject() const override { return const_cast<AInteractableActor*>(this); }


#define Test2_Source_Test2_InteractableActor_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AInteractableActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AInteractableActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractableActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractableActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInteractableActor(AInteractableActor&&); \
	NO_API AInteractableActor(const AInteractableActor&); \
public:


#define Test2_Source_Test2_InteractableActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInteractableActor(AInteractableActor&&); \
	NO_API AInteractableActor(const AInteractableActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractableActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractableActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AInteractableActor)


#define Test2_Source_Test2_InteractableActor_h_13_PRIVATE_PROPERTY_OFFSET
#define Test2_Source_Test2_InteractableActor_h_10_PROLOG
#define Test2_Source_Test2_InteractableActor_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test2_Source_Test2_InteractableActor_h_13_PRIVATE_PROPERTY_OFFSET \
	Test2_Source_Test2_InteractableActor_h_13_SPARSE_DATA \
	Test2_Source_Test2_InteractableActor_h_13_RPC_WRAPPERS \
	Test2_Source_Test2_InteractableActor_h_13_INCLASS \
	Test2_Source_Test2_InteractableActor_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Test2_Source_Test2_InteractableActor_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test2_Source_Test2_InteractableActor_h_13_PRIVATE_PROPERTY_OFFSET \
	Test2_Source_Test2_InteractableActor_h_13_SPARSE_DATA \
	Test2_Source_Test2_InteractableActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Test2_Source_Test2_InteractableActor_h_13_INCLASS_NO_PURE_DECLS \
	Test2_Source_Test2_InteractableActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEST2_API UClass* StaticClass<class AInteractableActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test2_Source_Test2_InteractableActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
