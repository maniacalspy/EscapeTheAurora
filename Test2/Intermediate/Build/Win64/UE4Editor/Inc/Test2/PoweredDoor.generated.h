// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEST2_PoweredDoor_generated_h
#error "PoweredDoor.generated.h already included, missing '#pragma once' in PoweredDoor.h"
#endif
#define TEST2_PoweredDoor_generated_h

#define Test2_Source_Test2_PoweredDoor_h_15_SPARSE_DATA
#define Test2_Source_Test2_PoweredDoor_h_15_RPC_WRAPPERS \
	virtual void PowerOn_Implementation(); \
 \
	DECLARE_FUNCTION(execPowerOn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PowerOn_Implementation(); \
		P_NATIVE_END; \
	}


#define Test2_Source_Test2_PoweredDoor_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPowerOn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PowerOn_Implementation(); \
		P_NATIVE_END; \
	}


#define Test2_Source_Test2_PoweredDoor_h_15_EVENT_PARMS
#define Test2_Source_Test2_PoweredDoor_h_15_CALLBACK_WRAPPERS
#define Test2_Source_Test2_PoweredDoor_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPoweredDoor(); \
	friend struct Z_Construct_UClass_APoweredDoor_Statics; \
public: \
	DECLARE_CLASS(APoweredDoor, ADoorBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Test2"), NO_API) \
	DECLARE_SERIALIZER(APoweredDoor)


#define Test2_Source_Test2_PoweredDoor_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAPoweredDoor(); \
	friend struct Z_Construct_UClass_APoweredDoor_Statics; \
public: \
	DECLARE_CLASS(APoweredDoor, ADoorBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Test2"), NO_API) \
	DECLARE_SERIALIZER(APoweredDoor)


#define Test2_Source_Test2_PoweredDoor_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APoweredDoor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APoweredDoor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APoweredDoor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APoweredDoor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APoweredDoor(APoweredDoor&&); \
	NO_API APoweredDoor(const APoweredDoor&); \
public:


#define Test2_Source_Test2_PoweredDoor_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APoweredDoor(APoweredDoor&&); \
	NO_API APoweredDoor(const APoweredDoor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APoweredDoor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APoweredDoor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APoweredDoor)


#define Test2_Source_Test2_PoweredDoor_h_15_PRIVATE_PROPERTY_OFFSET
#define Test2_Source_Test2_PoweredDoor_h_12_PROLOG \
	Test2_Source_Test2_PoweredDoor_h_15_EVENT_PARMS


#define Test2_Source_Test2_PoweredDoor_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test2_Source_Test2_PoweredDoor_h_15_PRIVATE_PROPERTY_OFFSET \
	Test2_Source_Test2_PoweredDoor_h_15_SPARSE_DATA \
	Test2_Source_Test2_PoweredDoor_h_15_RPC_WRAPPERS \
	Test2_Source_Test2_PoweredDoor_h_15_CALLBACK_WRAPPERS \
	Test2_Source_Test2_PoweredDoor_h_15_INCLASS \
	Test2_Source_Test2_PoweredDoor_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Test2_Source_Test2_PoweredDoor_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test2_Source_Test2_PoweredDoor_h_15_PRIVATE_PROPERTY_OFFSET \
	Test2_Source_Test2_PoweredDoor_h_15_SPARSE_DATA \
	Test2_Source_Test2_PoweredDoor_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Test2_Source_Test2_PoweredDoor_h_15_CALLBACK_WRAPPERS \
	Test2_Source_Test2_PoweredDoor_h_15_INCLASS_NO_PURE_DECLS \
	Test2_Source_Test2_PoweredDoor_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEST2_API UClass* StaticClass<class APoweredDoor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test2_Source_Test2_PoweredDoor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
