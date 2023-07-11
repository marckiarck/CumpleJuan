// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GenericClasses/Public/EventSystem/Events/GC_Event.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGC_Event() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	GENERICCLASSES_API UClass* Z_Construct_UClass_UGC_Event();
	GENERICCLASSES_API UClass* Z_Construct_UClass_UGC_Event_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GenericClasses();
// End Cross Module References
	void UGC_Event::StaticRegisterNativesUGC_Event()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGC_Event);
	UClass* Z_Construct_UClass_UGC_Event_NoRegister()
	{
		return UGC_Event::StaticClass();
	}
	struct Z_Construct_UClass_UGC_Event_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGC_Event_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GenericClasses,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGC_Event_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EventSystem/Events/GC_Event.h" },
		{ "ModuleRelativePath", "Public/EventSystem/Events/GC_Event.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGC_Event_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGC_Event>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGC_Event_Statics::ClassParams = {
		&UGC_Event::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGC_Event_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGC_Event_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGC_Event()
	{
		if (!Z_Registration_Info_UClass_UGC_Event.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGC_Event.OuterSingleton, Z_Construct_UClass_UGC_Event_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGC_Event.OuterSingleton;
	}
	template<> GENERICCLASSES_API UClass* StaticClass<UGC_Event>()
	{
		return UGC_Event::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGC_Event);
	UGC_Event::~UGC_Event() {}
	struct Z_CompiledInDeferFile_FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_EventSystem_Events_GC_Event_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_EventSystem_Events_GC_Event_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGC_Event, UGC_Event::StaticClass, TEXT("UGC_Event"), &Z_Registration_Info_UClass_UGC_Event, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGC_Event), 844911674U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_EventSystem_Events_GC_Event_h_3597603843(TEXT("/Script/GenericClasses"),
		Z_CompiledInDeferFile_FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_EventSystem_Events_GC_Event_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_EventSystem_Events_GC_Event_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
