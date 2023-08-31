// Fill out your copyright notice in the Description page of Project Settings.


#include "EventSystem/GC_EventBlueprintFunctionLibrary.h"
#include "SingletonRegister/GC_SingletonRegister.h"
#include "EventSystem/GC_EventSequence.h"
#include "DataStructures/Datatable/GC_DataTable.h"
#include "EventSystem/Events/GC_BlueprintEvent.h"


void UGC_EventBlueprintFunctionLibrary::RegisterEvent(FGC_EventCreationData eventCreationData, const FOnFinish onEventFinish, UObject* aditionalData)
{
	UGC_EventRegister* eventRegister = UGC_SingletonRegister::GetInstance<UGC_EventRegister>();

	UGC_Event* registeredEvent = eventRegister->RegisterEvent(eventCreationData, aditionalData);
	registeredEvent->GetOnFinishEventDelegate().AddLambda([=](UGC_Event* finishedEvent) {onEventFinish.ExecuteIfBound(); });
}

void UGC_EventBlueprintFunctionLibrary::RegisterEventSequence(class UGC_EventSequenceDataAsset* sequenceData, const FOnFinish onEventSequenceFinish, UObject* aditionalData)
{
	UGC_EventRegister* eventRegister = UGC_SingletonRegister::GetInstance<UGC_EventRegister>();

	UGC_EventSequence* registeredEventSequence = eventRegister->RegisterEventSequence(sequenceData, aditionalData);
	registeredEventSequence->GetOnEventSequenceFinsihDelegate().AddLambda([=]() {onEventSequenceFinish.ExecuteIfBound(); });
}

void UGC_EventBlueprintFunctionLibrary::WaitDelay(float waitTime, const FOnFinish onFinish)
{
	UGC_EventRegister* eventRegister = UGC_SingletonRegister::GetInstance<UGC_EventRegister>();

	FGC_EventCreationData creationData = FGC_EventCreationData();
	creationData.eventClass = UGC_BlueprintEvent::StaticClass();
	creationData.eventDuration = waitTime;

	UGC_Event* conditionEvent = eventRegister->RegisterEvent(creationData);

	conditionEvent->GetOnTimeOutEventDelegate().AddLambda([=](UGC_Event* timedOutEvent) { onFinish.ExecuteIfBound(); });
}

void UGC_EventBlueprintFunctionLibrary::TestFunction(float value, int num, float& outValue, const FOnTest onTest, FGC_DataTableRowHandle rowHandle)
{
	outValue = value;
	GEngine->AddOnScreenDebugMessage(-1, 1000000.f, FColor::Yellow, FString::Printf(TEXT("%f\n%d"), value, num));
	onTest.ExecuteIfBound(TEXT("onTestString"));
}

