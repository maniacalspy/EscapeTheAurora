// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEST2_HUDWidgetBase_generated_h
#error "HUDWidgetBase.generated.h already included, missing '#pragma once' in HUDWidgetBase.h"
#endif
#define TEST2_HUDWidgetBase_generated_h

#define Test2_Source_Test2_HUDWidgetBase_h_15_SPARSE_DATA
#define Test2_Source_Test2_HUDWidgetBase_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCloseMenu) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CloseMenu(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpenMenu) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OpenMenu(); \
		P_NATIVE_END; \
	}


#define Test2_Source_Test2_HUDWidgetBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCloseMenu) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CloseMenu(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpenMenu) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OpenMenu(); \
		P_NATIVE_END; \
	}


#define Test2_Source_Test2_HUDWidgetBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHUDWidgetBase(); \
	friend struct Z_Construct_UClass_UHUDWidgetBase_Statics; \
public: \
	DECLARE_CLASS(UHUDWidgetBase, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Test2"), NO_API) \
	DECLARE_SERIALIZER(UHUDWidgetBase)


#define Test2_Source_Test2_HUDWidgetBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUHUDWidgetBase(); \
	friend struct Z_Construct_UClass_UHUDWidgetBase_Statics; \
public: \
	DECLARE_CLASS(UHUDWidgetBase, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Test2"), NO_API) \
	DECLARE_SERIALIZER(UHUDWidgetBase)


#define Test2_Source_Test2_HUDWidgetBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHUDWidgetBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHUDWidgetBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHUDWidgetBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHUDWidgetBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHUDWidgetBase(UHUDWidgetBase&&); \
	NO_API UHUDWidgetBase(const UHUDWidgetBase&); \
public:


#define Test2_Source_Test2_HUDWidgetBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHUDWidgetBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHUDWidgetBase(UHUDWidgetBase&&); \
	NO_API UHUDWidgetBase(const UHUDWidgetBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHUDWidgetBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHUDWidgetBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHUDWidgetBase)


#define Test2_Source_Test2_HUDWidgetBase_h_15_PRIVATE_PROPERTY_OFFSET
#define Test2_Source_Test2_HUDWidgetBase_h_12_PROLOG
#define Test2_Source_Test2_HUDWidgetBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test2_Source_Test2_HUDWidgetBase_h_15_PRIVATE_PROPERTY_OFFSET \
	Test2_Source_Test2_HUDWidgetBase_h_15_SPARSE_DATA \
	Test2_Source_Test2_HUDWidgetBase_h_15_RPC_WRAPPERS \
	Test2_Source_Test2_HUDWidgetBase_h_15_INCLASS \
	Test2_Source_Test2_HUDWidgetBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Test2_Source_Test2_HUDWidgetBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test2_Source_Test2_HUDWidgetBase_h_15_PRIVATE_PROPERTY_OFFSET \
	Test2_Source_Test2_HUDWidgetBase_h_15_SPARSE_DATA \
	Test2_Source_Test2_HUDWidgetBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Test2_Source_Test2_HUDWidgetBase_h_15_INCLASS_NO_PURE_DECLS \
	Test2_Source_Test2_HUDWidgetBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEST2_API UClass* StaticClass<class UHUDWidgetBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test2_Source_Test2_HUDWidgetBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
