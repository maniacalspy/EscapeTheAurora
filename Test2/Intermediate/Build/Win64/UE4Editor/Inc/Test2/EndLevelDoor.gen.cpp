// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "EndLevelDoor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEndLevelDoor() {}
// Cross Module References
	TEST2_API UClass* Z_Construct_UClass_AEndLevelDoor_NoRegister();
	TEST2_API UClass* Z_Construct_UClass_AEndLevelDoor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Test2();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	void AEndLevelDoor::StaticRegisterNativesAEndLevelDoor()
	{
	}
	UClass* Z_Construct_UClass_AEndLevelDoor_NoRegister()
	{
		return AEndLevelDoor::StaticClass();
	}
	UClass* Z_Construct_UClass_AEndLevelDoor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_Test2,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "EndLevelDoor.h" },
				{ "ModuleRelativePath", "EndLevelDoor.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoorPanelSkeleton_MetaData[] = {
				{ "Category", "SkeletalMesh" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "EndLevelDoor.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DoorPanelSkeleton = { UE4CodeGen_Private::EPropertyClass::Object, "DoorPanelSkeleton", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000a0009, 1, nullptr, STRUCT_OFFSET(AEndLevelDoor, DoorPanelSkeleton), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(NewProp_DoorPanelSkeleton_MetaData, ARRAY_COUNT(NewProp_DoorPanelSkeleton_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoorFrameSkeleton_MetaData[] = {
				{ "Category", "SkeletalMesh" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "EndLevelDoor.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DoorFrameSkeleton = { UE4CodeGen_Private::EPropertyClass::Object, "DoorFrameSkeleton", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000a0009, 1, nullptr, STRUCT_OFFSET(AEndLevelDoor, DoorFrameSkeleton), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(NewProp_DoorFrameSkeleton_MetaData, ARRAY_COUNT(NewProp_DoorFrameSkeleton_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DoorPanelSkeleton,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DoorFrameSkeleton,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AEndLevelDoor>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AEndLevelDoor::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEndLevelDoor, 4144913387);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEndLevelDoor(Z_Construct_UClass_AEndLevelDoor, &AEndLevelDoor::StaticClass, TEXT("/Script/Test2"), TEXT("AEndLevelDoor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEndLevelDoor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
