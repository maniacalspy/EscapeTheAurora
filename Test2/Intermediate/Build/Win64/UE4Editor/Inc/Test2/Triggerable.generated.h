// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEST2_Triggerable_generated_h
#error "Triggerable.generated.h already included, missing '#pragma once' in Triggerable.h"
#endif
#define TEST2_Triggerable_generated_h

#define Test2_Source_Test2_Triggerable_h_13_SPARSE_DATA
#define Test2_Source_Test2_Triggerable_h_13_RPC_WRAPPERS \
	virtual void OnTriggered_Implementation() {}; \
 \
	DECLARE_FUNCTION(execOnTriggered) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnTriggered_Implementation(); \
		P_NATIVE_END; \
	}


#define Test2_Source_Test2_Triggerable_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnTriggered_Implementation() {}; \
 \
	DECLARE_FUNCTION(execOnTriggered) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnTriggered_Implementation(); \
		P_NATIVE_END; \
	}


#define Test2_Source_Test2_Triggerable_h_13_EVENT_PARMS
#define Test2_Source_Test2_Triggerable_h_13_CALLBACK_WRAPPERS
#define Test2_Source_Test2_Triggerable_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TEST2_API UTriggerable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTriggerable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TEST2_API, UTriggerable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTriggerable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TEST2_API UTriggerable(UTriggerable&&); \
	TEST2_API UTriggerable(const UTriggerable&); \
public:


#define Test2_Source_Test2_Triggerable_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TEST2_API UTriggerable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TEST2_API UTriggerable(UTriggerable&&); \
	TEST2_API UTriggerable(const UTriggerable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TEST2_API, UTriggerable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTriggerable); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTriggerable)


#define Test2_Source_Test2_Triggerable_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUTriggerable(); \
	friend struct Z_Construct_UClass_UTriggerable_Statics; \
public: \
	DECLARE_CLASS(UTriggerable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Test2"), TEST2_API) \
	DECLARE_SERIALIZER(UTriggerable)


#define Test2_Source_Test2_Triggerable_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Test2_Source_Test2_Triggerable_h_13_GENERATED_UINTERFACE_BODY() \
	Test2_Source_Test2_Triggerable_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Test2_Source_Test2_Triggerable_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Test2_Source_Test2_Triggerable_h_13_GENERATED_UINTERFACE_BODY() \
	Test2_Source_Test2_Triggerable_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Test2_Source_Test2_Triggerable_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ITriggerable() {} \
public: \
	typedef UTriggerable UClassType; \
	typedef ITriggerable ThisClass; \
	static void Execute_OnTriggered(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Test2_Source_Test2_Triggerable_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~ITriggerable() {} \
public: \
	typedef UTriggerable UClassType; \
	typedef ITriggerable ThisClass; \
	static void Execute_OnTriggered(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Test2_Source_Test2_Triggerable_h_10_PROLOG \
	Test2_Source_Test2_Triggerable_h_13_EVENT_PARMS


#define Test2_Source_Test2_Triggerable_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test2_Source_Test2_Triggerable_h_13_SPARSE_DATA \
	Test2_Source_Test2_Triggerable_h_13_RPC_WRAPPERS \
	Test2_Source_Test2_Triggerable_h_13_CALLBACK_WRAPPERS \
	Test2_Source_Test2_Triggerable_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Test2_Source_Test2_Triggerable_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test2_Source_Test2_Triggerable_h_13_SPARSE_DATA \
	Test2_Source_Test2_Triggerable_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Test2_Source_Test2_Triggerable_h_13_CALLBACK_WRAPPERS \
	Test2_Source_Test2_Triggerable_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEST2_API UClass* StaticClass<class UTriggerable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test2_Source_Test2_Triggerable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
