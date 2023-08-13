// Copyright Epic Games, Inc. All Rights Reserved.

#include "GenericClassesDebug.h"
#include "GameplayDebugger/GC_EventSystemDebuggerCategory.h"
#include "GameplayDebugger.h"

#define LOCTEXT_NAMESPACE "FGenericClassesDebugModule"

void FGenericClassesDebugModule::StartupModule()
{
	IGameplayDebugger& GameplayDebuggerModule = IGameplayDebugger::Get();

	GameplayDebuggerModule.RegisterCategory("EventSystem", IGameplayDebugger::FOnGetCategory::CreateStatic(&FGC_EventSystemDebuggerCategory::MakeInstance),
		EGameplayDebuggerCategoryState::EnabledInGameAndSimulate);
	GameplayDebuggerModule.NotifyCategoriesChanged();
}

void FGenericClassesDebugModule::ShutdownModule()
{
	IGameplayDebugger& GameplayDebuggerModule = IGameplayDebugger::Get();
	GameplayDebuggerModule.UnregisterCategory(TEXT("EventSystem"));
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FGenericClassesDebugModule, GenericClassesDebug)