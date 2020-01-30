// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEST2_EndLevelDoor_generated_h
#error "EndLevelDoor.generated.h already included, missing '#pragma once' in EndLevelDoor.h"
#endif
#define TEST2_EndLevelDoor_generated_h

#define Test2_Source_Test2_EndLevelDoor_h_14_SPARSE_DATA
#define Test2_Source_Test2_EndLevelDoor_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOpenDoor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OpenDoor(); \
		P_NATIVE_END; \
	}


#define Test2_Source_Test2_EndLevelDoor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOpenDoor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OpenDoor(); \
		P_NATIVE_END; \
	}


#define Test2_Source_Test2_EndLevelDoor_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEndLevelDoor(); \
	friend struct Z_Construct_UClass_AEndLevelDoor_Statics; \
public: \
	DECLARE_CLASS(AEndLevelDoor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Test2"), NO_API) \
	DECLARE_SERIALIZER(AEndLevelDoor)


#define Test2_Source_Test2_EndLevelDoor_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAEndLevelDoor(); \
	friend struct Z_Construct_UClass_AEndLevelDoor_Statics; \
public: \
	DECLARE_CLASS(AEndLevelDoor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Test2"), NO_API) \
	DECLARE_SERIALIZER(AEndLevelDoor)


#define Test2_Source_Test2_EndLevelDoor_h_14_STANDARD_CONSTRUCTORS \
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


#define Test2_Source_Test2_EndLevelDoor_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEndLevelDoor(AEndLevelDoor&&); \
	NO_API AEndLevelDoor(const AEndLevelDoor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEndLevelDoor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEndLevelDoor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEndLevelDoor)


#define Test2_Source_Test2_EndLevelDoor_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DoorFrameSkeleton() { return STRUCT_OFFSET(AEndLevelDoor, DoorFrameSkeleton); } \
	FORCEINLINE static uint32 __PPO__DoorPanelSkeleton() { return STRUCT_OFFSET(AEndLevelDoor, DoorPanelSkeleton); } \
	FORCEINLINE static uint32 __PPO__pOpenSound() { return STRUCT_OFFSET(AEndLevelDoor, pOpenSound); }


#define Test2_Source_Test2_EndLevelDoor_h_11_PROLOG
#define Test2_Source_Test2_EndLevelDoor_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test2_Source_Test2_EndLevelDoor_h_14_PRIVATE_PROPERTY_OFFSET \
	Test2_Source_Test2_EndLevelDoor_h_14_SPARSE_DATA \
	Test2_Source_Test2_EndLevelDoor_h_14_RPC_WRAPPERS \
	Test2_Source_Test2_EndLevelDoor_h_14_INCLASS \
	Test2_Source_Test2_EndLevelDoor_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Test2_Source_Test2_EndLevelDoor_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test2_Source_Test2_EndLevelDoor_h_14_PRIVATE_PROPERTY_OFFSET \
	Test2_Source_Test2_EndLevelDoor_h_14_SPARSE_DATA \
	Test2_Source_Test2_EndLevelDoor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Test2_Source_Test2_EndLevelDoor_h_14_INCLASS_NO_PURE_DECLS \
	Test2_Source_Test2_EndLevelDoor_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEST2_API UClass* StaticClass<class AEndLevelDoor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test2_Source_Test2_EndLevelDoor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
