// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEST2_DoorBase_generated_h
#error "DoorBase.generated.h already included, missing '#pragma once' in DoorBase.h"
#endif
#define TEST2_DoorBase_generated_h

#define Test2_Source_Test2_DoorBase_h_14_SPARSE_DATA
#define Test2_Source_Test2_DoorBase_h_14_RPC_WRAPPERS \
	virtual void OpenDoor_Implementation(); \
	virtual void CloseDoor_Implementation(); \
	virtual void PowerOn_Implementation(); \
 \
	DECLARE_FUNCTION(execOpenDoor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OpenDoor_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCloseDoor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CloseDoor_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPowerOn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PowerOn_Implementation(); \
		P_NATIVE_END; \
	}


#define Test2_Source_Test2_DoorBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOpenDoor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OpenDoor_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCloseDoor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CloseDoor_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPowerOn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PowerOn_Implementation(); \
		P_NATIVE_END; \
	}


#define Test2_Source_Test2_DoorBase_h_14_EVENT_PARMS
#define Test2_Source_Test2_DoorBase_h_14_CALLBACK_WRAPPERS
#define Test2_Source_Test2_DoorBase_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADoorBase(); \
	friend struct Z_Construct_UClass_ADoorBase_Statics; \
public: \
	DECLARE_CLASS(ADoorBase, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Test2"), NO_API) \
	DECLARE_SERIALIZER(ADoorBase)


#define Test2_Source_Test2_DoorBase_h_14_INCLASS \
private: \
	static void StaticRegisterNativesADoorBase(); \
	friend struct Z_Construct_UClass_ADoorBase_Statics; \
public: \
	DECLARE_CLASS(ADoorBase, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Test2"), NO_API) \
	DECLARE_SERIALIZER(ADoorBase)


#define Test2_Source_Test2_DoorBase_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADoorBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADoorBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADoorBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADoorBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADoorBase(ADoorBase&&); \
	NO_API ADoorBase(const ADoorBase&); \
public:


#define Test2_Source_Test2_DoorBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADoorBase(ADoorBase&&); \
	NO_API ADoorBase(const ADoorBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADoorBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADoorBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADoorBase)


#define Test2_Source_Test2_DoorBase_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DoorFrameSkeleton() { return STRUCT_OFFSET(ADoorBase, DoorFrameSkeleton); } \
	FORCEINLINE static uint32 __PPO__DoorPanelSkeleton() { return STRUCT_OFFSET(ADoorBase, DoorPanelSkeleton); } \
	FORCEINLINE static uint32 __PPO__pOpenSound() { return STRUCT_OFFSET(ADoorBase, pOpenSound); } \
	FORCEINLINE static uint32 __PPO__bIsPowered() { return STRUCT_OFFSET(ADoorBase, bIsPowered); } \
	FORCEINLINE static uint32 __PPO__bIsOpen() { return STRUCT_OFFSET(ADoorBase, bIsOpen); }


#define Test2_Source_Test2_DoorBase_h_11_PROLOG \
	Test2_Source_Test2_DoorBase_h_14_EVENT_PARMS


#define Test2_Source_Test2_DoorBase_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test2_Source_Test2_DoorBase_h_14_PRIVATE_PROPERTY_OFFSET \
	Test2_Source_Test2_DoorBase_h_14_SPARSE_DATA \
	Test2_Source_Test2_DoorBase_h_14_RPC_WRAPPERS \
	Test2_Source_Test2_DoorBase_h_14_CALLBACK_WRAPPERS \
	Test2_Source_Test2_DoorBase_h_14_INCLASS \
	Test2_Source_Test2_DoorBase_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Test2_Source_Test2_DoorBase_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test2_Source_Test2_DoorBase_h_14_PRIVATE_PROPERTY_OFFSET \
	Test2_Source_Test2_DoorBase_h_14_SPARSE_DATA \
	Test2_Source_Test2_DoorBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Test2_Source_Test2_DoorBase_h_14_CALLBACK_WRAPPERS \
	Test2_Source_Test2_DoorBase_h_14_INCLASS_NO_PURE_DECLS \
	Test2_Source_Test2_DoorBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEST2_API UClass* StaticClass<class ADoorBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test2_Source_Test2_DoorBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
