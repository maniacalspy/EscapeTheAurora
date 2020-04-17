// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Test2/DoorBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDoorBase() {}
// Cross Module References
	TEST2_API UClass* Z_Construct_UClass_ADoorBase_NoRegister();
	TEST2_API UClass* Z_Construct_UClass_ADoorBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Test2();
	TEST2_API UFunction* Z_Construct_UFunction_ADoorBase_CloseDoor();
	TEST2_API UFunction* Z_Construct_UFunction_ADoorBase_OpenDoor();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	static FName NAME_ADoorBase_CloseDoor = FName(TEXT("CloseDoor"));
	void ADoorBase::CloseDoor()
	{
		ProcessEvent(FindFunctionChecked(NAME_ADoorBase_CloseDoor),NULL);
	}
	static FName NAME_ADoorBase_OpenDoor = FName(TEXT("OpenDoor"));
	void ADoorBase::OpenDoor()
	{
		ProcessEvent(FindFunctionChecked(NAME_ADoorBase_OpenDoor),NULL);
	}
	void ADoorBase::StaticRegisterNativesADoorBase()
	{
		UClass* Class = ADoorBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CloseDoor", &ADoorBase::execCloseDoor },
			{ "OpenDoor", &ADoorBase::execOpenDoor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADoorBase_CloseDoor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADoorBase_CloseDoor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Door" },
		{ "ModuleRelativePath", "DoorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADoorBase_CloseDoor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADoorBase, nullptr, "CloseDoor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADoorBase_CloseDoor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADoorBase_CloseDoor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADoorBase_CloseDoor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADoorBase_CloseDoor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADoorBase_OpenDoor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADoorBase_OpenDoor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Door" },
		{ "ModuleRelativePath", "DoorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADoorBase_OpenDoor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADoorBase, nullptr, "OpenDoor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADoorBase_OpenDoor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADoorBase_OpenDoor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADoorBase_OpenDoor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADoorBase_OpenDoor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ADoorBase_NoRegister()
	{
		return ADoorBase::StaticClass();
	}
	struct Z_Construct_UClass_ADoorBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsOpen_MetaData[];
#endif
		static void NewProp_bIsOpen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsOpen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pOpenSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pOpenSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoorPanelSkeleton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DoorPanelSkeleton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoorFrameSkeleton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DoorFrameSkeleton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADoorBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Test2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADoorBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADoorBase_CloseDoor, "CloseDoor" }, // 1554834207
		{ &Z_Construct_UFunction_ADoorBase_OpenDoor, "OpenDoor" }, // 2735904258
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoorBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DoorBase.h" },
		{ "ModuleRelativePath", "DoorBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoorBase_Statics::NewProp_bIsOpen_MetaData[] = {
		{ "Category", "Door" },
		{ "Comment", "//UPROPERTY(EditAnywhere, BluePrintReadWrite, Category = \"Door\")\n//\x09uint32 bIsPowered : 1;\n" },
		{ "ModuleRelativePath", "DoorBase.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, BluePrintReadWrite, Category = \"Door\")\n       uint32 bIsPowered : 1;" },
	};
#endif
	void Z_Construct_UClass_ADoorBase_Statics::NewProp_bIsOpen_SetBit(void* Obj)
	{
		((ADoorBase*)Obj)->bIsOpen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADoorBase_Statics::NewProp_bIsOpen = { "bIsOpen", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ADoorBase), &Z_Construct_UClass_ADoorBase_Statics::NewProp_bIsOpen_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADoorBase_Statics::NewProp_bIsOpen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADoorBase_Statics::NewProp_bIsOpen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoorBase_Statics::NewProp_pOpenSound_MetaData[] = {
		{ "Category", "Audio" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DoorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoorBase_Statics::NewProp_pOpenSound = { "pOpenSound", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADoorBase, pOpenSound), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADoorBase_Statics::NewProp_pOpenSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADoorBase_Statics::NewProp_pOpenSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoorBase_Statics::NewProp_DoorPanelSkeleton_MetaData[] = {
		{ "Category", "SkeletalMesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DoorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoorBase_Statics::NewProp_DoorPanelSkeleton = { "DoorPanelSkeleton", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADoorBase, DoorPanelSkeleton), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADoorBase_Statics::NewProp_DoorPanelSkeleton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADoorBase_Statics::NewProp_DoorPanelSkeleton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoorBase_Statics::NewProp_DoorFrameSkeleton_MetaData[] = {
		{ "Category", "SkeletalMesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DoorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoorBase_Statics::NewProp_DoorFrameSkeleton = { "DoorFrameSkeleton", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADoorBase, DoorFrameSkeleton), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADoorBase_Statics::NewProp_DoorFrameSkeleton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADoorBase_Statics::NewProp_DoorFrameSkeleton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADoorBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoorBase_Statics::NewProp_bIsOpen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoorBase_Statics::NewProp_pOpenSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoorBase_Statics::NewProp_DoorPanelSkeleton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoorBase_Statics::NewProp_DoorFrameSkeleton,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADoorBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADoorBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADoorBase_Statics::ClassParams = {
		&ADoorBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADoorBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADoorBase_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ADoorBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADoorBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADoorBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADoorBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADoorBase, 19744345);
	template<> TEST2_API UClass* StaticClass<ADoorBase>()
	{
		return ADoorBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADoorBase(Z_Construct_UClass_ADoorBase, &ADoorBase::StaticClass, TEXT("/Script/Test2"), TEXT("ADoorBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADoorBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
