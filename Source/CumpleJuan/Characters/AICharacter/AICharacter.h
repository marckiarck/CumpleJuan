// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CumpleJuan/Characters/BaseCharacter.h"
#include "CumpleJuan/Core/ObjectPool/BasePooledObjectInterface.h"
#include "AIModule/Classes/AIController.h"
#include "CumpleJuan/Characters/Spawner/BaseCharacterSpawner.h"
#include "ObjectPooler/GC_PooledObjectInterface.h"
#include "AICharacter.generated.h"


USTRUCT(BlueprintType, Blueprintable)
struct CUMPLEJUAN_API FAICharacterSpawnRow : public FGC_CharacterSpawnRow
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere)
		TSubclassOf<AAIController> controllerClass;
};

UCLASS()
class CUMPLEJUAN_API AAICharacter : public ABaseCharacter
{
	GENERATED_BODY()

protected:
	void OnPooledObjectCreated(FDataTableRowHandle creationDataHandle) override;

};
