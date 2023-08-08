// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EventSystem/Events/GC_Event.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGC_Event;
#ifdef GENERICCLASSES_GC_Event_generated_h
#error "GC_Event.generated.h already included, missing '#pragma once' in GC_Event.h"
#endif
#define GENERICCLASSES_GC_Event_generated_h

#define FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_EventSystem_Events_GC_Event_h_10_DELEGATE \
struct _Script_GenericClasses_eventOnEventStarts_Parms \
{ \
	UGC_Event* startedEvent; \
}; \
static inline void FOnEventStarts_DelegateWrapper(const FMulticastScriptDelegate& OnEventStarts, UGC_Event* startedEvent) \
{ \
	_Script_GenericClasses_eventOnEventStarts_Parms Parms; \
	Parms.startedEvent=startedEvent; \
	OnEventStarts.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_EventSystem_Events_GC_Event_h_11_DELEGATE \
struct _Script_GenericClasses_eventOnEventFinish_Parms \
{ \
	UGC_Event* finishedEvent; \
}; \
static inline void FOnEventFinish_DelegateWrapper(const FMulticastScriptDelegate& OnEventFinish, UGC_Event* finishedEvent) \
{ \
	_Script_GenericClasses_eventOnEventFinish_Parms Parms; \
	Parms.finishedEvent=finishedEvent; \
	OnEventFinish.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_EventSystem_Events_GC_Event_h_12_DELEGATE \
struct _Script_GenericClasses_eventOnEventTick_Parms \
{ \
	UGC_Event* startedEvent; \
	float deltaSeconds; \
}; \
static inline void FOnEventTick_DelegateWrapper(const FMulticastScriptDelegate& OnEventTick, UGC_Event* startedEvent, float deltaSeconds) \
{ \
	_Script_GenericClasses_eventOnEventTick_Parms Parms; \
	Parms.startedEvent=startedEvent; \
	Parms.deltaSeconds=deltaSeconds; \
	OnEventTick.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_EventSystem_Events_GC_Event_h_17_SPARSE_DATA
#define FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_EventSystem_Events_GC_Event_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFinishEvent);


#define FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_EventSystem_Events_GC_Event_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFinishEvent);


#define FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_EventSystem_Events_GC_Event_h_17_ACCESSORS
#define FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_EventSystem_Events_GC_Event_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGC_Event(); \
	friend struct Z_Construct_UClass_UGC_Event_Statics; \
public: \
	DECLARE_CLASS(UGC_Event, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/GenericClasses"), NO_API) \
	DECLARE_SERIALIZER(UGC_Event) \
	virtual UObject* _getUObject() const override { return const_cast<UGC_Event*>(this); }


#define FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_EventSystem_Events_GC_Event_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUGC_Event(); \
	friend struct Z_Construct_UClass_UGC_Event_Statics; \
public: \
	DECLARE_CLASS(UGC_Event, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/GenericClasses"), NO_API) \
	DECLARE_SERIALIZER(UGC_Event) \
	virtual UObject* _getUObject() const override { return const_cast<UGC_Event*>(this); }


#define FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_EventSystem_Events_GC_Event_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGC_Event(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGC_Event) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGC_Event); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGC_Event); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGC_Event(UGC_Event&&); \
	NO_API UGC_Event(const UGC_Event&); \
public: \
	NO_API virtual ~UGC_Event();


#define FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_EventSystem_Events_GC_Event_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGC_Event(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGC_Event(UGC_Event&&); \
	NO_API UGC_Event(const UGC_Event&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGC_Event); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGC_Event); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGC_Event) \
	NO_API virtual ~UGC_Event();


#define FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_EventSystem_Events_GC_Event_h_14_PROLOG
#define FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_EventSystem_Events_GC_Event_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_EventSystem_Events_GC_Event_h_17_SPARSE_DATA \
	FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_EventSystem_Events_GC_Event_h_17_RPC_WRAPPERS \
	FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_EventSystem_Events_GC_Event_h_17_ACCESSORS \
	FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_EventSystem_Events_GC_Event_h_17_INCLASS \
	FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_EventSystem_Events_GC_Event_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_EventSystem_Events_GC_Event_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_EventSystem_Events_GC_Event_h_17_SPARSE_DATA \
	FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_EventSystem_Events_GC_Event_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_EventSystem_Events_GC_Event_h_17_ACCESSORS \
	FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_EventSystem_Events_GC_Event_h_17_INCLASS_NO_PURE_DECLS \
	FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_EventSystem_Events_GC_Event_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GENERICCLASSES_API UClass* StaticClass<class UGC_Event>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CumpleJuanRepositorio_Plugins_GenericClasses_GenericClasses_Source_GenericClasses_Public_EventSystem_Events_GC_Event_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
