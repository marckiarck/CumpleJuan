// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GenericClasses/Public/ObjectPooler/GC_ObjectPool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGC_ObjectPool() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	GENERICCLASSES_API UClass* Z_Construct_UClass_UGC_ObjectPool();
	GENERICCLASSES_API UClass* Z_Construct_UClass_UGC_ObjectPool_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GenericClasses();
// End Cross Module References
	void UGC_ObjectPool::StaticRegisterNativesUGC_ObjectPool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGC_ObjectPool);
	UClass* Z_Construct_UClass_UGC_ObjectPool_NoRegister()
	{
		return UGC_ObjectPool::StaticClass();
	}
	struct Z_Construct_UClass_UGC_ObjectPool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_usedObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_usedObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_usedObjects;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_freeObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_freeObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_freeObjects;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGC_ObjectPool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GenericClasses,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGC_ObjectPool_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ObjectPooler/GC_ObjectPool.h" },
		{ "ModuleRelativePath", "Public/ObjectPooler/GC_ObjectPool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGC_ObjectPool_Statics::NewProp_usedObjects_Inner = { "usedObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGC_ObjectPool_Statics::NewProp_usedObjects_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectPooler/GC_ObjectPool.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGC_ObjectPool_Statics::NewProp_usedObjects = { "usedObjects", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_ObjectPool, usedObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGC_ObjectPool_Statics::NewProp_usedObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGC_ObjectPool_Statics::NewProp_usedObjects_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGC_ObjectPool_Statics::NewProp_freeObjects_Inner = { "freeObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGC_ObjectPool_Statics::NewProp_freeObjects_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectPooler/GC_ObjectPool.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGC_ObjectPool_Statics::NewProp_freeObjects = { "freeObjects", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_ObjectPool, freeObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGC_ObjectPool_Statics::NewProp_freeObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGC_ObjectPool_Statics::NewProp_freeObjects_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGC_ObjectPool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGC_ObjectPool_Statics::NewProp_usedObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGC_ObjectPool_Statics::NewProp_usedObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGC_ObjectPool_Statics::NewProp_freeObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGC_ObjectPool_Statics::NewProp_freeObjects,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGC_ObjectPool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGC_ObjectPool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGC_ObjectPool_Statics::ClassParams = {
		&UGC_ObjectPool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGC_ObjectPool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGC_ObjectPool_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGC_ObjectPool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGC_ObjectPool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGC_ObjectPool()
	{
		if (!Z_Registration_Info_UClass_UGC_ObjectPool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGC_ObjectPool.OuterSingleton, Z_Construct_UClass_UGC_ObjectPool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGC_ObjectPool.OuterSingleton;
	}
	template<> GENERICCLASSES_API UClass* StaticClass<UGC_ObjectPool>()
	{
		return UGC_ObjectPool::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGC_ObjectPool);
	UGC_ObjectPool::~UGC_ObjectPool() {}
	struct Z_CompiledInDeferFile_FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_ObjectPooler_GC_ObjectPool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_ObjectPooler_GC_ObjectPool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGC_ObjectPool, UGC_ObjectPool::StaticClass, TEXT("UGC_ObjectPool"), &Z_Registration_Info_UClass_UGC_ObjectPool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGC_ObjectPool), 1286803306U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_ObjectPooler_GC_ObjectPool_h_3161297196(TEXT("/Script/GenericClasses"),
		Z_CompiledInDeferFile_FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_ObjectPooler_GC_ObjectPool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_ObjectPooler_GC_ObjectPool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
