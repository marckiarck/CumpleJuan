// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CumpleJuan/Characters/BaseCharacter.h"
#include "CumpleJuan/Core/ObjectPool/BasePooledObjectInterface.h"
#include "AIModule/Classes/AIController.h"
#include "CumpleJuan/Characters/Spawner/BaseCharacterSpawner.h"
#include "AICharacter.generated.h"


USTRUCT(BlueprintType, Blueprintable)
struct CUMPLEJUAN_API FAICharacterSpawnRow : public FCharacterSpawnRow
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere)
		TSubclassOf<AAIController> controllerClass;
};

UCLASS()
class CUMPLEJUAN_API AAICharacter : public ABaseCharacter, public IBasePooledObjectInterface
{
	GENERATED_BODY()

protected:
	void OnPooledObjectCreated(FDataTableRowHandle creationDataHandle) override;

};
