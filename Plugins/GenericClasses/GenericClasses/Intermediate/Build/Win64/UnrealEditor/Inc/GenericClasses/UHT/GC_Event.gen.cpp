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
	GENERICCLASSES_API UClass* Z_Construct_UClass_UGC_PooledObjectInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GenericClasses();
// End Cross Module References
	DEFINE_FUNCTION(UGC_Event::execFinishEvent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FinishEvent();
		P_NATIVE_END;
	}
	void UGC_Event::StaticRegisterNativesUGC_Event()
	{
		UClass* Class = UGC_Event::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FinishEvent", &UGC_Event::execFinishEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGC_Event_FinishEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGC_Event_FinishEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventSystem/Events/GC_Event.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGC_Event_FinishEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGC_Event, nullptr, "FinishEvent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGC_Event_FinishEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGC_Event_FinishEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGC_Event_FinishEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGC_Event_FinishEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGC_Event);
	UClass* Z_Construct_UClass_UGC_Event_NoRegister()
	{
		return UGC_Event::StaticClass();
	}
	struct Z_Construct_UClass_UGC_Event_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_eventTickEnabled_MetaData[];
#endif
		static void NewProp_eventTickEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_eventTickEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGC_Event_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GenericClasses,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGC_Event_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGC_Event_FinishEvent, "FinishEvent" }, // 549843158
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGC_Event_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EventSystem/Events/GC_Event.h" },
		{ "ModuleRelativePath", "Public/EventSystem/Events/GC_Event.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGC_Event_Statics::NewProp_eventTickEnabled_MetaData[] = {
		{ "Category", "GC_Event" },
		{ "ModuleRelativePath", "Public/EventSystem/Events/GC_Event.h" },
	};
#endif
	void Z_Construct_UClass_UGC_Event_Statics::NewProp_eventTickEnabled_SetBit(void* Obj)
	{
		((UGC_Event*)Obj)->eventTickEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGC_Event_Statics::NewProp_eventTickEnabled = { "eventTickEnabled", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGC_Event), &Z_Construct_UClass_UGC_Event_Statics::NewProp_eventTickEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGC_Event_Statics::NewProp_eventTickEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGC_Event_Statics::NewProp_eventTickEnabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGC_Event_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGC_Event_Statics::NewProp_eventTickEnabled,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UGC_Event_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGC_PooledObjectInterface_NoRegister, (int32)VTABLE_OFFSET(UGC_Event, IGC_PooledObjectInterface), false },  // 2376592997
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGC_Event_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGC_Event>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGC_Event_Statics::ClassParams = {
		&UGC_Event::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGC_Event_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGC_Event_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A1u,
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
		{ Z_Construct_UClass_UGC_Event, UGC_Event::StaticClass, TEXT("UGC_Event"), &Z_Registration_Info_UClass_UGC_Event, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGC_Event), 3015008393U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_EventSystem_Events_GC_Event_h_1064614468(TEXT("/Script/GenericClasses"),
		Z_CompiledInDeferFile_FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_EventSystem_Events_GC_Event_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_EventSystem_Events_GC_Event_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
