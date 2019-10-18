// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEST2_EndLevelDoor_generated_h
#error "EndLevelDoor.generated.h already included, missing '#pragma once' in EndLevelDoor.h"
#endif
#define TEST2_EndLevelDoor_generated_h

#define Test2_Source_Test2_EndLevelDoor_h_12_RPC_WRAPPERS
#define Test2_Source_Test2_EndLevelDoor_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Test2_Source_Test2_EndLevelDoor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEndLevelDoor(); \
	friend TEST2_API class UClass* Z_Construct_UClass_AEndLevelDoor(); \
public: \
	DECLARE_CLASS(AEndLevelDoor, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Test2"), NO_API) \
	DECLARE_SERIALIZER(AEndLevelDoor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Test2_Source_Test2_EndLevelDoor_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAEndLevelDoor(); \
	friend TEST2_API class UClass* Z_Construct_UClass_AEndLevelDoor(); \
public: \
	DECLARE_CLASS(AEndLevelDoor, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Test2"), NO_API) \
	DECLARE_SERIALIZER(AEndLevelDoor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Test2_Source_Test2_EndLevelDoor_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEndLevelDoor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEndLevelDoor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEndLevelDoor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEndLevelDoor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEndLevelDoor(AEndLevelDoor&&); \
	NO_API AEndLevelDoor(const AEndLevelDoor&); \
public:


#define Test2_Source_Test2_EndLevelDoor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEndLevelDoor(AEndLevelDoor&&); \
	NO_API AEndLevelDoor(const AEndLevelDoor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEndLevelDoor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEndLevelDoor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEndLevelDoor)


#define Test2_Source_Test2_EndLevelDoor_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DoorFrameSkeleton() { return STRUCT_OFFSET(AEndLevelDoor, DoorFrameSkeleton); } \
	FORCEINLINE static uint32 __PPO__DoorPanelSkeleton() { return STRUCT_OFFSET(AEndLevelDoor, DoorPanelSkeleton); }


#define Test2_Source_Test2_EndLevelDoor_h_9_PROLOG
#define Test2_Source_Test2_EndLevelDoor_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test2_Source_Test2_EndLevelDoor_h_12_PRIVATE_PROPERTY_OFFSET \
	Test2_Source_Test2_EndLevelDoor_h_12_RPC_WRAPPERS \
	Test2_Source_Test2_EndLevelDoor_h_12_INCLASS \
	Test2_Source_Test2_EndLevelDoor_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Test2_Source_Test2_EndLevelDoor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test2_Source_Test2_EndLevelDoor_h_12_PRIVATE_PROPERTY_OFFSET \
	Test2_Source_Test2_EndLevelDoor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Test2_Source_Test2_EndLevelDoor_h_12_INCLASS_NO_PURE_DECLS \
	Test2_Source_Test2_EndLevelDoor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test2_Source_Test2_EndLevelDoor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
