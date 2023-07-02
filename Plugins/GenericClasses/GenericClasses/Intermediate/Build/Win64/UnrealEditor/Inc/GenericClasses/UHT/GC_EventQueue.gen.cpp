// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GenericClasses/Public/EventSystem/GC_EventQueue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGC_EventQueue() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	GENERICCLASSES_API UClass* Z_Construct_UClass_UGC_EventQueue();
	GENERICCLASSES_API UClass* Z_Construct_UClass_UGC_EventQueue_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GenericClasses();
// End Cross Module References
	void UGC_EventQueue::StaticRegisterNativesUGC_EventQueue()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGC_EventQueue);
	UClass* Z_Construct_UClass_UGC_EventQueue_NoRegister()
	{
		return UGC_EventQueue::StaticClass();
	}
	struct Z_Construct_UClass_UGC_EventQueue_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGC_EventQueue_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GenericClasses,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGC_EventQueue_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EventSystem/GC_EventQueue.h" },
		{ "ModuleRelativePath", "Public/EventSystem/GC_EventQueue.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGC_EventQueue_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGC_EventQueue>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGC_EventQueue_Statics::ClassParams = {
		&UGC_EventQueue::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGC_EventQueue_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGC_EventQueue_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGC_EventQueue()
	{
		if (!Z_Registration_Info_UClass_UGC_EventQueue.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGC_EventQueue.OuterSingleton, Z_Construct_UClass_UGC_EventQueue_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGC_EventQueue.OuterSingleton;
	}
	template<> GENERICCLASSES_API UClass* StaticClass<UGC_EventQueue>()
	{
		return UGC_EventQueue::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGC_EventQueue);
	UGC_EventQueue::~UGC_EventQueue() {}
	struct Z_CompiledInDeferFile_FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_EventSystem_GC_EventQueue_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_EventSystem_GC_EventQueue_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGC_EventQueue, UGC_EventQueue::StaticClass, TEXT("UGC_EventQueue"), &Z_Registration_Info_UClass_UGC_EventQueue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGC_EventQueue), 2387524433U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_EventSystem_GC_EventQueue_h_2189229347(TEXT("/Script/GenericClasses"),
		Z_CompiledInDeferFile_FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_EventSystem_GC_EventQueue_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_EventSystem_GC_EventQueue_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
