// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEST2_StartHUD_generated_h
#error "StartHUD.generated.h already included, missing '#pragma once' in StartHUD.h"
#endif
#define TEST2_StartHUD_generated_h

#define Test2_Source_Test2_StartHUD_h_15_SPARSE_DATA
#define Test2_Source_Test2_StartHUD_h_15_RPC_WRAPPERS
#define Test2_Source_Test2_StartHUD_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Test2_Source_Test2_StartHUD_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAStartHUD(); \
	friend struct Z_Construct_UClass_AStartHUD_Statics; \
public: \
	DECLARE_CLASS(AStartHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Test2"), NO_API) \
	DECLARE_SERIALIZER(AStartHUD)


#define Test2_Source_Test2_StartHUD_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAStartHUD(); \
	friend struct Z_Construct_UClass_AStartHUD_Statics; \
public: \
	DECLARE_CLASS(AStartHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Test2"), NO_API) \
	DECLARE_SERIALIZER(AStartHUD)


#define Test2_Source_Test2_StartHUD_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AStartHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AStartHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStartHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStartHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStartHUD(AStartHUD&&); \
	NO_API AStartHUD(const AStartHUD&); \
public:


#define Test2_Source_Test2_StartHUD_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AStartHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStartHUD(AStartHUD&&); \
	NO_API AStartHUD(const AStartHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStartHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStartHUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AStartHUD)


#define Test2_Source_Test2_StartHUD_h_15_PRIVATE_PROPERTY_OFFSET
#define Test2_Source_Test2_StartHUD_h_12_PROLOG
#define Test2_Source_Test2_StartHUD_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test2_Source_Test2_StartHUD_h_15_PRIVATE_PROPERTY_OFFSET \
	Test2_Source_Test2_StartHUD_h_15_SPARSE_DATA \
	Test2_Source_Test2_StartHUD_h_15_RPC_WRAPPERS \
	Test2_Source_Test2_StartHUD_h_15_INCLASS \
	Test2_Source_Test2_StartHUD_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Test2_Source_Test2_StartHUD_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test2_Source_Test2_StartHUD_h_15_PRIVATE_PROPERTY_OFFSET \
	Test2_Source_Test2_StartHUD_h_15_SPARSE_DATA \
	Test2_Source_Test2_StartHUD_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Test2_Source_Test2_StartHUD_h_15_INCLASS_NO_PURE_DECLS \
	Test2_Source_Test2_StartHUD_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEST2_API UClass* StaticClass<class AStartHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test2_Source_Test2_StartHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
