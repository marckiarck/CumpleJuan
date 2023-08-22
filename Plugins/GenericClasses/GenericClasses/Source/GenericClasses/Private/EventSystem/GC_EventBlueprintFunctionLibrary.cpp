// Fill out your copyright notice in the Description page of Project Settings.


#include "EventSystem/GC_EventBlueprintFunctionLibrary.h"
#include "SingletonRegister/GC_SingletonRegister.h"
#include "EventSystem/GC_EventSequence.h"


void UGC_EventBlueprintFunctionLibrary::RegisterEvent(TSubclassOf<UGC_Event> eventClass, FDataTableRowHandle eventSpawnHandle, const FOnFinish onEventFinish, float launchDelay /*= 0.f*/)
{
	UGC_EventRegister* eventRegister = UGC_SingletonRegister::GetInstance<UGC_EventRegister>();

	UGC_Event* registeredEvent = eventRegister->RegisterEvent(eventClass, eventSpawnHandle, launchDelay);
	registeredEvent->GetOnFinishEventDelegate().AddLambda([=](UGC_Event* finishedEvent) {onEventFinish.ExecuteIfBound(); });
}

void UGC_EventBlueprintFunctionLibrary::RegisterEventSequence(class UGC_EventSequenceDataAsset* sequenceData, const FOnFinish onEventSequenceFinish)
{
	UGC_EventRegister* eventRegister = UGC_SingletonRegister::GetInstance<UGC_EventRegister>();

	UGC_EventSequence* registeredEventSequence = eventRegister->RegisterEventSequence(sequenceData);
	registeredEventSequence->GetOnEventSequenceFinsihDelegate().AddLambda([=]() {onEventSequenceFinish.ExecuteIfBound(); });
}

void UGC_EventBlueprintFunctionLibrary::TestFunction(float value, int num, float& outValue, const FOnTest onTest)
{
	outValue = value;
	GEngine->AddOnScreenDebugMessage(-1, 1000000.f, FColor::Yellow, FString::Printf(TEXT("%f\n%d"), value, num));
	onTest.ExecuteIfBound(TEXT("onTestString"));
}
