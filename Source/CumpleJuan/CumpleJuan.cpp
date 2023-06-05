// Copyright Epic Games, Inc. All Rights Reserved.

#include "CumpleJuan.h"
#include "Modules/ModuleManager.h"
#include "GameplayDebugger.h"
#include "Game/GAS/DebugCategories/PlayerAttriutesDebugCategory.h"

IMPLEMENT_PRIMARY_GAME_MODULE(CumpleJuan, CumpleJuan, "CumpleJuan" );


void CumpleJuan::StartupModule()
{
#if WITH_GAMEPLAY_DEBUGGER
	IGameplayDebugger& GameplayDebuggerModule = IGameplayDebugger::Get();

	GameplayDebuggerModule.RegisterCategory(TEXT("GAS_Attributes"), IGameplayDebugger::FOnGetCategory::CreateStatic(&FPlayerAttriutesDebugCategory::MakeInstance),
		EGameplayDebuggerCategoryState::EnabledInGameAndSimulate);
	GameplayDebuggerModule.NotifyCategoriesChanged();
#endif
}

void CumpleJuan::ShutdownModule()
{
#if WITH_GAMEPLAY_DEBUGGER
	IGameplayDebugger& GameplayDebuggerModule = IGameplayDebugger::Get();
	GameplayDebuggerModule.UnregisterCategory(TEXT("GAS_Attributes"));
#endif
}
