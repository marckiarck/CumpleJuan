// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GenericClasses/Public/EventSystem/GC_EventRegister.h"
#include "Engine/Classes/Engine/EngineTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGC_EventRegister() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	GENERICCLASSES_API UClass* Z_Construct_UClass_AGC_EventRegister();
	GENERICCLASSES_API UClass* Z_Construct_UClass_AGC_EventRegister_NoRegister();
	GENERICCLASSES_API UClass* Z_Construct_UClass_UGC_PooledObjectInterface_NoRegister();
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
	DEFINE_FUNCTION(AGC_EventRegister::execUpdateEventQueue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateEventQueue();
		P_NATIVE_END;
	}
	void AGC_EventRegister::StaticRegisterNativesAGC_EventRegister()
	{
		UClass* Class = AGC_EventRegister::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateEventQueue", &AGC_EventRegister::execUpdateEventQueue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGC_EventRegister_UpdateEventQueue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGC_EventRegister_UpdateEventQueue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventSystem/GC_EventRegister.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGC_EventRegister_UpdateEventQueue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGC_EventRegister, nullptr, "UpdateEventQueue", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGC_EventRegister_UpdateEventQueue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGC_EventRegister_UpdateEventQueue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGC_EventRegister_UpdateEventQueue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGC_EventRegister_UpdateEventQueue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGC_EventRegister);
	UClass* Z_Construct_UClass_AGC_EventRegister_NoRegister()
	{
		return AGC_EventRegister::StaticClass();
	}
	struct Z_Construct_UClass_AGC_EventRegister_Statics
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGC_EventRegister_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GenericClasses,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGC_EventRegister_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGC_EventRegister_UpdateEventQueue, "UpdateEventQueue" }, // 3669965310
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGC_EventRegister_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EventSystem/GC_EventRegister.h" },
		{ "ModuleRelativePath", "Public/EventSystem/GC_EventRegister.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGC_EventRegister_Statics::NewProp_queueTimerHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/EventSystem/GC_EventRegister.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGC_EventRegister_Statics::NewProp_queueTimerHandle = { "queueTimerHandle", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGC_EventRegister, queueTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_AGC_EventRegister_Statics::NewProp_queueTimerHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGC_EventRegister_Statics::NewProp_queueTimerHandle_MetaData)) }; // 4017759265
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGC_EventRegister_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGC_EventRegister_Statics::NewProp_queueTimerHandle,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AGC_EventRegister_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGC_PooledObjectInterface_NoRegister, (int32)VTABLE_OFFSET(AGC_EventRegister, IGC_PooledObjectInterface), false },  // 2376592997
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGC_EventRegister_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGC_EventRegister>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGC_EventRegister_Statics::ClassParams = {
		&AGC_EventRegister::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGC_EventRegister_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGC_EventRegister_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGC_EventRegister_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGC_EventRegister_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGC_EventRegister()
	{
		if (!Z_Registration_Info_UClass_AGC_EventRegister.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGC_EventRegister.OuterSingleton, Z_Construct_UClass_AGC_EventRegister_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGC_EventRegister.OuterSingleton;
	}
	template<> GENERICCLASSES_API UClass* StaticClass<AGC_EventRegister>()
	{
		return AGC_EventRegister::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGC_EventRegister);
	AGC_EventRegister::~AGC_EventRegister() {}
	struct Z_CompiledInDeferFile_FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_EventSystem_GC_EventRegister_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_EventSystem_GC_EventRegister_h_Statics::ScriptStructInfo[] = {
		{ FGC_EventRegisterDataRow::StaticStruct, Z_Construct_UScriptStruct_FGC_EventRegisterDataRow_Statics::NewStructOps, TEXT("GC_EventRegisterDataRow"), &Z_Registration_Info_UScriptStruct_GC_EventRegisterDataRow, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGC_EventRegisterDataRow), 3240002256U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_EventSystem_GC_EventRegister_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGC_EventRegister, AGC_EventRegister::StaticClass, TEXT("AGC_EventRegister"), &Z_Registration_Info_UClass_AGC_EventRegister, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGC_EventRegister), 3640053546U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_EventSystem_GC_EventRegister_h_2873701401(TEXT("/Script/GenericClasses"),
		Z_CompiledInDeferFile_FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_EventSystem_GC_EventRegister_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_EventSystem_GC_EventRegister_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_EventSystem_GC_EventRegister_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_EventSystem_GC_EventRegister_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
