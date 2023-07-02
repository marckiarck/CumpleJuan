// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GenericClasses/Public/ObjectPooler/GC_PooledObjectInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGC_PooledObjectInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	GENERICCLASSES_API UClass* Z_Construct_UClass_UGC_PooledObjectInterface();
	GENERICCLASSES_API UClass* Z_Construct_UClass_UGC_PooledObjectInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GenericClasses();
// End Cross Module References
	DEFINE_FUNCTION(IGC_PooledObjectInterface::execBeginDestroy_PooledObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BeginDestroy_PooledObject_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IGC_PooledObjectInterface::execBeginPlay_PooledObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BeginPlay_PooledObject_Implementation();
		P_NATIVE_END;
	}
	void IGC_PooledObjectInterface::BeginDestroy_PooledObject()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BeginDestroy_PooledObject instead.");
	}
	void IGC_PooledObjectInterface::BeginPlay_PooledObject()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BeginPlay_PooledObject instead.");
	}
	void UGC_PooledObjectInterface::StaticRegisterNativesUGC_PooledObjectInterface()
	{
		UClass* Class = UGC_PooledObjectInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginDestroy_PooledObject", &IGC_PooledObjectInterface::execBeginDestroy_PooledObject },
			{ "BeginPlay_PooledObject", &IGC_PooledObjectInterface::execBeginPlay_PooledObject },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGC_PooledObjectInterface_BeginDestroy_PooledObject_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGC_PooledObjectInterface_BeginDestroy_PooledObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ObjectPooler/GC_PooledObjectInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGC_PooledObjectInterface_BeginDestroy_PooledObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGC_PooledObjectInterface, nullptr, "BeginDestroy_PooledObject", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGC_PooledObjectInterface_BeginDestroy_PooledObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGC_PooledObjectInterface_BeginDestroy_PooledObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGC_PooledObjectInterface_BeginDestroy_PooledObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGC_PooledObjectInterface_BeginDestroy_PooledObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGC_PooledObjectInterface_BeginPlay_PooledObject_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGC_PooledObjectInterface_BeginPlay_PooledObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ObjectPooler/GC_PooledObjectInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGC_PooledObjectInterface_BeginPlay_PooledObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGC_PooledObjectInterface, nullptr, "BeginPlay_PooledObject", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGC_PooledObjectInterface_BeginPlay_PooledObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGC_PooledObjectInterface_BeginPlay_PooledObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGC_PooledObjectInterface_BeginPlay_PooledObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGC_PooledObjectInterface_BeginPlay_PooledObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGC_PooledObjectInterface);
	UClass* Z_Construct_UClass_UGC_PooledObjectInterface_NoRegister()
	{
		return UGC_PooledObjectInterface::StaticClass();
	}
	struct Z_Construct_UClass_UGC_PooledObjectInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGC_PooledObjectInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_GenericClasses,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGC_PooledObjectInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGC_PooledObjectInterface_BeginDestroy_PooledObject, "BeginDestroy_PooledObject" }, // 1814791731
		{ &Z_Construct_UFunction_UGC_PooledObjectInterface_BeginPlay_PooledObject, "BeginPlay_PooledObject" }, // 4239057353
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGC_PooledObjectInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ObjectPooler/GC_PooledObjectInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGC_PooledObjectInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IGC_PooledObjectInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGC_PooledObjectInterface_Statics::ClassParams = {
		&UGC_PooledObjectInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGC_PooledObjectInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGC_PooledObjectInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGC_PooledObjectInterface()
	{
		if (!Z_Registration_Info_UClass_UGC_PooledObjectInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGC_PooledObjectInterface.OuterSingleton, Z_Construct_UClass_UGC_PooledObjectInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGC_PooledObjectInterface.OuterSingleton;
	}
	template<> GENERICCLASSES_API UClass* StaticClass<UGC_PooledObjectInterface>()
	{
		return UGC_PooledObjectInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGC_PooledObjectInterface);
	UGC_PooledObjectInterface::~UGC_PooledObjectInterface() {}
	static FName NAME_UGC_PooledObjectInterface_BeginDestroy_PooledObject = FName(TEXT("BeginDestroy_PooledObject"));
	void IGC_PooledObjectInterface::Execute_BeginDestroy_PooledObject(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UGC_PooledObjectInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UGC_PooledObjectInterface_BeginDestroy_PooledObject);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IGC_PooledObjectInterface*)(O->GetNativeInterfaceAddress(UGC_PooledObjectInterface::StaticClass())))
		{
			I->BeginDestroy_PooledObject_Implementation();
		}
	}
	static FName NAME_UGC_PooledObjectInterface_BeginPlay_PooledObject = FName(TEXT("BeginPlay_PooledObject"));
	void IGC_PooledObjectInterface::Execute_BeginPlay_PooledObject(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UGC_PooledObjectInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UGC_PooledObjectInterface_BeginPlay_PooledObject);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IGC_PooledObjectInterface*)(O->GetNativeInterfaceAddress(UGC_PooledObjectInterface::StaticClass())))
		{
			I->BeginPlay_PooledObject_Implementation();
		}
	}
	struct Z_CompiledInDeferFile_FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_ObjectPooler_GC_PooledObjectInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_ObjectPooler_GC_PooledObjectInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGC_PooledObjectInterface, UGC_PooledObjectInterface::StaticClass, TEXT("UGC_PooledObjectInterface"), &Z_Registration_Info_UClass_UGC_PooledObjectInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGC_PooledObjectInterface), 2376592997U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_ObjectPooler_GC_PooledObjectInterface_h_2560216391(TEXT("/Script/GenericClasses"),
		Z_CompiledInDeferFile_FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_ObjectPooler_GC_PooledObjectInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_ObjectPooler_GC_PooledObjectInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
