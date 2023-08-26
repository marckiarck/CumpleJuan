// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GenericClasses/Public/EventSystem/Events/GC_BlueprintEvent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGC_BlueprintEvent() {}
// Cross Module References
	GENERICCLASSES_API UClass* Z_Construct_UClass_UGC_BlueprintEvent();
	GENERICCLASSES_API UClass* Z_Construct_UClass_UGC_BlueprintEvent_NoRegister();
	GENERICCLASSES_API UClass* Z_Construct_UClass_UGC_Event();
	UPackage* Z_Construct_UPackage__Script_GenericClasses();
// End Cross Module References
	DEFINE_FUNCTION(UGC_BlueprintEvent::execOnEventTickBP)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_deltaSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEventTickBP_Implementation(Z_Param_deltaSeconds);
		P_NATIVE_END;
	}
	struct GC_BlueprintEvent_eventOnEventTickBP_Parms
	{
		float deltaSeconds;
	};
	static FName NAME_UGC_BlueprintEvent_OnEventFinishBP = FName(TEXT("OnEventFinishBP"));
	void UGC_BlueprintEvent::OnEventFinishBP()
	{
		ProcessEvent(FindFunctionChecked(NAME_UGC_BlueprintEvent_OnEventFinishBP),NULL);
	}
	static FName NAME_UGC_BlueprintEvent_OnEventStartedBP = FName(TEXT("OnEventStartedBP"));
	void UGC_BlueprintEvent::OnEventStartedBP()
	{
		ProcessEvent(FindFunctionChecked(NAME_UGC_BlueprintEvent_OnEventStartedBP),NULL);
	}
	static FName NAME_UGC_BlueprintEvent_OnEventTickBP = FName(TEXT("OnEventTickBP"));
	void UGC_BlueprintEvent::OnEventTickBP(float deltaSeconds)
	{
		GC_BlueprintEvent_eventOnEventTickBP_Parms Parms;
		Parms.deltaSeconds=deltaSeconds;
		ProcessEvent(FindFunctionChecked(NAME_UGC_BlueprintEvent_OnEventTickBP),&Parms);
	}
	void UGC_BlueprintEvent::StaticRegisterNativesUGC_BlueprintEvent()
	{
		UClass* Class = UGC_BlueprintEvent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnEventTickBP", &UGC_BlueprintEvent::execOnEventTickBP },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGC_BlueprintEvent_OnEventFinishBP_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGC_BlueprintEvent_OnEventFinishBP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Event" },
		{ "DisplayName", "OnEventFinish" },
		{ "ModuleRelativePath", "Public/EventSystem/Events/GC_BlueprintEvent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGC_BlueprintEvent_OnEventFinishBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGC_BlueprintEvent, nullptr, "OnEventFinishBP", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGC_BlueprintEvent_OnEventFinishBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGC_BlueprintEvent_OnEventFinishBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGC_BlueprintEvent_OnEventFinishBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGC_BlueprintEvent_OnEventFinishBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGC_BlueprintEvent_OnEventStartedBP_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGC_BlueprintEvent_OnEventStartedBP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Event" },
		{ "DisplayName", "OnEventStarted" },
		{ "ModuleRelativePath", "Public/EventSystem/Events/GC_BlueprintEvent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGC_BlueprintEvent_OnEventStartedBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGC_BlueprintEvent, nullptr, "OnEventStartedBP", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGC_BlueprintEvent_OnEventStartedBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGC_BlueprintEvent_OnEventStartedBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGC_BlueprintEvent_OnEventStartedBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGC_BlueprintEvent_OnEventStartedBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGC_BlueprintEvent_OnEventTickBP_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_deltaSeconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGC_BlueprintEvent_OnEventTickBP_Statics::NewProp_deltaSeconds = { "deltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GC_BlueprintEvent_eventOnEventTickBP_Parms, deltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGC_BlueprintEvent_OnEventTickBP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGC_BlueprintEvent_OnEventTickBP_Statics::NewProp_deltaSeconds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGC_BlueprintEvent_OnEventTickBP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Event" },
		{ "DisplayName", "OnEventTick" },
		{ "ModuleRelativePath", "Public/EventSystem/Events/GC_BlueprintEvent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGC_BlueprintEvent_OnEventTickBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGC_BlueprintEvent, nullptr, "OnEventTickBP", nullptr, nullptr, sizeof(GC_BlueprintEvent_eventOnEventTickBP_Parms), Z_Construct_UFunction_UGC_BlueprintEvent_OnEventTickBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGC_BlueprintEvent_OnEventTickBP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGC_BlueprintEvent_OnEventTickBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGC_BlueprintEvent_OnEventTickBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGC_BlueprintEvent_OnEventTickBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGC_BlueprintEvent_OnEventTickBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGC_BlueprintEvent);
	UClass* Z_Construct_UClass_UGC_BlueprintEvent_NoRegister()
	{
		return UGC_BlueprintEvent::StaticClass();
	}
	struct Z_Construct_UClass_UGC_BlueprintEvent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGC_BlueprintEvent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGC_Event,
		(UObject* (*)())Z_Construct_UPackage__Script_GenericClasses,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGC_BlueprintEvent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGC_BlueprintEvent_OnEventFinishBP, "OnEventFinishBP" }, // 703096016
		{ &Z_Construct_UFunction_UGC_BlueprintEvent_OnEventStartedBP, "OnEventStartedBP" }, // 346361801
		{ &Z_Construct_UFunction_UGC_BlueprintEvent_OnEventTickBP, "OnEventTickBP" }, // 1436917005
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGC_BlueprintEvent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EventSystem/Events/GC_BlueprintEvent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EventSystem/Events/GC_BlueprintEvent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGC_BlueprintEvent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGC_BlueprintEvent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGC_BlueprintEvent_Statics::ClassParams = {
		&UGC_BlueprintEvent::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGC_BlueprintEvent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGC_BlueprintEvent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGC_BlueprintEvent()
	{
		if (!Z_Registration_Info_UClass_UGC_BlueprintEvent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGC_BlueprintEvent.OuterSingleton, Z_Construct_UClass_UGC_BlueprintEvent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGC_BlueprintEvent.OuterSingleton;
	}
	template<> GENERICCLASSES_API UClass* StaticClass<UGC_BlueprintEvent>()
	{
		return UGC_BlueprintEvent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGC_BlueprintEvent);
	UGC_BlueprintEvent::~UGC_BlueprintEvent() {}
	struct Z_CompiledInDeferFile_FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_EventSystem_Events_GC_BlueprintEvent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_EventSystem_Events_GC_BlueprintEvent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGC_BlueprintEvent, UGC_BlueprintEvent::StaticClass, TEXT("UGC_BlueprintEvent"), &Z_Registration_Info_UClass_UGC_BlueprintEvent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGC_BlueprintEvent), 2574575746U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_EventSystem_Events_GC_BlueprintEvent_h_3771942907(TEXT("/Script/GenericClasses"),
		Z_CompiledInDeferFile_FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_EventSystem_Events_GC_BlueprintEvent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_EventSystem_Events_GC_BlueprintEvent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
