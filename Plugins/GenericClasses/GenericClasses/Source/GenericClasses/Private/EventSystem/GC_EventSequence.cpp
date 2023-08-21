// Fill out your copyright notice in the Description page of Project Settings.


#include "GenericClasses/Public/EventSystem/GC_EventSequence.h"
#include "GenericClasses/Public/GenericClassesMinimals.h"

void UGC_EventSequence::ConfigureEventSequence(UGC_EventSequenceDataAsset* sequenceData)
{
	eventCreationDataArray = sequenceData->eventCreationDataArray;
	currentEvent = 0;

	RegisterSequenceEvent();
}

void UGC_EventSequence::RegisterSequenceEvent()
{
	if (currentEvent == eventCreationDataArray.Num())
	{
		UGC_ObjectPooler* objectPooler = UGC_SingletonRegister::GetInstance<UGC_ObjectPooler>();
		objectPooler->DestroyUObject<UGC_EventSequence>(this);
		return;
	}

	FGC_EventCreationData& currentEvenCreationData = eventCreationDataArray[currentEvent];
	UGC_EventRegister* eventRegister = UGC_SingletonRegister::GetInstance<UGC_EventRegister>();
	UGC_Event* sequenceEvent = eventRegister->RegisterEvent(currentEvenCreationData.eventClass, currentEvenCreationData.eventSpawnHandle, currentEvenCreationData.launchDelay);
	sequenceEvent->GetOnFinishEventDelegate().AddUObject(this, &UGC_EventSequence::OnSequenceEventFinish);
	++currentEvent;
}

void UGC_EventSequence::OnSequenceEventFinish(UGC_Event* finishedEvent)
{
	RegisterSequenceEvent();
}