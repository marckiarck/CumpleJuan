// Fill out your copyright notice in the Description page of Project Settings.


#include "CumpleJuan/Game/IA/Tasks/Compass/SendNoteTask.h"
#include "AIController.h"
#include "CumpleJuan/Game/CompasManager/CompassComponent.h"

bool FTestDropdown::operator==(FDataTableRowHandle const& Other) const
{
	return DataTable == Other.DataTable && RowName == Other.RowName;
}

bool FTestDropdown::operator != (FDataTableRowHandle const& Other) const
{
	return DataTable != Other.DataTable || RowName != Other.RowName;
}

void FTestDropdown::PostSerialize(const FArchive& Ar)
{
	//if (Ar.IsSaving() && !IsNull() && DataTable)
	//{
	//	// Note which row we are pointing to for later searching
	//	Ar.MarkSearchableName(DataTable, RowName);
	//}
}

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
