// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEST2_PauseHudWidget_generated_h
#error "PauseHudWidget.generated.h already included, missing '#pragma once' in PauseHudWidget.h"
#endif
#define TEST2_PauseHudWidget_generated_h

#define Test2_Source_Test2_PauseHudWidget_h_15_SPARSE_DATA
#define Test2_Source_Test2_PauseHudWidget_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCloseMenu) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CloseMenu(); \
		P_NATIVE_END; \
	}


#define Test2_Source_Test2_PauseHudWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCloseMenu) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CloseMenu(); \
		P_NATIVE_END; \
	}


#define Test2_Source_Test2_PauseHudWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPauseHudWidget(); \
	friend struct Z_Construct_UClass_UPauseHudWidget_Statics; \
public: \
	DECLARE_CLASS(UPauseHudWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Test2"), NO_API) \
	DECLARE_SERIALIZER(UPauseHudWidget)


#define Test2_Source_Test2_PauseHudWidget_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUPauseHudWidget(); \
	friend struct Z_Construct_UClass_UPauseHudWidget_Statics; \
public: \
	DECLARE_CLASS(UPauseHudWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Test2"), NO_API) \
	DECLARE_SERIALIZER(UPauseHudWidget)


#define Test2_Source_Test2_PauseHudWidget_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPauseHudWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPauseHudWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPauseHudWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPauseHudWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPauseHudWidget(UPauseHudWidget&&); \
	NO_API UPauseHudWidget(const UPauseHudWidget&); \
public:


#define Test2_Source_Test2_PauseHudWidget_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPauseHudWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPauseHudWidget(UPauseHudWidget&&); \
	NO_API UPauseHudWidget(const UPauseHudWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPauseHudWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPauseHudWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPauseHudWidget)


#define Test2_Source_Test2_PauseHudWidget_h_15_PRIVATE_PROPERTY_OFFSET
#define Test2_Source_Test2_PauseHudWidget_h_12_PROLOG
#define Test2_Source_Test2_PauseHudWidget_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test2_Source_Test2_PauseHudWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	Test2_Source_Test2_PauseHudWidget_h_15_SPARSE_DATA \
	Test2_Source_Test2_PauseHudWidget_h_15_RPC_WRAPPERS \
	Test2_Source_Test2_PauseHudWidget_h_15_INCLASS \
	Test2_Source_Test2_PauseHudWidget_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Test2_Source_Test2_PauseHudWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test2_Source_Test2_PauseHudWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	Test2_Source_Test2_PauseHudWidget_h_15_SPARSE_DATA \
	Test2_Source_Test2_PauseHudWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Test2_Source_Test2_PauseHudWidget_h_15_INCLASS_NO_PURE_DECLS \
	Test2_Source_Test2_PauseHudWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEST2_API UClass* StaticClass<class UPauseHudWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test2_Source_Test2_PauseHudWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
