// Fill out your copyright notice in the Description page of Project Settings.


#include "CumpleJuan/Game/Events/AddNoteToCompassEvent.h"
#include "../CompasManager/CompassComponent.h"
#include "GenericClasses/Public/GenericClassesMinimals.h"

void UAddNoteToCompassEvent::OnEventStarted()
{
	if (compassComponent == nullptr)
	{
		

		FinishEvent();
	}

	compassComponent->AddNoteToCompass(noteRow);
	FinishEvent();
}

void UAddNoteToCompassEvent::OnPooledObjectCreated(FDataTableRowHandle creationDataHandle)
{
	Super::OnPooledObjectCreated(creationDataHandle);

	noteRow = creationDataHandle.RowName;
}

void UAddNoteToCompassEvent::ProvideAditionalData(UObject* aditionalData)
{
	if (UCompassComponent* providedAditionalCompassComponent = Cast<UCompassComponent>(aditionalData))
	{
		compassComponent = providedAditionalCompassComponent;
	}
	else if (AActor* providedActor = Cast<AActor>(aditionalData))
	{
		compassComponent = providedActor->FindComponentByClass<UCompassComponent>();
	}
}
