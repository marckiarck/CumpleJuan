// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EventSystem/GC_EventRegister.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGC_Event;
class UWorld;
struct FDataTableRowHandle;
#ifdef GENERICCLASSES_GC_EventRegister_generated_h
#error "GC_EventRegister.generated.h already included, missing '#pragma once' in GC_EventRegister.h"
#endif
#define GENERICCLASSES_GC_EventRegister_generated_h

#define FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_EventSystem_GC_EventRegister_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGC_EventRegisterDataRow_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> GENERICCLASSES_API UScriptStruct* StaticStruct<struct FGC_EventRegisterDataRow>();

#define FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_EventSystem_GC_EventRegister_h_26_SPARSE_DATA
#define FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_EventSystem_GC_EventRegister_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnEventFinish); \
	DECLARE_FUNCTION(execOnWorldAdded); \
	DECLARE_FUNCTION(execOnWorldDestroyed); \
	DECLARE_FUNCTION(execUpdateEventQueue); \
	DECLARE_FUNCTION(execRegisterEvent);


#define FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_EventSystem_GC_EventRegister_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnEventFinish); \
	DECLARE_FUNCTION(execOnWorldAdded); \
	DECLARE_FUNCTION(execOnWorldDestroyed); \
	DECLARE_FUNCTION(execUpdateEventQueue); \
	DECLARE_FUNCTION(execRegisterEvent);


#define FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_EventSystem_GC_EventRegister_h_26_ACCESSORS
#define FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_EventSystem_GC_EventRegister_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGC_EventRegister(); \
	friend struct Z_Construct_UClass_UGC_EventRegister_Statics; \
public: \
	DECLARE_CLASS(UGC_EventRegister, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GenericClasses"), NO_API) \
	DECLARE_SERIALIZER(UGC_EventRegister) \
	virtual UObject* _getUObject() const override { return const_cast<UGC_EventRegister*>(this); }


#define FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_EventSystem_GC_EventRegister_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUGC_EventRegister(); \
	friend struct Z_Construct_UClass_UGC_EventRegister_Statics; \
public: \
	DECLARE_CLASS(UGC_EventRegister, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GenericClasses"), NO_API) \
	DECLARE_SERIALIZER(UGC_EventRegister) \
	virtual UObject* _getUObject() const override { return const_cast<UGC_EventRegister*>(this); }


#define FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_EventSystem_GC_EventRegister_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGC_EventRegister(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGC_EventRegister) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGC_EventRegister); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGC_EventRegister); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGC_EventRegister(UGC_EventRegister&&); \
	NO_API UGC_EventRegister(const UGC_EventRegister&); \
public: \
	NO_API virtual ~UGC_EventRegister();


#define FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_EventSystem_GC_EventRegister_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGC_EventRegister(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGC_EventRegister(UGC_EventRegister&&); \
	NO_API UGC_EventRegister(const UGC_EventRegister&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGC_EventRegister); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGC_EventRegister); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGC_EventRegister) \
	NO_API virtual ~UGC_EventRegister();


#define FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_EventSystem_GC_EventRegister_h_23_PROLOG
#define FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_EventSystem_GC_EventRegister_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_EventSystem_GC_EventRegister_h_26_SPARSE_DATA \
	FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_EventSystem_GC_EventRegister_h_26_RPC_WRAPPERS \
	FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_EventSystem_GC_EventRegister_h_26_ACCESSORS \
	FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_EventSystem_GC_EventRegister_h_26_INCLASS \
	FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_EventSystem_GC_EventRegister_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_EventSystem_GC_EventRegister_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_EventSystem_GC_EventRegister_h_26_SPARSE_DATA \
	FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_EventSystem_GC_EventRegister_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_EventSystem_GC_EventRegister_h_26_ACCESSORS \
	FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_EventSystem_GC_EventRegister_h_26_INCLASS_NO_PURE_DECLS \
	FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_EventSystem_GC_EventRegister_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GENERICCLASSES_API UClass* StaticClass<class UGC_EventRegister>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_EventSystem_GC_EventRegister_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
