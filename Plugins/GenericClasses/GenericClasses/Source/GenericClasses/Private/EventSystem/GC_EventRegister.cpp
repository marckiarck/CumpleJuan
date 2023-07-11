// Fill out your copyright notice in the Description page of Project Settings.


#include "GenericClasses/Public/EventSystem/GC_EventRegister.h"



void UGC_EventRegister::OnPooledObjectCreated(FDataTableRowHandle creationDataHandle)
{
	if (const UDataTable* eventDatatable = creationDataHandle.DataTable)
	{
		FString contextString = TEXT("Event Register Creation");
		if (const FGC_EventRegisterDataRow* eventRegisterRow = eventDatatable->FindRow<FGC_EventRegisterDataRow>(creationDataHandle.RowName, contextString))
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

void UGC_EventRegister::OnPooledObjectDestroyed()
{
	ShutDownEventRegister();

	if (GEngine)
	{
		GEngine->OnWorldAdded().Remove(OnWorldAddedDelegateHandle);
		GEngine->OnWorldDestroyed().Remove(OnWorldDestroyedDelegateHandle);
	}
}

void UGC_EventRegister::UpdateEventQueue()
{
	
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
