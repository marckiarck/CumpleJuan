// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GenericClasses/Public/SingletonRegister/GC_SingletonRegister.h"
#include "Engine/Classes/Engine/DataTable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGC_SingletonRegister() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle();
	GENERICCLASSES_API UClass* Z_Construct_UClass_UGC_SingletonRegister();
	GENERICCLASSES_API UClass* Z_Construct_UClass_UGC_SingletonRegister_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GenericClasses();
// End Cross Module References
	DEFINE_FUNCTION(UGC_SingletonRegister::execGetInstance)
	{
		P_GET_OBJECT(UClass,Z_Param_objectClass);
		P_GET_OBJECT_REF(UObject,Z_Param_Out_outObject);
		P_GET_STRUCT(FDataTableRowHandle,Z_Param_singletonDataHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGC_SingletonRegister::GetInstance(Z_Param_objectClass,Z_Param_Out_outObject,Z_Param_singletonDataHandle);
		P_NATIVE_END;
	}
	void UGC_SingletonRegister::StaticRegisterNativesUGC_SingletonRegister()
	{
		UClass* Class = UGC_SingletonRegister::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetInstance", &UGC_SingletonRegister::execGetInstance },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGC_SingletonRegister_GetInstance_Statics
	{
		struct GC_SingletonRegister_eventGetInstance_Parms
		{
			TSubclassOf<UObject>  objectClass;
			UObject* outObject;
			FDataTableRowHandle singletonDataHandle;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_objectClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_outObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_singletonDataHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UGC_SingletonRegister_GetInstance_Statics::NewProp_objectClass = { "objectClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GC_SingletonRegister_eventGetInstance_Parms, objectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGC_SingletonRegister_GetInstance_Statics::NewProp_outObject = { "outObject", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GC_SingletonRegister_eventGetInstance_Parms, outObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGC_SingletonRegister_GetInstance_Statics::NewProp_singletonDataHandle = { "singletonDataHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GC_SingletonRegister_eventGetInstance_Parms, singletonDataHandle), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(nullptr, 0) }; // 2710926200
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGC_SingletonRegister_GetInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGC_SingletonRegister_GetInstance_Statics::NewProp_objectClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGC_SingletonRegister_GetInstance_Statics::NewProp_outObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGC_SingletonRegister_GetInstance_Statics::NewProp_singletonDataHandle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGC_SingletonRegister_GetInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Singleton" },
		{ "CPP_Default_singletonDataHandle", "()" },
		{ "DeterminesOutputType", "objectClass" },
		{ "DynamicOutputParam", "outObject" },
		{ "ModuleRelativePath", "Public/SingletonRegister/GC_SingletonRegister.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGC_SingletonRegister_GetInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGC_SingletonRegister, nullptr, "GetInstance", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGC_SingletonRegister_GetInstance_Statics::GC_SingletonRegister_eventGetInstance_Parms), Z_Construct_UFunction_UGC_SingletonRegister_GetInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGC_SingletonRegister_GetInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGC_SingletonRegister_GetInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGC_SingletonRegister_GetInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGC_SingletonRegister_GetInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGC_SingletonRegister_GetInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGC_SingletonRegister);
	UClass* Z_Construct_UClass_UGC_SingletonRegister_NoRegister()
	{
		return UGC_SingletonRegister::StaticClass();
	}
	struct Z_Construct_UClass_UGC_SingletonRegister_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_registeredSingletonsMap_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_registeredSingletonsMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_registeredSingletonsMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_registeredSingletonsMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGC_SingletonRegister_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GenericClasses,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGC_SingletonRegister_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGC_SingletonRegister_GetInstance, "GetInstance" }, // 1197293262
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGC_SingletonRegister_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SingletonRegister/GC_SingletonRegister.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SingletonRegister/GC_SingletonRegister.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGC_SingletonRegister_Statics::NewProp_registeredSingletonsMap_ValueProp = { "registeredSingletonsMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UGC_SingletonRegister_Statics::NewProp_registeredSingletonsMap_Key_KeyProp = { "registeredSingletonsMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGC_SingletonRegister_Statics::NewProp_registeredSingletonsMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/SingletonRegister/GC_SingletonRegister.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UGC_SingletonRegister_Statics::NewProp_registeredSingletonsMap = { "registeredSingletonsMap", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_SingletonRegister, registeredSingletonsMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGC_SingletonRegister_Statics::NewProp_registeredSingletonsMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGC_SingletonRegister_Statics::NewProp_registeredSingletonsMap_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGC_SingletonRegister_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGC_SingletonRegister_Statics::NewProp_registeredSingletonsMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGC_SingletonRegister_Statics::NewProp_registeredSingletonsMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGC_SingletonRegister_Statics::NewProp_registeredSingletonsMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGC_SingletonRegister_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGC_SingletonRegister>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGC_SingletonRegister_Statics::ClassParams = {
		&UGC_SingletonRegister::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGC_SingletonRegister_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGC_SingletonRegister_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGC_SingletonRegister_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGC_SingletonRegister_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGC_SingletonRegister()
	{
		if (!Z_Registration_Info_UClass_UGC_SingletonRegister.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGC_SingletonRegister.OuterSingleton, Z_Construct_UClass_UGC_SingletonRegister_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGC_SingletonRegister.OuterSingleton;
	}
	template<> GENERICCLASSES_API UClass* StaticClass<UGC_SingletonRegister>()
	{
		return UGC_SingletonRegister::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGC_SingletonRegister);
	UGC_SingletonRegister::~UGC_SingletonRegister() {}
	struct Z_CompiledInDeferFile_FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_SingletonRegister_GC_SingletonRegister_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_SingletonRegister_GC_SingletonRegister_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGC_SingletonRegister, UGC_SingletonRegister::StaticClass, TEXT("UGC_SingletonRegister"), &Z_Registration_Info_UClass_UGC_SingletonRegister, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGC_SingletonRegister), 1432405460U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_SingletonRegister_GC_SingletonRegister_h_1592611594(TEXT("/Script/GenericClasses"),
		Z_CompiledInDeferFile_FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_SingletonRegister_GC_SingletonRegister_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_SingletonRegister_GC_SingletonRegister_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
