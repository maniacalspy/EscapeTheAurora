// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEST2_EditableTextWidget_generated_h
#error "EditableTextWidget.generated.h already included, missing '#pragma once' in EditableTextWidget.h"
#endif
#define TEST2_EditableTextWidget_generated_h

#define Test2_Source_Test2_EditableTextWidget_h_15_SPARSE_DATA
#define Test2_Source_Test2_EditableTextWidget_h_15_RPC_WRAPPERS
#define Test2_Source_Test2_EditableTextWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Test2_Source_Test2_EditableTextWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditableTextWidget(); \
	friend struct Z_Construct_UClass_UEditableTextWidget_Statics; \
public: \
	DECLARE_CLASS(UEditableTextWidget, UHUDWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Test2"), NO_API) \
	DECLARE_SERIALIZER(UEditableTextWidget)


#define Test2_Source_Test2_EditableTextWidget_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUEditableTextWidget(); \
	friend struct Z_Construct_UClass_UEditableTextWidget_Statics; \
public: \
	DECLARE_CLASS(UEditableTextWidget, UHUDWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Test2"), NO_API) \
	DECLARE_SERIALIZER(UEditableTextWidget)


#define Test2_Source_Test2_EditableTextWidget_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditableTextWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditableTextWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditableTextWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditableTextWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditableTextWidget(UEditableTextWidget&&); \
	NO_API UEditableTextWidget(const UEditableTextWidget&); \
public:


#define Test2_Source_Test2_EditableTextWidget_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditableTextWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditableTextWidget(UEditableTextWidget&&); \
	NO_API UEditableTextWidget(const UEditableTextWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditableTextWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditableTextWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditableTextWidget)


#define Test2_Source_Test2_EditableTextWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PromptTextString() { return STRUCT_OFFSET(UEditableTextWidget, PromptTextString); }


#define Test2_Source_Test2_EditableTextWidget_h_12_PROLOG
#define Test2_Source_Test2_EditableTextWidget_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test2_Source_Test2_EditableTextWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	Test2_Source_Test2_EditableTextWidget_h_15_SPARSE_DATA \
	Test2_Source_Test2_EditableTextWidget_h_15_RPC_WRAPPERS \
	Test2_Source_Test2_EditableTextWidget_h_15_INCLASS \
	Test2_Source_Test2_EditableTextWidget_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Test2_Source_Test2_EditableTextWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test2_Source_Test2_EditableTextWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	Test2_Source_Test2_EditableTextWidget_h_15_SPARSE_DATA \
	Test2_Source_Test2_EditableTextWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Test2_Source_Test2_EditableTextWidget_h_15_INCLASS_NO_PURE_DECLS \
	Test2_Source_Test2_EditableTextWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEST2_API UClass* StaticClass<class UEditableTextWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test2_Source_Test2_EditableTextWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
