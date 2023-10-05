// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GenericClasses/Public/SingletonRegister/GC_Singleton.h"
#include "Engine/Classes/Engine/DataTable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGC_Singleton() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle();
	GENERICCLASSES_API UClass* Z_Construct_UClass_UGC_Singleton();
	GENERICCLASSES_API UClass* Z_Construct_UClass_UGC_Singleton_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GenericClasses();
// End Cross Module References
	DEFINE_FUNCTION(IGC_Singleton::execOnGetInstance)
	{
		P_GET_STRUCT(FDataTableRowHandle,Z_Param_singletonDataHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnGetInstance_Implementation(Z_Param_singletonDataHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IGC_Singleton::execOnInstanceCreated)
	{
		P_GET_STRUCT(FDataTableRowHandle,Z_Param_singletonDataHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInstanceCreated_Implementation(Z_Param_singletonDataHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IGC_Singleton::execOnResetInstance)
	{
		P_GET_STRUCT(FDataTableRowHandle,Z_Param_singletonDataHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnResetInstance_Implementation(Z_Param_singletonDataHandle);
		P_NATIVE_END;
	}
	struct GC_Singleton_eventOnGetInstance_Parms
	{
		FDataTableRowHandle singletonDataHandle;
	};
	struct GC_Singleton_eventOnInstanceCreated_Parms
	{
		FDataTableRowHandle singletonDataHandle;
	};
	struct GC_Singleton_eventOnResetInstance_Parms
	{
		FDataTableRowHandle singletonDataHandle;
	};
	void IGC_Singleton::OnGetInstance(FDataTableRowHandle singletonDataHandle)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnGetInstance instead.");
	}
	void IGC_Singleton::OnInstanceCreated(FDataTableRowHandle singletonDataHandle)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnInstanceCreated instead.");
	}
	void IGC_Singleton::OnResetInstance(FDataTableRowHandle singletonDataHandle)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnResetInstance instead.");
	}
	void UGC_Singleton::StaticRegisterNativesUGC_Singleton()
	{
		UClass* Class = UGC_Singleton::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnGetInstance", &IGC_Singleton::execOnGetInstance },
			{ "OnInstanceCreated", &IGC_Singleton::execOnInstanceCreated },
			{ "OnResetInstance", &IGC_Singleton::execOnResetInstance },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGC_Singleton_OnGetInstance_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_singletonDataHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGC_Singleton_OnGetInstance_Statics::NewProp_singletonDataHandle = { "singletonDataHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GC_Singleton_eventOnGetInstance_Parms, singletonDataHandle), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(nullptr, 0) }; // 2710926200
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGC_Singleton_OnGetInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGC_Singleton_OnGetInstance_Statics::NewProp_singletonDataHandle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGC_Singleton_OnGetInstance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SingletonRegister/GC_Singleton.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGC_Singleton_OnGetInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGC_Singleton, nullptr, "OnGetInstance", nullptr, nullptr, sizeof(GC_Singleton_eventOnGetInstance_Parms), Z_Construct_UFunction_UGC_Singleton_OnGetInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGC_Singleton_OnGetInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGC_Singleton_OnGetInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGC_Singleton_OnGetInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGC_Singleton_OnGetInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGC_Singleton_OnGetInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGC_Singleton_OnInstanceCreated_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_singletonDataHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGC_Singleton_OnInstanceCreated_Statics::NewProp_singletonDataHandle = { "singletonDataHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GC_Singleton_eventOnInstanceCreated_Parms, singletonDataHandle), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(nullptr, 0) }; // 2710926200
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGC_Singleton_OnInstanceCreated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGC_Singleton_OnInstanceCreated_Statics::NewProp_singletonDataHandle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGC_Singleton_OnInstanceCreated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SingletonRegister/GC_Singleton.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGC_Singleton_OnInstanceCreated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGC_Singleton, nullptr, "OnInstanceCreated", nullptr, nullptr, sizeof(GC_Singleton_eventOnInstanceCreated_Parms), Z_Construct_UFunction_UGC_Singleton_OnInstanceCreated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGC_Singleton_OnInstanceCreated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGC_Singleton_OnInstanceCreated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGC_Singleton_OnInstanceCreated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGC_Singleton_OnInstanceCreated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGC_Singleton_OnInstanceCreated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGC_Singleton_OnResetInstance_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_singletonDataHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGC_Singleton_OnResetInstance_Statics::NewProp_singletonDataHandle = { "singletonDataHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GC_Singleton_eventOnResetInstance_Parms, singletonDataHandle), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(nullptr, 0) }; // 2710926200
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGC_Singleton_OnResetInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGC_Singleton_OnResetInstance_Statics::NewProp_singletonDataHandle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGC_Singleton_OnResetInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Singleton" },
		{ "ModuleRelativePath", "Public/SingletonRegister/GC_Singleton.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGC_Singleton_OnResetInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGC_Singleton, nullptr, "OnResetInstance", nullptr, nullptr, sizeof(GC_Singleton_eventOnResetInstance_Parms), Z_Construct_UFunction_UGC_Singleton_OnResetInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGC_Singleton_OnResetInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGC_Singleton_OnResetInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGC_Singleton_OnResetInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGC_Singleton_OnResetInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGC_Singleton_OnResetInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGC_Singleton);
	UClass* Z_Construct_UClass_UGC_Singleton_NoRegister()
	{
		return UGC_Singleton::StaticClass();
	}
	struct Z_Construct_UClass_UGC_Singleton_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGC_Singleton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_GenericClasses,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGC_Singleton_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGC_Singleton_OnGetInstance, "OnGetInstance" }, // 679439134
		{ &Z_Construct_UFunction_UGC_Singleton_OnInstanceCreated, "OnInstanceCreated" }, // 843106614
		{ &Z_Construct_UFunction_UGC_Singleton_OnResetInstance, "OnResetInstance" }, // 619171674
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGC_Singleton_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SingletonRegister/GC_Singleton.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGC_Singleton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IGC_Singleton>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGC_Singleton_Statics::ClassParams = {
		&UGC_Singleton::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UGC_Singleton_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGC_Singleton_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGC_Singleton()
	{
		if (!Z_Registration_Info_UClass_UGC_Singleton.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGC_Singleton.OuterSingleton, Z_Construct_UClass_UGC_Singleton_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGC_Singleton.OuterSingleton;
	}
	template<> GENERICCLASSES_API UClass* StaticClass<UGC_Singleton>()
	{
		return UGC_Singleton::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGC_Singleton);
	UGC_Singleton::~UGC_Singleton() {}
	static FName NAME_UGC_Singleton_OnGetInstance = FName(TEXT("OnGetInstance"));
	void IGC_Singleton::Execute_OnGetInstance(UObject* O, FDataTableRowHandle singletonDataHandle)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UGC_Singleton::StaticClass()));
		GC_Singleton_eventOnGetInstance_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UGC_Singleton_OnGetInstance);
		if (Func)
		{
			Parms.singletonDataHandle=singletonDataHandle;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IGC_Singleton*)(O->GetNativeInterfaceAddress(UGC_Singleton::StaticClass())))
		{
			I->OnGetInstance_Implementation(singletonDataHandle);
		}
	}
	static FName NAME_UGC_Singleton_OnInstanceCreated = FName(TEXT("OnInstanceCreated"));
	void IGC_Singleton::Execute_OnInstanceCreated(UObject* O, FDataTableRowHandle singletonDataHandle)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UGC_Singleton::StaticClass()));
		GC_Singleton_eventOnInstanceCreated_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UGC_Singleton_OnInstanceCreated);
		if (Func)
		{
			Parms.singletonDataHandle=singletonDataHandle;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IGC_Singleton*)(O->GetNativeInterfaceAddress(UGC_Singleton::StaticClass())))
		{
			I->OnInstanceCreated_Implementation(singletonDataHandle);
		}
	}
	static FName NAME_UGC_Singleton_OnResetInstance = FName(TEXT("OnResetInstance"));
	void IGC_Singleton::Execute_OnResetInstance(UObject* O, FDataTableRowHandle singletonDataHandle)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UGC_Singleton::StaticClass()));
		GC_Singleton_eventOnResetInstance_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UGC_Singleton_OnResetInstance);
		if (Func)
		{
			Parms.singletonDataHandle=singletonDataHandle;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IGC_Singleton*)(O->GetNativeInterfaceAddress(UGC_Singleton::StaticClass())))
		{
			I->OnResetInstance_Implementation(singletonDataHandle);
		}
	}
	struct Z_CompiledInDeferFile_FID_CumpleJuan_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_SingletonRegister_GC_Singleton_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CumpleJuan_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_SingletonRegister_GC_Singleton_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGC_Singleton, UGC_Singleton::StaticClass, TEXT("UGC_Singleton"), &Z_Registration_Info_UClass_UGC_Singleton, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGC_Singleton), 768756457U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CumpleJuan_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_SingletonRegister_GC_Singleton_h_852452763(TEXT("/Script/GenericClasses"),
		Z_CompiledInDeferFile_FID_CumpleJuan_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_SingletonRegister_GC_Singleton_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CumpleJuan_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_SingletonRegister_GC_Singleton_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
