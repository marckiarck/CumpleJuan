// Fill out your copyright notice in the Description page of Project Settings.


#include "CumpleJuan/Characters/AICharacter/AICharacter.h"
#include "CumpleJuan/Core/CoreMinimals.h"

void AAICharacter::OnPooledObjectCreated(FDataTableRowHandle creationDataHandle)
{
	FString ContextString = TEXT("AICharacter creation context");
	if (const UDataTable* spawnDatatable = creationDataHandle.DataTable)
	{
		if (const FAICharacterSpawnRow* spawnRow = creationDataHandle.DataTable->FindRow<FAICharacterSpawnRow>(creationDataHandle.RowName, ContextString))
		{
			if (UBaseObjectPooler* objectPooler = UBaseSingletonRegister::GetInstance<UBaseObjectPooler>())
			{
				AAIController* controller = objectPooler->SpawnActor<AAIController>(GetLevel(), spawnRow->controllerClass, GetActorTransform(), creationDataHandle);
				controller->Possess(this);
			}
		}
	}
}
