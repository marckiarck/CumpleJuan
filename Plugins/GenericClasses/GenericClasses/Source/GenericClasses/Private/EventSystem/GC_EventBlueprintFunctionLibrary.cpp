// Fill out your copyright notice in the Description page of Project Settings.


#include "EventSystem/GC_EventBlueprintFunctionLibrary.h"
#include "SingletonRegister/GC_SingletonRegister.h"


void UGC_EventBlueprintFunctionLibrary::RegisterEvent(TSubclassOf<UGC_Event> eventClass, FDataTableRowHandle eventSpawnHandle, const FOnFinish onEventFinish, float launchDelay /*= 0.f*/)
{
	UGC_EventRegister* eventRagister = UGC_SingletonRegister::GetInstance<UGC_EventRegister>();

	UGC_Event* registeredEvent = eventRagister->RegisterEvent(eventClass, eventSpawnHandle, launchDelay);
	registeredEvent->GetOnFinishEventDelegate().AddLambda([=](UGC_Event* finishedEvent) {onEventFinish.ExecuteIfBound(); });
}

