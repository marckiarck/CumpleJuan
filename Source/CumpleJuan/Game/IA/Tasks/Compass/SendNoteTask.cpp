// Fill out your copyright notice in the Description page of Project Settings.


#include "CumpleJuan/Game/IA/Tasks/Compass/SendNoteTask.h"
#include "AIController.h"
#include "CumpleJuan/Game/CompasManager/CompassComponent.h"



EBTNodeResult::Type USendNoteTask::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AAIController* ownerController = OwnerComp.GetAIOwner();
	APawn* owner = ownerController->GetPawn();
	if (owner)
	{
		UCompassComponent* compassComponent = owner->FindComponentByClass<UCompassComponent>();
		if (compassComponent)
		{
			compassComponent->AddNoteToCompass(rowHandle.RowName);
			return EBTNodeResult::Succeeded;
		}
	}

	return EBTNodeResult::Failed;
}

FString USendNoteTask::GetStaticDescription() const
{
	return TEXT("Send the selected note to the character's compass");
}

TArray<FString> UTestDropdown::GetNameOptions() const
{
	return NameOptions;
}
