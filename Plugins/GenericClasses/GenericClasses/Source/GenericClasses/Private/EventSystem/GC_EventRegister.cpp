// Fill out your copyright notice in the Description page of Project Settings.


#include "GenericClasses/Public/EventSystem/GC_EventRegister.h"
#include "SingletonRegister/GC_SingletonRegister.h"
#include "ObjectPooler/GC_ObjectPooler.h"
#include "EventSystem/GC_EventSequence.h"


UGC_Event* UGC_EventRegister::RegisterEvent(TSubclassOf<UGC_Event> eventClass, FDataTableRowHandle eventSpawnHandle, float launchDelay)
{
	UGC_ObjectPooler* objectPooler = UGC_SingletonRegister::GetInstance<UGC_ObjectPooler>();
	UGC_Event* registeredEvent = objectPooler->NewUObject<UGC_Event>(eventClass, eventSpawnHandle);

	eventQueue.Enqueue(registeredEvent, launchDelay);

	TArray<UGC_Event*> testArray;
	eventQueue.GetQueueArray(testArray);

	return registeredEvent;
}

UGC_EventSequence* UGC_EventRegister::RegisterEventSequence(UGC_EventSequenceDataAsset* sequenceData)
{
	if (sequenceData == nullptr)
	{
		ensureMsgf(sequenceData == nullptr, TEXT("Your are trying to register a event sequence with a null sequenceData"));
		return nullptr;
	}

	UGC_ObjectPooler* objectPooler = UGC_SingletonRegister::GetInstance<UGC_ObjectPooler>();
	UGC_EventSequence* eventSequence = objectPooler->NewUObject<UGC_EventSequence>();
	eventSequence->ConfigureEventSequence(sequenceData);

	return eventSequence;
}

TArray<const UGC_Event*> UGC_EventRegister::GetLaunchedEvents()
{
	TArray<const UGC_Event*> returnedArray;
	for (const UGC_Event* launchedEvent : launchedEvents)
	{
		returnedArray.Add(launchedEvent);
	}

	return returnedArray;
}

TArray<const UGC_Event*> UGC_EventRegister::GetQueuedEvents()
{
	TArray<const UGC_Event*> returnedArray;
	TArray<UGC_Event*> queuedEvents;
	eventQueue.GetQueueArray(queuedEvents);
	for (const UGC_Event* queuedEvent : queuedEvents)
	{
		returnedArray.Add(queuedEvent);
	}

	return returnedArray;
}

void UGC_EventRegister::OnInstanceCreated_Implementation(FDataTableRowHandle singletonDataHandle)
{
	if (const UDataTable* eventDatatable = singletonDataHandle.DataTable)
	{
		FString contextString = TEXT("Event Register Creation");
		if (const FGC_EventRegisterDataRow* eventRegisterRow = eventDatatable->FindRow<FGC_EventRegisterDataRow>(singletonDataHandle.RowName, contextString))
		{
			queueDeltaTime = FMath::Max(0.f, eventRegisterRow->queueDeltaTime);
		}
	}

	InitializeEventRegister();

	if (GEngine)
	{
		OnWorldAddedDelegateHandle = GEngine->OnWorldAdded().AddUFunction(this, FName("OnWorldAdded"));
		OnWorldDestroyedDelegateHandle = GEngine->OnWorldDestroyed().AddUFunction(this, FName("OnWorldDestroyed"));
	}
}

void UGC_EventRegister::OnResetInstance_Implementation(FDataTableRowHandle singletonDataHandle)
{
	ShutDownEventRegister();

	if (GEngine)
	{
		GEngine->OnWorldAdded().Remove(OnWorldAddedDelegateHandle);
		GEngine->OnWorldDestroyed().Remove(OnWorldDestroyedDelegateHandle);
	}

	Execute_OnInstanceCreated(this, singletonDataHandle);
}

void UGC_EventRegister::UpdateEventQueue()
{
	TArray<UGC_Event*> poppedEvents;
	eventQueue.Dequeue(queueDeltaTime, poppedEvents);

	//This for should be a  eventQueueDelegate??
	for (UGC_Event* poppedEventIt : poppedEvents)
	{
		poppedEventIt->GetOnFinishEventDelegate().AddUObject(this, &UGC_EventRegister::OnEventFinish);
		launchedEvents.Add(poppedEventIt);
	}

	TArray<UGC_Event*> launchedEventsCpy = launchedEvents;
	for (UGC_Event* eventIt : launchedEventsCpy)
	{
		eventIt->LaunchEvent(queueDeltaTime);
	}

	//PrintDebug();
}

void UGC_EventRegister::InitializeEventRegister()
{
	timerWorld = GEngine->GetCurrentPlayWorld();
	if (timerWorld)
	{
		timerWorld->GetTimerManager().ClearTimer(queueTimerHandle);
		timerWorld->GetTimerManager().SetTimer(queueTimerHandle, this, &UGC_EventRegister::UpdateEventQueue, queueDeltaTime, true);
	}

	eventQueue = TGC_EventQueue<UGC_Event>();
}

void UGC_EventRegister::ShutDownEventRegister()
{
	if (timerWorld)
	{
		timerWorld->GetTimerManager().ClearTimer(queueTimerHandle);
		timerWorld = nullptr;
	}

}

void UGC_EventRegister::OnWorldDestroyed(UWorld* destroyedWorld)
{
	if (destroyedWorld == timerWorld)
	{
		ShutDownEventRegister();
	}
}

void UGC_EventRegister::OnWorldAdded(UWorld* addedWorld)
{
	if (timerWorld == nullptr)
	{
		InitializeEventRegister();
	}
}

void UGC_EventRegister::BindToEventsOnFinish(TArray<UGC_Event*> eventsArray)
{
	for (UGC_Event* eventIt : eventsArray)
	{
		eventIt->GetOnFinishEventDelegate().AddUObject(this, &UGC_EventRegister::OnEventFinish);
	}
}

void UGC_EventRegister::OnEventFinish(UGC_Event* finishedEvent)
{
	// When a event finishes it removes itself from the ObjectPool. 
	//That's why EventRegister don't need to clear functions binded to events
	launchedEvents.Remove(finishedEvent);
}

void UGC_EventRegister::PrintDebug()
{
	GEngine->AddOnScreenDebugMessage(-1, 0.1f, FColor::Yellow, TEXT("Launched Events:"));
	for (const UGC_Event* launchedEvent : launchedEvents)
	{
		GEngine->AddOnScreenDebugMessage(-1, 0.1f, FColor::Yellow, launchedEvent->GetName());
	}

	GEngine->AddOnScreenDebugMessage(-1, 0.1f, FColor::Green, TEXT("Queued Events:"));
	TArray<UGC_Event*> queuedEvents;
	eventQueue.GetQueueArray(queuedEvents);
	for (const UGC_Event* queuedEvent : queuedEvents)
	{
		GEngine->AddOnScreenDebugMessage(-1, 0.1f, FColor::Green, queuedEvent->GetName());
	}
}
