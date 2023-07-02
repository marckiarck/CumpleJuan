// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ObjectPooler/GC_PooledObjectInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GENERICCLASSES_GC_PooledObjectInterface_generated_h
#error "GC_PooledObjectInterface.generated.h already included, missing '#pragma once' in GC_PooledObjectInterface.h"
#endif
#define GENERICCLASSES_GC_PooledObjectInterface_generated_h

#define FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_ObjectPooler_GC_PooledObjectInterface_h_14_SPARSE_DATA
#define FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_ObjectPooler_GC_PooledObjectInterface_h_14_RPC_WRAPPERS \
	virtual void BeginDestroy_PooledObject_Implementation() {}; \
	virtual void BeginPlay_PooledObject_Implementation() {}; \
 \
	DECLARE_FUNCTION(execBeginDestroy_PooledObject); \
	DECLARE_FUNCTION(execBeginPlay_PooledObject);


#define FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_ObjectPooler_GC_PooledObjectInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void BeginDestroy_PooledObject_Implementation() {}; \
	virtual void BeginPlay_PooledObject_Implementation() {}; \
 \
	DECLARE_FUNCTION(execBeginDestroy_PooledObject); \
	DECLARE_FUNCTION(execBeginPlay_PooledObject);


#define FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_ObjectPooler_GC_PooledObjectInterface_h_14_ACCESSORS
#define FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_ObjectPooler_GC_PooledObjectInterface_h_14_CALLBACK_WRAPPERS
#define FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_ObjectPooler_GC_PooledObjectInterface_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GENERICCLASSES_API UGC_PooledObjectInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGC_PooledObjectInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GENERICCLASSES_API, UGC_PooledObjectInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGC_PooledObjectInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GENERICCLASSES_API UGC_PooledObjectInterface(UGC_PooledObjectInterface&&); \
	GENERICCLASSES_API UGC_PooledObjectInterface(const UGC_PooledObjectInterface&); \
public: \
	GENERICCLASSES_API virtual ~UGC_PooledObjectInterface();


#define FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_ObjectPooler_GC_PooledObjectInterface_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GENERICCLASSES_API UGC_PooledObjectInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GENERICCLASSES_API UGC_PooledObjectInterface(UGC_PooledObjectInterface&&); \
	GENERICCLASSES_API UGC_PooledObjectInterface(const UGC_PooledObjectInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GENERICCLASSES_API, UGC_PooledObjectInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGC_PooledObjectInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGC_PooledObjectInterface) \
	GENERICCLASSES_API virtual ~UGC_PooledObjectInterface();


#define FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_ObjectPooler_GC_PooledObjectInterface_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUGC_PooledObjectInterface(); \
	friend struct Z_Construct_UClass_UGC_PooledObjectInterface_Statics; \
public: \
	DECLARE_CLASS(UGC_PooledObjectInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/GenericClasses"), GENERICCLASSES_API) \
	DECLARE_SERIALIZER(UGC_PooledObjectInterface)


#define FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_ObjectPooler_GC_PooledObjectInterface_h_14_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_ObjectPooler_GC_PooledObjectInterface_h_14_GENERATED_UINTERFACE_BODY() \
	FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_ObjectPooler_GC_PooledObjectInterface_h_14_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_ObjectPooler_GC_PooledObjectInterface_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_ObjectPooler_GC_PooledObjectInterface_h_14_GENERATED_UINTERFACE_BODY() \
	FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_ObjectPooler_GC_PooledObjectInterface_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_ObjectPooler_GC_PooledObjectInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IGC_PooledObjectInterface() {} \
public: \
	typedef UGC_PooledObjectInterface UClassType; \
	typedef IGC_PooledObjectInterface ThisClass; \
	static void Execute_BeginDestroy_PooledObject(UObject* O); \
	static void Execute_BeginPlay_PooledObject(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_ObjectPooler_GC_PooledObjectInterface_h_14_INCLASS_IINTERFACE \
protected: \
	virtual ~IGC_PooledObjectInterface() {} \
public: \
	typedef UGC_PooledObjectInterface UClassType; \
	typedef IGC_PooledObjectInterface ThisClass; \
	static void Execute_BeginDestroy_PooledObject(UObject* O); \
	static void Execute_BeginPlay_PooledObject(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_ObjectPooler_GC_PooledObjectInterface_h_11_PROLOG
#define FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_ObjectPooler_GC_PooledObjectInterface_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_ObjectPooler_GC_PooledObjectInterface_h_14_SPARSE_DATA \
	FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_ObjectPooler_GC_PooledObjectInterface_h_14_RPC_WRAPPERS \
	FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_ObjectPooler_GC_PooledObjectInterface_h_14_ACCESSORS \
	FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_ObjectPooler_GC_PooledObjectInterface_h_14_CALLBACK_WRAPPERS \
	FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_ObjectPooler_GC_PooledObjectInterface_h_14_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_ObjectPooler_GC_PooledObjectInterface_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_ObjectPooler_GC_PooledObjectInterface_h_14_SPARSE_DATA \
	FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_ObjectPooler_GC_PooledObjectInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_ObjectPooler_GC_PooledObjectInterface_h_14_ACCESSORS \
	FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_ObjectPooler_GC_PooledObjectInterface_h_14_CALLBACK_WRAPPERS \
	FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_ObjectPooler_GC_PooledObjectInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GENERICCLASSES_API UClass* StaticClass<class UGC_PooledObjectInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_ObjectPooler_GC_PooledObjectInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
