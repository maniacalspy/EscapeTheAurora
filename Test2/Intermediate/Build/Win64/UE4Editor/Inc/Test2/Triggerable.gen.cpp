// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Test2/Triggerable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerable() {}
// Cross Module References
	TEST2_API UClass* Z_Construct_UClass_UTriggerable_NoRegister();
	TEST2_API UClass* Z_Construct_UClass_UTriggerable();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Test2();
	TEST2_API UFunction* Z_Construct_UFunction_UTriggerable_OnTriggered();
// End Cross Module References
	void ITriggerable::OnTriggered()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnTriggered instead.");
	}
	void UTriggerable::StaticRegisterNativesUTriggerable()
	{
		UClass* Class = UTriggerable::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnTriggered", &ITriggerable::execOnTriggered },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTriggerable_OnTriggered_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerable_OnTriggered_Statics::Function_MetaDataParams[] = {
		{ "Category", "Triggers" },
		{ "ModuleRelativePath", "Triggerable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerable_OnTriggered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerable, nullptr, "OnTriggered", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerable_OnTriggered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerable_OnTriggered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerable_OnTriggered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerable_OnTriggered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTriggerable_NoRegister()
	{
		return UTriggerable::StaticClass();
	}
	struct Z_Construct_UClass_UTriggerable_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTriggerable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Test2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTriggerable_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTriggerable_OnTriggered, "OnTriggered" }, // 6840517
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerable_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Triggerable.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTriggerable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ITriggerable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTriggerable_Statics::ClassParams = {
		&UTriggerable::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UTriggerable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTriggerable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTriggerable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTriggerable, 2952659068);
	template<> TEST2_API UClass* StaticClass<UTriggerable>()
	{
		return UTriggerable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTriggerable(Z_Construct_UClass_UTriggerable, &UTriggerable::StaticClass, TEXT("/Script/Test2"), TEXT("UTriggerable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTriggerable);
	static FName NAME_UTriggerable_OnTriggered = FName(TEXT("OnTriggered"));
	void ITriggerable::Execute_OnTriggered(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTriggerable::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UTriggerable_OnTriggered);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (ITriggerable*)(O->GetNativeInterfaceAddress(UTriggerable::StaticClass())))
		{
			I->OnTriggered_Implementation();
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
