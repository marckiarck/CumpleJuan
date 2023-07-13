// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GenericClasses/Public/ObjectPooler/GC_ObjectPooler.h"
#include "Engine/Classes/Engine/DataTable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGC_ObjectPooler() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULevel_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle();
	GENERICCLASSES_API UClass* Z_Construct_UClass_UGC_ObjectPool_NoRegister();
	GENERICCLASSES_API UClass* Z_Construct_UClass_UGC_ObjectPooler();
	GENERICCLASSES_API UClass* Z_Construct_UClass_UGC_ObjectPooler_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GenericClasses();
// End Cross Module References
	DEFINE_FUNCTION(UGC_ObjectPooler::execDespawnActor)
	{
		P_GET_OBJECT(AActor,Z_Param_actorReference);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DespawnActor(Z_Param_actorReference);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGC_ObjectPooler::execSpawnActor)
	{
		P_GET_OBJECT(ULevel,Z_Param_spawnLevel);
		P_GET_OBJECT(UClass,Z_Param_actorClass);
		P_GET_STRUCT(FTransform,Z_Param_spawnTransForm);
		P_GET_STRUCT(FDataTableRowHandle,Z_Param_creationDataHandle);
		P_GET_OBJECT_REF(AActor,Z_Param_Out_spawnedActor);
		P_GET_UBOOL(Z_Param_collisionEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnActor(Z_Param_spawnLevel,Z_Param_actorClass,Z_Param_spawnTransForm,Z_Param_creationDataHandle,Z_Param_Out_spawnedActor,Z_Param_collisionEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGC_ObjectPooler::execDestroyObject)
	{
		P_GET_OBJECT(UObject,Z_Param_objectReference);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DestroyObject(Z_Param_objectReference);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGC_ObjectPooler::execCreateObject)
	{
		P_GET_OBJECT(UClass,Z_Param_objectClass);
		P_GET_OBJECT_REF(UObject,Z_Param_Out_createdObject);
		P_GET_STRUCT(FDataTableRowHandle,Z_Param_creationDataHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateObject(Z_Param_objectClass,Z_Param_Out_createdObject,Z_Param_creationDataHandle);
		P_NATIVE_END;
	}
	void UGC_ObjectPooler::StaticRegisterNativesUGC_ObjectPooler()
	{
		UClass* Class = UGC_ObjectPooler::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateObject", &UGC_ObjectPooler::execCreateObject },
			{ "DespawnActor", &UGC_ObjectPooler::execDespawnActor },
			{ "DestroyObject", &UGC_ObjectPooler::execDestroyObject },
			{ "SpawnActor", &UGC_ObjectPooler::execSpawnActor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGC_ObjectPooler_CreateObject_Statics
	{
		struct GC_ObjectPooler_eventCreateObject_Parms
		{
			TSubclassOf<UObject>  objectClass;
			UObject* createdObject;
			FDataTableRowHandle creationDataHandle;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_objectClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_createdObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_creationDataHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UGC_ObjectPooler_CreateObject_Statics::NewProp_objectClass = { "objectClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GC_ObjectPooler_eventCreateObject_Parms, objectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGC_ObjectPooler_CreateObject_Statics::NewProp_createdObject = { "createdObject", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GC_ObjectPooler_eventCreateObject_Parms, createdObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGC_ObjectPooler_CreateObject_Statics::NewProp_creationDataHandle = { "creationDataHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GC_ObjectPooler_eventCreateObject_Parms, creationDataHandle), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(nullptr, 0) }; // 2710926200
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGC_ObjectPooler_CreateObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGC_ObjectPooler_CreateObject_Statics::NewProp_objectClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGC_ObjectPooler_CreateObject_Statics::NewProp_createdObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGC_ObjectPooler_CreateObject_Statics::NewProp_creationDataHandle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGC_ObjectPooler_CreateObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "ObjectPooler" },
		{ "DeterminesOutputType", "objectClass" },
		{ "DynamicOutputParam", "spawnedActor" },
		{ "ModuleRelativePath", "Public/ObjectPooler/GC_ObjectPooler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGC_ObjectPooler_CreateObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGC_ObjectPooler, nullptr, "CreateObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGC_ObjectPooler_CreateObject_Statics::GC_ObjectPooler_eventCreateObject_Parms), Z_Construct_UFunction_UGC_ObjectPooler_CreateObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGC_ObjectPooler_CreateObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGC_ObjectPooler_CreateObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGC_ObjectPooler_CreateObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGC_ObjectPooler_CreateObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGC_ObjectPooler_CreateObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGC_ObjectPooler_DespawnActor_Statics
	{
		struct GC_ObjectPooler_eventDespawnActor_Parms
		{
			AActor* actorReference;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_actorReference;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGC_ObjectPooler_DespawnActor_Statics::NewProp_actorReference = { "actorReference", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GC_ObjectPooler_eventDespawnActor_Parms, actorReference), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGC_ObjectPooler_DespawnActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGC_ObjectPooler_DespawnActor_Statics::NewProp_actorReference,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGC_ObjectPooler_DespawnActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "ObjectPooler" },
		{ "ModuleRelativePath", "Public/ObjectPooler/GC_ObjectPooler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGC_ObjectPooler_DespawnActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGC_ObjectPooler, nullptr, "DespawnActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGC_ObjectPooler_DespawnActor_Statics::GC_ObjectPooler_eventDespawnActor_Parms), Z_Construct_UFunction_UGC_ObjectPooler_DespawnActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGC_ObjectPooler_DespawnActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGC_ObjectPooler_DespawnActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGC_ObjectPooler_DespawnActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGC_ObjectPooler_DespawnActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGC_ObjectPooler_DespawnActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGC_ObjectPooler_DestroyObject_Statics
	{
		struct GC_ObjectPooler_eventDestroyObject_Parms
		{
			UObject* objectReference;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_objectReference;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGC_ObjectPooler_DestroyObject_Statics::NewProp_objectReference = { "objectReference", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GC_ObjectPooler_eventDestroyObject_Parms, objectReference), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGC_ObjectPooler_DestroyObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGC_ObjectPooler_DestroyObject_Statics::NewProp_objectReference,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGC_ObjectPooler_DestroyObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "ObjectPooler" },
		{ "ModuleRelativePath", "Public/ObjectPooler/GC_ObjectPooler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGC_ObjectPooler_DestroyObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGC_ObjectPooler, nullptr, "DestroyObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGC_ObjectPooler_DestroyObject_Statics::GC_ObjectPooler_eventDestroyObject_Parms), Z_Construct_UFunction_UGC_ObjectPooler_DestroyObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGC_ObjectPooler_DestroyObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGC_ObjectPooler_DestroyObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGC_ObjectPooler_DestroyObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGC_ObjectPooler_DestroyObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGC_ObjectPooler_DestroyObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGC_ObjectPooler_SpawnActor_Statics
	{
		struct GC_ObjectPooler_eventSpawnActor_Parms
		{
			ULevel* spawnLevel;
			TSubclassOf<AActor>  actorClass;
			FTransform spawnTransForm;
			FDataTableRowHandle creationDataHandle;
			AActor* spawnedActor;
			bool collisionEnabled;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_spawnLevel;
		static const UECodeGen_Private::FClassPropertyParams NewProp_actorClass;
		static const UECodeGen_Private::FStructPropertyParams NewProp_spawnTransForm;
		static const UECodeGen_Private::FStructPropertyParams NewProp_creationDataHandle;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_spawnedActor;
		static void NewProp_collisionEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_collisionEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGC_ObjectPooler_SpawnActor_Statics::NewProp_spawnLevel = { "spawnLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GC_ObjectPooler_eventSpawnActor_Parms, spawnLevel), Z_Construct_UClass_ULevel_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UGC_ObjectPooler_SpawnActor_Statics::NewProp_actorClass = { "actorClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GC_ObjectPooler_eventSpawnActor_Parms, actorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGC_ObjectPooler_SpawnActor_Statics::NewProp_spawnTransForm = { "spawnTransForm", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GC_ObjectPooler_eventSpawnActor_Parms, spawnTransForm), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGC_ObjectPooler_SpawnActor_Statics::NewProp_creationDataHandle = { "creationDataHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GC_ObjectPooler_eventSpawnActor_Parms, creationDataHandle), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(nullptr, 0) }; // 2710926200
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGC_ObjectPooler_SpawnActor_Statics::NewProp_spawnedActor = { "spawnedActor", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GC_ObjectPooler_eventSpawnActor_Parms, spawnedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGC_ObjectPooler_SpawnActor_Statics::NewProp_collisionEnabled_SetBit(void* Obj)
	{
		((GC_ObjectPooler_eventSpawnActor_Parms*)Obj)->collisionEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGC_ObjectPooler_SpawnActor_Statics::NewProp_collisionEnabled = { "collisionEnabled", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GC_ObjectPooler_eventSpawnActor_Parms), &Z_Construct_UFunction_UGC_ObjectPooler_SpawnActor_Statics::NewProp_collisionEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGC_ObjectPooler_SpawnActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGC_ObjectPooler_SpawnActor_Statics::NewProp_spawnLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGC_ObjectPooler_SpawnActor_Statics::NewProp_actorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGC_ObjectPooler_SpawnActor_Statics::NewProp_spawnTransForm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGC_ObjectPooler_SpawnActor_Statics::NewProp_creationDataHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGC_ObjectPooler_SpawnActor_Statics::NewProp_spawnedActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGC_ObjectPooler_SpawnActor_Statics::NewProp_collisionEnabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGC_ObjectPooler_SpawnActor_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "collisionEnabled" },
		{ "Category", "ObjectPooler" },
		{ "CPP_Default_collisionEnabled", "true" },
		{ "DeterminesOutputType", "actorClass" },
		{ "DynamicOutputParam", "spawnedActor" },
		{ "ModuleRelativePath", "Public/ObjectPooler/GC_ObjectPooler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGC_ObjectPooler_SpawnActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGC_ObjectPooler, nullptr, "SpawnActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGC_ObjectPooler_SpawnActor_Statics::GC_ObjectPooler_eventSpawnActor_Parms), Z_Construct_UFunction_UGC_ObjectPooler_SpawnActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGC_ObjectPooler_SpawnActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGC_ObjectPooler_SpawnActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGC_ObjectPooler_SpawnActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGC_ObjectPooler_SpawnActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGC_ObjectPooler_SpawnActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGC_ObjectPooler);
	UClass* Z_Construct_UClass_UGC_ObjectPooler_NoRegister()
	{
		return UGC_ObjectPooler::StaticClass();
	}
	struct Z_Construct_UClass_UGC_ObjectPooler_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_poolsMap_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_poolsMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_poolsMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_poolsMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGC_ObjectPooler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GenericClasses,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGC_ObjectPooler_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGC_ObjectPooler_CreateObject, "CreateObject" }, // 1130717539
		{ &Z_Construct_UFunction_UGC_ObjectPooler_DespawnActor, "DespawnActor" }, // 1324951218
		{ &Z_Construct_UFunction_UGC_ObjectPooler_DestroyObject, "DestroyObject" }, // 1129945448
		{ &Z_Construct_UFunction_UGC_ObjectPooler_SpawnActor, "SpawnActor" }, // 3357922469
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGC_ObjectPooler_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ObjectPooler/GC_ObjectPooler.h" },
		{ "ModuleRelativePath", "Public/ObjectPooler/GC_ObjectPooler.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGC_ObjectPooler_Statics::NewProp_poolsMap_ValueProp = { "poolsMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UGC_ObjectPool_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UGC_ObjectPooler_Statics::NewProp_poolsMap_Key_KeyProp = { "poolsMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGC_ObjectPooler_Statics::NewProp_poolsMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectPooler/GC_ObjectPooler.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UGC_ObjectPooler_Statics::NewProp_poolsMap = { "poolsMap", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_ObjectPooler, poolsMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGC_ObjectPooler_Statics::NewProp_poolsMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGC_ObjectPooler_Statics::NewProp_poolsMap_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGC_ObjectPooler_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGC_ObjectPooler_Statics::NewProp_poolsMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGC_ObjectPooler_Statics::NewProp_poolsMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGC_ObjectPooler_Statics::NewProp_poolsMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGC_ObjectPooler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGC_ObjectPooler>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGC_ObjectPooler_Statics::ClassParams = {
		&UGC_ObjectPooler::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGC_ObjectPooler_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGC_ObjectPooler_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGC_ObjectPooler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGC_ObjectPooler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGC_ObjectPooler()
	{
		if (!Z_Registration_Info_UClass_UGC_ObjectPooler.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGC_ObjectPooler.OuterSingleton, Z_Construct_UClass_UGC_ObjectPooler_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGC_ObjectPooler.OuterSingleton;
	}
	template<> GENERICCLASSES_API UClass* StaticClass<UGC_ObjectPooler>()
	{
		return UGC_ObjectPooler::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGC_ObjectPooler);
	UGC_ObjectPooler::~UGC_ObjectPooler() {}
	struct Z_CompiledInDeferFile_FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_ObjectPooler_GC_ObjectPooler_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_ObjectPooler_GC_ObjectPooler_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGC_ObjectPooler, UGC_ObjectPooler::StaticClass, TEXT("UGC_ObjectPooler"), &Z_Registration_Info_UClass_UGC_ObjectPooler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGC_ObjectPooler), 3597861894U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_ObjectPooler_GC_ObjectPooler_h_30105277(TEXT("/Script/GenericClasses"),
		Z_CompiledInDeferFile_FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_ObjectPooler_GC_ObjectPooler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_ObjectPooler_GC_ObjectPooler_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
