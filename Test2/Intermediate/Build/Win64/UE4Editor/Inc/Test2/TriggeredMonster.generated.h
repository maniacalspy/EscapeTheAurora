// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef TEST2_TriggeredMonster_generated_h
#error "TriggeredMonster.generated.h already included, missing '#pragma once' in TriggeredMonster.h"
#endif
#define TEST2_TriggeredMonster_generated_h

#define Test2_Source_Test2_TriggeredMonster_h_12_SPARSE_DATA
#define Test2_Source_Test2_TriggeredMonster_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnTriggerOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_FromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnTriggerOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_FromSweep,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define Test2_Source_Test2_TriggeredMonster_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnTriggerOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_FromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnTriggerOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_FromSweep,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define Test2_Source_Test2_TriggeredMonster_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATriggeredMonster(); \
	friend struct Z_Construct_UClass_ATriggeredMonster_Statics; \
public: \
	DECLARE_CLASS(ATriggeredMonster, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Test2"), NO_API) \
	DECLARE_SERIALIZER(ATriggeredMonster)


#define Test2_Source_Test2_TriggeredMonster_h_12_INCLASS \
private: \
	static void StaticRegisterNativesATriggeredMonster(); \
	friend struct Z_Construct_UClass_ATriggeredMonster_Statics; \
public: \
	DECLARE_CLASS(ATriggeredMonster, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Test2"), NO_API) \
	DECLARE_SERIALIZER(ATriggeredMonster)


#define Test2_Source_Test2_TriggeredMonster_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATriggeredMonster(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATriggeredMonster) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATriggeredMonster); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATriggeredMonster); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATriggeredMonster(ATriggeredMonster&&); \
	NO_API ATriggeredMonster(const ATriggeredMonster&); \
public:


#define Test2_Source_Test2_TriggeredMonster_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATriggeredMonster(ATriggeredMonster&&); \
	NO_API ATriggeredMonster(const ATriggeredMonster&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATriggeredMonster); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATriggeredMonster); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATriggeredMonster)


#define Test2_Source_Test2_TriggeredMonster_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MonsterComponent() { return STRUCT_OFFSET(ATriggeredMonster, MonsterComponent); } \
	FORCEINLINE static uint32 __PPO__BreathingSound() { return STRUCT_OFFSET(ATriggeredMonster, BreathingSound); } \
	FORCEINLINE static uint32 __PPO__TriggerBox() { return STRUCT_OFFSET(ATriggeredMonster, TriggerBox); } \
	FORCEINLINE static uint32 __PPO__EndPoint() { return STRUCT_OFFSET(ATriggeredMonster, EndPoint); } \
	FORCEINLINE static uint32 __PPO__MonsterMoveSpeed() { return STRUCT_OFFSET(ATriggeredMonster, MonsterMoveSpeed); }


#define Test2_Source_Test2_TriggeredMonster_h_9_PROLOG
#define Test2_Source_Test2_TriggeredMonster_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test2_Source_Test2_TriggeredMonster_h_12_PRIVATE_PROPERTY_OFFSET \
	Test2_Source_Test2_TriggeredMonster_h_12_SPARSE_DATA \
	Test2_Source_Test2_TriggeredMonster_h_12_RPC_WRAPPERS \
	Test2_Source_Test2_TriggeredMonster_h_12_INCLASS \
	Test2_Source_Test2_TriggeredMonster_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Test2_Source_Test2_TriggeredMonster_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test2_Source_Test2_TriggeredMonster_h_12_PRIVATE_PROPERTY_OFFSET \
	Test2_Source_Test2_TriggeredMonster_h_12_SPARSE_DATA \
	Test2_Source_Test2_TriggeredMonster_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Test2_Source_Test2_TriggeredMonster_h_12_INCLASS_NO_PURE_DECLS \
	Test2_Source_Test2_TriggeredMonster_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEST2_API UClass* StaticClass<class ATriggeredMonster>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test2_Source_Test2_TriggeredMonster_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
