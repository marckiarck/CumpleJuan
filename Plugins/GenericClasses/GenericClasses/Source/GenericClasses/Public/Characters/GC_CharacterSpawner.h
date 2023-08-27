// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GC_Character.h"
#include "GC_CharacterSpawner.generated.h"

UCLASS()
class AGC_CharacterSpawner : public AActor
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, Category = CharacterSpawner)
		TSubclassOf<AGC_Character> characterClass;

	UPROPERTY(EditAnywhere, Category = CharacterSpawner, meta = (RowType = "GC_CharacterSpawnRow"))
		FDataTableRowHandle spawnDataRowHandle;

	UPROPERTY(Transient)
		AGC_Character* spawnedCharacter;
	
public:	
	// Sets default values for this actor's properties
	AGC_CharacterSpawner();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

};
