// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEST2_Test2Character_generated_h
#error "Test2Character.generated.h already included, missing '#pragma once' in Test2Character.h"
#endif
#define TEST2_Test2Character_generated_h

#define Test2_Source_Test2_Test2Character_h_14_RPC_WRAPPERS
#define Test2_Source_Test2_Test2Character_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Test2_Source_Test2_Test2Character_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATest2Character(); \
	friend TEST2_API class UClass* Z_Construct_UClass_ATest2Character(); \
public: \
	DECLARE_CLASS(ATest2Character, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Test2"), NO_API) \
	DECLARE_SERIALIZER(ATest2Character) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Test2_Source_Test2_Test2Character_h_14_INCLASS \
private: \
	static void StaticRegisterNativesATest2Character(); \
	friend TEST2_API class UClass* Z_Construct_UClass_ATest2Character(); \
public: \
	DECLARE_CLASS(ATest2Character, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Test2"), NO_API) \
	DECLARE_SERIALIZER(ATest2Character) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Test2_Source_Test2_Test2Character_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATest2Character(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATest2Character) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATest2Character); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATest2Character); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATest2Character(ATest2Character&&); \
	NO_API ATest2Character(const ATest2Character&); \
public:


#define Test2_Source_Test2_Test2Character_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATest2Character(ATest2Character&&); \
	NO_API ATest2Character(const ATest2Character&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATest2Character); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATest2Character); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATest2Character)


#define Test2_Source_Test2_Test2Character_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(ATest2Character, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(ATest2Character, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(ATest2Character, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(ATest2Character, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(ATest2Character, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(ATest2Character, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(ATest2Character, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(ATest2Character, L_MotionController); }


#define Test2_Source_Test2_Test2Character_h_11_PROLOG
#define Test2_Source_Test2_Test2Character_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test2_Source_Test2_Test2Character_h_14_PRIVATE_PROPERTY_OFFSET \
	Test2_Source_Test2_Test2Character_h_14_RPC_WRAPPERS \
	Test2_Source_Test2_Test2Character_h_14_INCLASS \
	Test2_Source_Test2_Test2Character_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Test2_Source_Test2_Test2Character_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test2_Source_Test2_Test2Character_h_14_PRIVATE_PROPERTY_OFFSET \
	Test2_Source_Test2_Test2Character_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Test2_Source_Test2_Test2Character_h_14_INCLASS_NO_PURE_DECLS \
	Test2_Source_Test2_Test2Character_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test2_Source_Test2_Test2Character_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
