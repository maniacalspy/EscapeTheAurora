// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEST2_InteractableDoor_generated_h
#error "InteractableDoor.generated.h already included, missing '#pragma once' in InteractableDoor.h"
#endif
#define TEST2_InteractableDoor_generated_h

#define Test2_Source_Test2_InteractableDoor_h_14_SPARSE_DATA
#define Test2_Source_Test2_InteractableDoor_h_14_RPC_WRAPPERS
#define Test2_Source_Test2_InteractableDoor_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Test2_Source_Test2_InteractableDoor_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInteractableDoor(); \
	friend struct Z_Construct_UClass_AInteractableDoor_Statics; \
public: \
	DECLARE_CLASS(AInteractableDoor, ADoorBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Test2"), NO_API) \
	DECLARE_SERIALIZER(AInteractableDoor) \
	virtual UObject* _getUObject() const override { return const_cast<AInteractableDoor*>(this); }


#define Test2_Source_Test2_InteractableDoor_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAInteractableDoor(); \
	friend struct Z_Construct_UClass_AInteractableDoor_Statics; \
public: \
	DECLARE_CLASS(AInteractableDoor, ADoorBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Test2"), NO_API) \
	DECLARE_SERIALIZER(AInteractableDoor) \
	virtual UObject* _getUObject() const override { return const_cast<AInteractableDoor*>(this); }


#define Test2_Source_Test2_InteractableDoor_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AInteractableDoor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AInteractableDoor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractableDoor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractableDoor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInteractableDoor(AInteractableDoor&&); \
	NO_API AInteractableDoor(const AInteractableDoor&); \
public:


#define Test2_Source_Test2_InteractableDoor_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInteractableDoor(AInteractableDoor&&); \
	NO_API AInteractableDoor(const AInteractableDoor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractableDoor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractableDoor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AInteractableDoor)


#define Test2_Source_Test2_InteractableDoor_h_14_PRIVATE_PROPERTY_OFFSET
#define Test2_Source_Test2_InteractableDoor_h_11_PROLOG
#define Test2_Source_Test2_InteractableDoor_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test2_Source_Test2_InteractableDoor_h_14_PRIVATE_PROPERTY_OFFSET \
	Test2_Source_Test2_InteractableDoor_h_14_SPARSE_DATA \
	Test2_Source_Test2_InteractableDoor_h_14_RPC_WRAPPERS \
	Test2_Source_Test2_InteractableDoor_h_14_INCLASS \
	Test2_Source_Test2_InteractableDoor_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Test2_Source_Test2_InteractableDoor_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test2_Source_Test2_InteractableDoor_h_14_PRIVATE_PROPERTY_OFFSET \
	Test2_Source_Test2_InteractableDoor_h_14_SPARSE_DATA \
	Test2_Source_Test2_InteractableDoor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Test2_Source_Test2_InteractableDoor_h_14_INCLASS_NO_PURE_DECLS \
	Test2_Source_Test2_InteractableDoor_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEST2_API UClass* StaticClass<class AInteractableDoor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test2_Source_Test2_InteractableDoor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
