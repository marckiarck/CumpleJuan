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
	GENERICCLASSES_API UFunction* Z_Construct_UDelegateFunction_GenericClasses_OnEventFinish__DelegateSignature();
	GENERICCLASSES_API UFunction* Z_Construct_UDelegateFunction_GenericClasses_OnEventStarts__DelegateSignature();
	GENERICCLASSES_API UFunction* Z_Construct_UDelegateFunction_GenericClasses_OnEventTick__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_GenericClasses();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_GenericClasses_OnEventStarts__DelegateSignature_Statics
	{
		struct _Script_GenericClasses_eventOnEventStarts_Parms
		{
			UGC_Event* startedEvent;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_startedEvent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_GenericClasses_OnEventStarts__DelegateSignature_Statics::NewProp_startedEvent = { "startedEvent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_GenericClasses_eventOnEventStarts_Parms, startedEvent), Z_Construct_UClass_UGC_Event_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GenericClasses_OnEventStarts__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GenericClasses_OnEventStarts__DelegateSignature_Statics::NewProp_startedEvent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GenericClasses_OnEventStarts__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventSystem/Events/GC_Event.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GenericClasses_OnEventStarts__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GenericClasses, nullptr, "OnEventStarts__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_GenericClasses_OnEventStarts__DelegateSignature_Statics::_Script_GenericClasses_eventOnEventStarts_Parms), Z_Construct_UDelegateFunction_GenericClasses_OnEventStarts__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GenericClasses_OnEventStarts__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GenericClasses_OnEventStarts__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GenericClasses_OnEventStarts__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GenericClasses_OnEventStarts__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GenericClasses_OnEventStarts__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_GenericClasses_OnEventFinish__DelegateSignature_Statics
	{
		struct _Script_GenericClasses_eventOnEventFinish_Parms
		{
			UGC_Event* finishedEvent;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_finishedEvent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_GenericClasses_OnEventFinish__DelegateSignature_Statics::NewProp_finishedEvent = { "finishedEvent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_GenericClasses_eventOnEventFinish_Parms, finishedEvent), Z_Construct_UClass_UGC_Event_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GenericClasses_OnEventFinish__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GenericClasses_OnEventFinish__DelegateSignature_Statics::NewProp_finishedEvent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GenericClasses_OnEventFinish__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventSystem/Events/GC_Event.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GenericClasses_OnEventFinish__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GenericClasses, nullptr, "OnEventFinish__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_GenericClasses_OnEventFinish__DelegateSignature_Statics::_Script_GenericClasses_eventOnEventFinish_Parms), Z_Construct_UDelegateFunction_GenericClasses_OnEventFinish__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GenericClasses_OnEventFinish__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GenericClasses_OnEventFinish__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GenericClasses_OnEventFinish__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GenericClasses_OnEventFinish__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GenericClasses_OnEventFinish__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_GenericClasses_OnEventTick__DelegateSignature_Statics
	{
		struct _Script_GenericClasses_eventOnEventTick_Parms
		{
			UGC_Event* startedEvent;
			float deltaSeconds;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_startedEvent;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_deltaSeconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_GenericClasses_OnEventTick__DelegateSignature_Statics::NewProp_startedEvent = { "startedEvent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_GenericClasses_eventOnEventTick_Parms, startedEvent), Z_Construct_UClass_UGC_Event_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_GenericClasses_OnEventTick__DelegateSignature_Statics::NewProp_deltaSeconds = { "deltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_GenericClasses_eventOnEventTick_Parms, deltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GenericClasses_OnEventTick__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GenericClasses_OnEventTick__DelegateSignature_Statics::NewProp_startedEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GenericClasses_OnEventTick__DelegateSignature_Statics::NewProp_deltaSeconds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GenericClasses_OnEventTick__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventSystem/Events/GC_Event.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GenericClasses_OnEventTick__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GenericClasses, nullptr, "OnEventTick__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_GenericClasses_OnEventTick__DelegateSignature_Statics::_Script_GenericClasses_eventOnEventTick_Parms), Z_Construct_UDelegateFunction_GenericClasses_OnEventTick__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GenericClasses_OnEventTick__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GenericClasses_OnEventTick__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GenericClasses_OnEventTick__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GenericClasses_OnEventTick__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GenericClasses_OnEventTick__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
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
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
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
		{ Z_Construct_UClass_UGC_Event, UGC_Event::StaticClass, TEXT("UGC_Event"), &Z_Registration_Info_UClass_UGC_Event, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGC_Event), 3891366209U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_EventSystem_Events_GC_Event_h_4067649575(TEXT("/Script/GenericClasses"),
		Z_CompiledInDeferFile_FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_EventSystem_Events_GC_Event_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_EventSystem_Events_GC_Event_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
