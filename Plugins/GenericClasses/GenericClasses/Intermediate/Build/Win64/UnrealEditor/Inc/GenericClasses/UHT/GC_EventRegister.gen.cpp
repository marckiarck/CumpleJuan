// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GenericClasses/Public/EventSystem/GC_EventRegister.h"
#include "Engine/Classes/Engine/DataTable.h"
#include "Engine/Classes/Engine/EngineTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGC_EventRegister() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	GENERICCLASSES_API UClass* Z_Construct_UClass_UGC_Event_NoRegister();
	GENERICCLASSES_API UClass* Z_Construct_UClass_UGC_EventRegister();
	GENERICCLASSES_API UClass* Z_Construct_UClass_UGC_EventRegister_NoRegister();
	GENERICCLASSES_API UClass* Z_Construct_UClass_UGC_EventSequenceDataAsset_NoRegister();
	GENERICCLASSES_API UClass* Z_Construct_UClass_UGC_Singleton_NoRegister();
	GENERICCLASSES_API UScriptStruct* Z_Construct_UScriptStruct_FGC_EventCreationData();
	GENERICCLASSES_API UScriptStruct* Z_Construct_UScriptStruct_FGC_EventRegisterDataRow();
	UPackage* Z_Construct_UPackage__Script_GenericClasses();
// End Cross Module References

static_assert(std::is_polymorphic<FGC_EventRegisterDataRow>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FGC_EventRegisterDataRow cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GC_EventRegisterDataRow;
class UScriptStruct* FGC_EventRegisterDataRow::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GC_EventRegisterDataRow.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GC_EventRegisterDataRow.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGC_EventRegisterDataRow, Z_Construct_UPackage__Script_GenericClasses(), TEXT("GC_EventRegisterDataRow"));
	}
	return Z_Registration_Info_UScriptStruct_GC_EventRegisterDataRow.OuterSingleton;
}
template<> GENERICCLASSES_API UScriptStruct* StaticStruct<FGC_EventRegisterDataRow>()
{
	return FGC_EventRegisterDataRow::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGC_EventRegisterDataRow_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_queueDeltaTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_queueDeltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGC_EventRegisterDataRow_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EventSystem/GC_EventRegister.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGC_EventRegisterDataRow_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGC_EventRegisterDataRow>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGC_EventRegisterDataRow_Statics::NewProp_queueDeltaTime_MetaData[] = {
		{ "Category", "GC_EventRegisterDataRow" },
		{ "ModuleRelativePath", "Public/EventSystem/GC_EventRegister.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGC_EventRegisterDataRow_Statics::NewProp_queueDeltaTime = { "queueDeltaTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGC_EventRegisterDataRow, queueDeltaTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FGC_EventRegisterDataRow_Statics::NewProp_queueDeltaTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGC_EventRegisterDataRow_Statics::NewProp_queueDeltaTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGC_EventRegisterDataRow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGC_EventRegisterDataRow_Statics::NewProp_queueDeltaTime,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGC_EventRegisterDataRow_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GenericClasses,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"GC_EventRegisterDataRow",
		sizeof(FGC_EventRegisterDataRow),
		alignof(FGC_EventRegisterDataRow),
		Z_Construct_UScriptStruct_FGC_EventRegisterDataRow_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGC_EventRegisterDataRow_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGC_EventRegisterDataRow_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGC_EventRegisterDataRow_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGC_EventRegisterDataRow()
	{
		if (!Z_Registration_Info_UScriptStruct_GC_EventRegisterDataRow.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GC_EventRegisterDataRow.InnerSingleton, Z_Construct_UScriptStruct_FGC_EventRegisterDataRow_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GC_EventRegisterDataRow.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GC_EventCreationData;
class UScriptStruct* FGC_EventCreationData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GC_EventCreationData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GC_EventCreationData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGC_EventCreationData, Z_Construct_UPackage__Script_GenericClasses(), TEXT("GC_EventCreationData"));
	}
	return Z_Registration_Info_UScriptStruct_GC_EventCreationData.OuterSingleton;
}
template<> GENERICCLASSES_API UScriptStruct* StaticStruct<FGC_EventCreationData>()
{
	return FGC_EventCreationData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGC_EventCreationData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_eventClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_eventClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_launchDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_launchDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_eventSpawnHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_eventSpawnHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGC_EventCreationData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EventSystem/GC_EventRegister.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGC_EventCreationData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGC_EventCreationData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGC_EventCreationData_Statics::NewProp_eventClass_MetaData[] = {
		{ "Category", "GC_EventCreationData" },
		{ "DisplayName", "Event" },
		{ "ModuleRelativePath", "Public/EventSystem/GC_EventRegister.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FGC_EventCreationData_Statics::NewProp_eventClass = { "eventClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGC_EventCreationData, eventClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGC_Event_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGC_EventCreationData_Statics::NewProp_eventClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGC_EventCreationData_Statics::NewProp_eventClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGC_EventCreationData_Statics::NewProp_launchDelay_MetaData[] = {
		{ "Category", "GC_EventCreationData" },
		{ "ModuleRelativePath", "Public/EventSystem/GC_EventRegister.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGC_EventCreationData_Statics::NewProp_launchDelay = { "launchDelay", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGC_EventCreationData, launchDelay), METADATA_PARAMS(Z_Construct_UScriptStruct_FGC_EventCreationData_Statics::NewProp_launchDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGC_EventCreationData_Statics::NewProp_launchDelay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGC_EventCreationData_Statics::NewProp_eventSpawnHandle_MetaData[] = {
		{ "Category", "GC_EventCreationData" },
		{ "DisplayName", "Event Creation Parameters" },
		{ "ModuleRelativePath", "Public/EventSystem/GC_EventRegister.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGC_EventCreationData_Statics::NewProp_eventSpawnHandle = { "eventSpawnHandle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGC_EventCreationData, eventSpawnHandle), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FGC_EventCreationData_Statics::NewProp_eventSpawnHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGC_EventCreationData_Statics::NewProp_eventSpawnHandle_MetaData)) }; // 2710926200
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGC_EventCreationData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGC_EventCreationData_Statics::NewProp_eventClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGC_EventCreationData_Statics::NewProp_launchDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGC_EventCreationData_Statics::NewProp_eventSpawnHandle,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGC_EventCreationData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GenericClasses,
		nullptr,
		&NewStructOps,
		"GC_EventCreationData",
		sizeof(FGC_EventCreationData),
		alignof(FGC_EventCreationData),
		Z_Construct_UScriptStruct_FGC_EventCreationData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGC_EventCreationData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGC_EventCreationData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGC_EventCreationData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGC_EventCreationData()
	{
		if (!Z_Registration_Info_UScriptStruct_GC_EventCreationData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GC_EventCreationData.InnerSingleton, Z_Construct_UScriptStruct_FGC_EventCreationData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GC_EventCreationData.InnerSingleton;
	}
	DEFINE_FUNCTION(UGC_EventRegister::execOnEventFinish)
	{
		P_GET_OBJECT(UGC_Event,Z_Param_finishedEvent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEventFinish(Z_Param_finishedEvent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGC_EventRegister::execOnWorldAdded)
	{
		P_GET_OBJECT(UWorld,Z_Param_addedWorld);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnWorldAdded(Z_Param_addedWorld);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGC_EventRegister::execOnWorldDestroyed)
	{
		P_GET_OBJECT(UWorld,Z_Param_destroyedWorld);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnWorldDestroyed(Z_Param_destroyedWorld);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGC_EventRegister::execUpdateEventQueue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateEventQueue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGC_EventRegister::execRegisterEventSequence)
	{
		P_GET_OBJECT(UGC_EventSequenceDataAsset,Z_Param_sequenceData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegisterEventSequence(Z_Param_sequenceData);
		P_NATIVE_END;
	}
	void UGC_EventRegister::StaticRegisterNativesUGC_EventRegister()
	{
		UClass* Class = UGC_EventRegister::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnEventFinish", &UGC_EventRegister::execOnEventFinish },
			{ "OnWorldAdded", &UGC_EventRegister::execOnWorldAdded },
			{ "OnWorldDestroyed", &UGC_EventRegister::execOnWorldDestroyed },
			{ "RegisterEventSequence", &UGC_EventRegister::execRegisterEventSequence },
			{ "UpdateEventQueue", &UGC_EventRegister::execUpdateEventQueue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGC_EventRegister_OnEventFinish_Statics
	{
		struct GC_EventRegister_eventOnEventFinish_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGC_EventRegister_OnEventFinish_Statics::NewProp_finishedEvent = { "finishedEvent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GC_EventRegister_eventOnEventFinish_Parms, finishedEvent), Z_Construct_UClass_UGC_Event_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGC_EventRegister_OnEventFinish_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGC_EventRegister_OnEventFinish_Statics::NewProp_finishedEvent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGC_EventRegister_OnEventFinish_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventSystem/GC_EventRegister.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGC_EventRegister_OnEventFinish_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGC_EventRegister, nullptr, "OnEventFinish", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGC_EventRegister_OnEventFinish_Statics::GC_EventRegister_eventOnEventFinish_Parms), Z_Construct_UFunction_UGC_EventRegister_OnEventFinish_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGC_EventRegister_OnEventFinish_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGC_EventRegister_OnEventFinish_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGC_EventRegister_OnEventFinish_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGC_EventRegister_OnEventFinish()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGC_EventRegister_OnEventFinish_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGC_EventRegister_OnWorldAdded_Statics
	{
		struct GC_EventRegister_eventOnWorldAdded_Parms
		{
			UWorld* addedWorld;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_addedWorld;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGC_EventRegister_OnWorldAdded_Statics::NewProp_addedWorld = { "addedWorld", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GC_EventRegister_eventOnWorldAdded_Parms, addedWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGC_EventRegister_OnWorldAdded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGC_EventRegister_OnWorldAdded_Statics::NewProp_addedWorld,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGC_EventRegister_OnWorldAdded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventSystem/GC_EventRegister.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGC_EventRegister_OnWorldAdded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGC_EventRegister, nullptr, "OnWorldAdded", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGC_EventRegister_OnWorldAdded_Statics::GC_EventRegister_eventOnWorldAdded_Parms), Z_Construct_UFunction_UGC_EventRegister_OnWorldAdded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGC_EventRegister_OnWorldAdded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGC_EventRegister_OnWorldAdded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGC_EventRegister_OnWorldAdded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGC_EventRegister_OnWorldAdded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGC_EventRegister_OnWorldAdded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGC_EventRegister_OnWorldDestroyed_Statics
	{
		struct GC_EventRegister_eventOnWorldDestroyed_Parms
		{
			UWorld* destroyedWorld;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_destroyedWorld;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGC_EventRegister_OnWorldDestroyed_Statics::NewProp_destroyedWorld = { "destroyedWorld", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GC_EventRegister_eventOnWorldDestroyed_Parms, destroyedWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGC_EventRegister_OnWorldDestroyed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGC_EventRegister_OnWorldDestroyed_Statics::NewProp_destroyedWorld,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGC_EventRegister_OnWorldDestroyed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventSystem/GC_EventRegister.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGC_EventRegister_OnWorldDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGC_EventRegister, nullptr, "OnWorldDestroyed", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGC_EventRegister_OnWorldDestroyed_Statics::GC_EventRegister_eventOnWorldDestroyed_Parms), Z_Construct_UFunction_UGC_EventRegister_OnWorldDestroyed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGC_EventRegister_OnWorldDestroyed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGC_EventRegister_OnWorldDestroyed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGC_EventRegister_OnWorldDestroyed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGC_EventRegister_OnWorldDestroyed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGC_EventRegister_OnWorldDestroyed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGC_EventRegister_RegisterEventSequence_Statics
	{
		struct GC_EventRegister_eventRegisterEventSequence_Parms
		{
			UGC_EventSequenceDataAsset* sequenceData;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_sequenceData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGC_EventRegister_RegisterEventSequence_Statics::NewProp_sequenceData = { "sequenceData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GC_EventRegister_eventRegisterEventSequence_Parms, sequenceData), Z_Construct_UClass_UGC_EventSequenceDataAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGC_EventRegister_RegisterEventSequence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGC_EventRegister_RegisterEventSequence_Statics::NewProp_sequenceData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGC_EventRegister_RegisterEventSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "EventRegister" },
		{ "ModuleRelativePath", "Public/EventSystem/GC_EventRegister.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGC_EventRegister_RegisterEventSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGC_EventRegister, nullptr, "RegisterEventSequence", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGC_EventRegister_RegisterEventSequence_Statics::GC_EventRegister_eventRegisterEventSequence_Parms), Z_Construct_UFunction_UGC_EventRegister_RegisterEventSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGC_EventRegister_RegisterEventSequence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGC_EventRegister_RegisterEventSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGC_EventRegister_RegisterEventSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGC_EventRegister_RegisterEventSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGC_EventRegister_RegisterEventSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGC_EventRegister_UpdateEventQueue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGC_EventRegister_UpdateEventQueue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventSystem/GC_EventRegister.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGC_EventRegister_UpdateEventQueue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGC_EventRegister, nullptr, "UpdateEventQueue", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGC_EventRegister_UpdateEventQueue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGC_EventRegister_UpdateEventQueue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGC_EventRegister_UpdateEventQueue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGC_EventRegister_UpdateEventQueue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGC_EventRegister);
	UClass* Z_Construct_UClass_UGC_EventRegister_NoRegister()
	{
		return UGC_EventRegister::StaticClass();
	}
	struct Z_Construct_UClass_UGC_EventRegister_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_queueTimerHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_queueTimerHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_timerWorld_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_timerWorld;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_launchedEvents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_launchedEvents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_launchedEvents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGC_EventRegister_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GenericClasses,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGC_EventRegister_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGC_EventRegister_OnEventFinish, "OnEventFinish" }, // 3162832694
		{ &Z_Construct_UFunction_UGC_EventRegister_OnWorldAdded, "OnWorldAdded" }, // 2197204861
		{ &Z_Construct_UFunction_UGC_EventRegister_OnWorldDestroyed, "OnWorldDestroyed" }, // 2261130211
		{ &Z_Construct_UFunction_UGC_EventRegister_RegisterEventSequence, "RegisterEventSequence" }, // 2735608764
		{ &Z_Construct_UFunction_UGC_EventRegister_UpdateEventQueue, "UpdateEventQueue" }, // 2356536977
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGC_EventRegister_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EventSystem/GC_EventRegister.h" },
		{ "ModuleRelativePath", "Public/EventSystem/GC_EventRegister.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGC_EventRegister_Statics::NewProp_queueTimerHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/EventSystem/GC_EventRegister.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGC_EventRegister_Statics::NewProp_queueTimerHandle = { "queueTimerHandle", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_EventRegister, queueTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_UGC_EventRegister_Statics::NewProp_queueTimerHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGC_EventRegister_Statics::NewProp_queueTimerHandle_MetaData)) }; // 4017759265
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGC_EventRegister_Statics::NewProp_timerWorld_MetaData[] = {
		{ "ModuleRelativePath", "Public/EventSystem/GC_EventRegister.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGC_EventRegister_Statics::NewProp_timerWorld = { "timerWorld", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_EventRegister, timerWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGC_EventRegister_Statics::NewProp_timerWorld_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGC_EventRegister_Statics::NewProp_timerWorld_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGC_EventRegister_Statics::NewProp_launchedEvents_Inner = { "launchedEvents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UGC_Event_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGC_EventRegister_Statics::NewProp_launchedEvents_MetaData[] = {
		{ "ModuleRelativePath", "Public/EventSystem/GC_EventRegister.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGC_EventRegister_Statics::NewProp_launchedEvents = { "launchedEvents", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_EventRegister, launchedEvents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGC_EventRegister_Statics::NewProp_launchedEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGC_EventRegister_Statics::NewProp_launchedEvents_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGC_EventRegister_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGC_EventRegister_Statics::NewProp_queueTimerHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGC_EventRegister_Statics::NewProp_timerWorld,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGC_EventRegister_Statics::NewProp_launchedEvents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGC_EventRegister_Statics::NewProp_launchedEvents,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UGC_EventRegister_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGC_Singleton_NoRegister, (int32)VTABLE_OFFSET(UGC_EventRegister, IGC_Singleton), false },  // 768756457
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGC_EventRegister_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGC_EventRegister>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGC_EventRegister_Statics::ClassParams = {
		&UGC_EventRegister::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGC_EventRegister_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGC_EventRegister_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGC_EventRegister_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGC_EventRegister_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGC_EventRegister()
	{
		if (!Z_Registration_Info_UClass_UGC_EventRegister.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGC_EventRegister.OuterSingleton, Z_Construct_UClass_UGC_EventRegister_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGC_EventRegister.OuterSingleton;
	}
	template<> GENERICCLASSES_API UClass* StaticClass<UGC_EventRegister>()
	{
		return UGC_EventRegister::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGC_EventRegister);
	UGC_EventRegister::~UGC_EventRegister() {}
	struct Z_CompiledInDeferFile_FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_EventSystem_GC_EventRegister_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_EventSystem_GC_EventRegister_h_Statics::ScriptStructInfo[] = {
		{ FGC_EventRegisterDataRow::StaticStruct, Z_Construct_UScriptStruct_FGC_EventRegisterDataRow_Statics::NewStructOps, TEXT("GC_EventRegisterDataRow"), &Z_Registration_Info_UScriptStruct_GC_EventRegisterDataRow, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGC_EventRegisterDataRow), 3240002256U) },
		{ FGC_EventCreationData::StaticStruct, Z_Construct_UScriptStruct_FGC_EventCreationData_Statics::NewStructOps, TEXT("GC_EventCreationData"), &Z_Registration_Info_UScriptStruct_GC_EventCreationData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGC_EventCreationData), 1001030279U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_EventSystem_GC_EventRegister_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGC_EventRegister, UGC_EventRegister::StaticClass, TEXT("UGC_EventRegister"), &Z_Registration_Info_UClass_UGC_EventRegister, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGC_EventRegister), 992175154U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_EventSystem_GC_EventRegister_h_1001898851(TEXT("/Script/GenericClasses"),
		Z_CompiledInDeferFile_FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_EventSystem_GC_EventRegister_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_EventSystem_GC_EventRegister_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_EventSystem_GC_EventRegister_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_EventSystem_GC_EventRegister_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
