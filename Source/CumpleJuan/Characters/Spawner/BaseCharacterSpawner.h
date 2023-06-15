// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/DataTable.h"
#include "GameFramework/Character.h"
#include "AIModule/Classes/AIController.h"
#include "BaseCharacterSpawner.generated.h"

USTRUCT(BlueprintType, Blueprintable)
struct CUMPLEJUAN_API FCharacterSpawnRow : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere)
	TSubclassOf<ACharacter> characterClass;
};

UCLASS()
class CUMPLEJUAN_API ABaseCharacterSpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABaseCharacterSpawner();

private:
	UPROPERTY(EditAnywhere, meta =(RowType="CharacterSpawnRow"))
	FDataTableRowHandle spawnDataRowHandle;

	UPROPERTY(Transient)
	ACharacter* spawnedCharacter;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

};
