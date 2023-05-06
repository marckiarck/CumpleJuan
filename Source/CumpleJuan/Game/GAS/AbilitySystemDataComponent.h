// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AbilitySystemDataComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class CUMPLEJUAN_API UAbilitySystemDataComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UAbilitySystemDataComponent();

private:
	UPROPERTY(EditAnywhere)
	TArray<TSubclassOf<class UGameplayAbility>> addedAbilities;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	
};
