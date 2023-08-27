// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GenericClasses/Public/ObjectPooler/GC_PooledObjectInterface.h"
#include "GC_Character.generated.h"

USTRUCT(BlueprintType, Blueprintable)
struct GENERICCLASSES_API FGC_CharacterSpawnRow : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

};

UCLASS(BlueprintType, Blueprintable)
class GENERICCLASSES_API AGC_Character : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AGC_Character();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
};
