// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SingletonRegister/GC_Singleton.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDataTableRowHandle;
#ifdef GENERICCLASSES_GC_Singleton_generated_h
#error "GC_Singleton.generated.h already included, missing '#pragma once' in GC_Singleton.h"
#endif
#define GENERICCLASSES_GC_Singleton_generated_h

#define FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_SingletonRegister_GC_Singleton_h_16_SPARSE_DATA
#define FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_SingletonRegister_GC_Singleton_h_16_RPC_WRAPPERS \
	virtual void OnGetInstance_Implementation(FDataTableRowHandle singletonDataHandle) {}; \
	virtual void OnInstanceCreated_Implementation(FDataTableRowHandle singletonDataHandle) {}; \
	virtual void OnResetInstance_Implementation(FDataTableRowHandle singletonDataHandle) {}; \
 \
	DECLARE_FUNCTION(execOnGetInstance); \
	DECLARE_FUNCTION(execOnInstanceCreated); \
	DECLARE_FUNCTION(execOnResetInstance);


#define FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_SingletonRegister_GC_Singleton_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnGetInstance_Implementation(FDataTableRowHandle singletonDataHandle) {}; \
	virtual void OnInstanceCreated_Implementation(FDataTableRowHandle singletonDataHandle) {}; \
	virtual void OnResetInstance_Implementation(FDataTableRowHandle singletonDataHandle) {}; \
 \
	DECLARE_FUNCTION(execOnGetInstance); \
	DECLARE_FUNCTION(execOnInstanceCreated); \
	DECLARE_FUNCTION(execOnResetInstance);


#define FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_SingletonRegister_GC_Singleton_h_16_ACCESSORS
#define FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_SingletonRegister_GC_Singleton_h_16_CALLBACK_WRAPPERS
#define FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_SingletonRegister_GC_Singleton_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GENERICCLASSES_API UGC_Singleton(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGC_Singleton) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GENERICCLASSES_API, UGC_Singleton); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGC_Singleton); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GENERICCLASSES_API UGC_Singleton(UGC_Singleton&&); \
	GENERICCLASSES_API UGC_Singleton(const UGC_Singleton&); \
public: \
	GENERICCLASSES_API virtual ~UGC_Singleton();


#define FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_SingletonRegister_GC_Singleton_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GENERICCLASSES_API UGC_Singleton(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GENERICCLASSES_API UGC_Singleton(UGC_Singleton&&); \
	GENERICCLASSES_API UGC_Singleton(const UGC_Singleton&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GENERICCLASSES_API, UGC_Singleton); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGC_Singleton); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGC_Singleton) \
	GENERICCLASSES_API virtual ~UGC_Singleton();


#define FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_SingletonRegister_GC_Singleton_h_16_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUGC_Singleton(); \
	friend struct Z_Construct_UClass_UGC_Singleton_Statics; \
public: \
	DECLARE_CLASS(UGC_Singleton, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/GenericClasses"), GENERICCLASSES_API) \
	DECLARE_SERIALIZER(UGC_Singleton)


#define FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_SingletonRegister_GC_Singleton_h_16_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_SingletonRegister_GC_Singleton_h_16_GENERATED_UINTERFACE_BODY() \
	FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_SingletonRegister_GC_Singleton_h_16_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_SingletonRegister_GC_Singleton_h_16_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_SingletonRegister_GC_Singleton_h_16_GENERATED_UINTERFACE_BODY() \
	FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_SingletonRegister_GC_Singleton_h_16_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_SingletonRegister_GC_Singleton_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IGC_Singleton() {} \
public: \
	typedef UGC_Singleton UClassType; \
	typedef IGC_Singleton ThisClass; \
	static void Execute_OnGetInstance(UObject* O, FDataTableRowHandle singletonDataHandle); \
	static void Execute_OnInstanceCreated(UObject* O, FDataTableRowHandle singletonDataHandle); \
	static void Execute_OnResetInstance(UObject* O, FDataTableRowHandle singletonDataHandle); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_SingletonRegister_GC_Singleton_h_16_INCLASS_IINTERFACE \
protected: \
	virtual ~IGC_Singleton() {} \
public: \
	typedef UGC_Singleton UClassType; \
	typedef IGC_Singleton ThisClass; \
	static void Execute_OnGetInstance(UObject* O, FDataTableRowHandle singletonDataHandle); \
	static void Execute_OnInstanceCreated(UObject* O, FDataTableRowHandle singletonDataHandle); \
	static void Execute_OnResetInstance(UObject* O, FDataTableRowHandle singletonDataHandle); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_SingletonRegister_GC_Singleton_h_13_PROLOG
#define FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_SingletonRegister_GC_Singleton_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_SingletonRegister_GC_Singleton_h_16_SPARSE_DATA \
	FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_SingletonRegister_GC_Singleton_h_16_RPC_WRAPPERS \
	FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_SingletonRegister_GC_Singleton_h_16_ACCESSORS \
	FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_SingletonRegister_GC_Singleton_h_16_CALLBACK_WRAPPERS \
	FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_SingletonRegister_GC_Singleton_h_16_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_SingletonRegister_GC_Singleton_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_SingletonRegister_GC_Singleton_h_16_SPARSE_DATA \
	FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_SingletonRegister_GC_Singleton_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_SingletonRegister_GC_Singleton_h_16_ACCESSORS \
	FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_SingletonRegister_GC_Singleton_h_16_CALLBACK_WRAPPERS \
	FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_SingletonRegister_GC_Singleton_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GENERICCLASSES_API UClass* StaticClass<class UGC_Singleton>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_SingletonRegister_GC_Singleton_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
