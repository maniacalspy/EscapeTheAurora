// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef TEST2_Interactable_generated_h
#error "Interactable.generated.h already included, missing '#pragma once' in Interactable.h"
#endif
#define TEST2_Interactable_generated_h

#define Test2_Source_Test2_Interactable_h_13_SPARSE_DATA
#define Test2_Source_Test2_Interactable_h_13_RPC_WRAPPERS \
	virtual void EndFocus_Implementation() {}; \
	virtual bool StartFocus_Implementation(AActor* Caller) { return false; }; \
	virtual void OnInteract_Implementation(AActor* Caller) {}; \
 \
	DECLARE_FUNCTION(execEndFocus) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EndFocus_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartFocus) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Caller); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->StartFocus_Implementation(Z_Param_Caller); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnInteract) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Caller); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnInteract_Implementation(Z_Param_Caller); \
		P_NATIVE_END; \
	}


#define Test2_Source_Test2_Interactable_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void EndFocus_Implementation() {}; \
	virtual bool StartFocus_Implementation(AActor* Caller) { return false; }; \
	virtual void OnInteract_Implementation(AActor* Caller) {}; \
 \
	DECLARE_FUNCTION(execEndFocus) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EndFocus_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartFocus) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Caller); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->StartFocus_Implementation(Z_Param_Caller); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnInteract) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Caller); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnInteract_Implementation(Z_Param_Caller); \
		P_NATIVE_END; \
	}


#define Test2_Source_Test2_Interactable_h_13_EVENT_PARMS \
	struct Interactable_eventOnInteract_Parms \
	{ \
		AActor* Caller; \
	}; \
	struct Interactable_eventStartFocus_Parms \
	{ \
		AActor* Caller; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		Interactable_eventStartFocus_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define Test2_Source_Test2_Interactable_h_13_CALLBACK_WRAPPERS
#define Test2_Source_Test2_Interactable_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TEST2_API UInteractable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TEST2_API, UInteractable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TEST2_API UInteractable(UInteractable&&); \
	TEST2_API UInteractable(const UInteractable&); \
public:


#define Test2_Source_Test2_Interactable_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TEST2_API UInteractable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TEST2_API UInteractable(UInteractable&&); \
	TEST2_API UInteractable(const UInteractable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TEST2_API, UInteractable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractable); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractable)


#define Test2_Source_Test2_Interactable_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInteractable(); \
	friend struct Z_Construct_UClass_UInteractable_Statics; \
public: \
	DECLARE_CLASS(UInteractable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Test2"), TEST2_API) \
	DECLARE_SERIALIZER(UInteractable)


#define Test2_Source_Test2_Interactable_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Test2_Source_Test2_Interactable_h_13_GENERATED_UINTERFACE_BODY() \
	Test2_Source_Test2_Interactable_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Test2_Source_Test2_Interactable_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Test2_Source_Test2_Interactable_h_13_GENERATED_UINTERFACE_BODY() \
	Test2_Source_Test2_Interactable_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Test2_Source_Test2_Interactable_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInteractable() {} \
public: \
	typedef UInteractable UClassType; \
	typedef IInteractable ThisClass; \
	static void Execute_EndFocus(UObject* O); \
	static void Execute_OnInteract(UObject* O, AActor* Caller); \
	static bool Execute_StartFocus(UObject* O, AActor* Caller); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Test2_Source_Test2_Interactable_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IInteractable() {} \
public: \
	typedef UInteractable UClassType; \
	typedef IInteractable ThisClass; \
	static void Execute_EndFocus(UObject* O); \
	static void Execute_OnInteract(UObject* O, AActor* Caller); \
	static bool Execute_StartFocus(UObject* O, AActor* Caller); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Test2_Source_Test2_Interactable_h_10_PROLOG \
	Test2_Source_Test2_Interactable_h_13_EVENT_PARMS


#define Test2_Source_Test2_Interactable_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test2_Source_Test2_Interactable_h_13_SPARSE_DATA \
	Test2_Source_Test2_Interactable_h_13_RPC_WRAPPERS \
	Test2_Source_Test2_Interactable_h_13_CALLBACK_WRAPPERS \
	Test2_Source_Test2_Interactable_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Test2_Source_Test2_Interactable_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test2_Source_Test2_Interactable_h_13_SPARSE_DATA \
	Test2_Source_Test2_Interactable_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Test2_Source_Test2_Interactable_h_13_CALLBACK_WRAPPERS \
	Test2_Source_Test2_Interactable_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEST2_API UClass* StaticClass<class UInteractable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test2_Source_Test2_Interactable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
