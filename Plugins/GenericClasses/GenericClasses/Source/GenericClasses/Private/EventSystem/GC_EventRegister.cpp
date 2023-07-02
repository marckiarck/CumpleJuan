// Fill out your copyright notice in the Description page of Project Settings.


#include "GenericClasses/Public/EventSystem/GC_EventRegister.h"

// Sets default values
AGC_EventRegister::AGC_EventRegister()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

void AGC_EventRegister::OnPooledObjectCreated(FDataTableRowHandle creationDataHandle)
{
	if (const UDataTable* eventDatatable = creationDataHandle.DataTable)
	{
		FString contextString = TEXT("Event Register Creation");
		if (const FGC_EventRegisterDataRow* eventRegisterRow = eventDatatable->FindRow<FGC_EventRegisterDataRow>(creationDataHandle.RowName, contextString))
		{
			queueDeltaTime = FMath::Max(0.f, eventRegisterRow->queueDeltaTime);
		}
	}

	GetWorld()->GetTimerManager().ClearTimer(queueTimerHandle);
	GetWorld()->GetTimerManager().SetTimer(queueTimerHandle, this, &AGC_EventRegister::UpdateEventQueue, queueDeltaTime, true);
}

void AGC_EventRegister::OnPooledObjectDestroyed()
{
	GetWorld()->GetTimerManager().ClearTimer(queueTimerHandle);
}

void AGC_EventRegister::UpdateEventQueue()
{

}
