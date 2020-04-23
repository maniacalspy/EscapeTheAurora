// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Test2/PoweredDoor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePoweredDoor() {}
// Cross Module References
	TEST2_API UClass* Z_Construct_UClass_APoweredDoor_NoRegister();
	TEST2_API UClass* Z_Construct_UClass_APoweredDoor();
	TEST2_API UClass* Z_Construct_UClass_ADoorBase();
	UPackage* Z_Construct_UPackage__Script_Test2();
	TEST2_API UFunction* Z_Construct_UFunction_APoweredDoor_PowerOn();
// End Cross Module References
	static FName NAME_APoweredDoor_PowerOn = FName(TEXT("PowerOn"));
	void APoweredDoor::PowerOn()
	{
		ProcessEvent(FindFunctionChecked(NAME_APoweredDoor_PowerOn),NULL);
	}
	void APoweredDoor::StaticRegisterNativesAPoweredDoor()
	{
		UClass* Class = APoweredDoor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PowerOn", &APoweredDoor::execPowerOn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APoweredDoor_PowerOn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APoweredDoor_PowerOn_Statics::Function_MetaDataParams[] = {
		{ "Category", "Door" },
		{ "ModuleRelativePath", "PoweredDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APoweredDoor_PowerOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APoweredDoor, nullptr, "PowerOn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APoweredDoor_PowerOn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APoweredDoor_PowerOn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APoweredDoor_PowerOn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APoweredDoor_PowerOn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APoweredDoor_NoRegister()
	{
		return APoweredDoor::StaticClass();
	}
	struct Z_Construct_UClass_APoweredDoor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsPowered_MetaData[];
#endif
		static void NewProp_bIsPowered_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPowered;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APoweredDoor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADoorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Test2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APoweredDoor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APoweredDoor_PowerOn, "PowerOn" }, // 2614821827
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APoweredDoor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PoweredDoor.h" },
		{ "ModuleRelativePath", "PoweredDoor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APoweredDoor_Statics::NewProp_bIsPowered_MetaData[] = {
		{ "Category", "Door" },
		{ "Comment", "//class UMaterial* pPanelOnMaterial;\n" },
		{ "ModuleRelativePath", "PoweredDoor.h" },
		{ "ToolTip", "class UMaterial* pPanelOnMaterial;" },
	};
#endif
	void Z_Construct_UClass_APoweredDoor_Statics::NewProp_bIsPowered_SetBit(void* Obj)
	{
		((APoweredDoor*)Obj)->bIsPowered = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APoweredDoor_Statics::NewProp_bIsPowered = { "bIsPowered", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(APoweredDoor), &Z_Construct_UClass_APoweredDoor_Statics::NewProp_bIsPowered_SetBit, METADATA_PARAMS(Z_Construct_UClass_APoweredDoor_Statics::NewProp_bIsPowered_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APoweredDoor_Statics::NewProp_bIsPowered_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APoweredDoor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APoweredDoor_Statics::NewProp_bIsPowered,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APoweredDoor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APoweredDoor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APoweredDoor_Statics::ClassParams = {
		&APoweredDoor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APoweredDoor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APoweredDoor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APoweredDoor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APoweredDoor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APoweredDoor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APoweredDoor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APoweredDoor, 802638138);
	template<> TEST2_API UClass* StaticClass<APoweredDoor>()
	{
		return APoweredDoor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APoweredDoor(Z_Construct_UClass_APoweredDoor, &APoweredDoor::StaticClass, TEXT("/Script/Test2"), TEXT("APoweredDoor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APoweredDoor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
