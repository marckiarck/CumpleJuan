// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CumpleJuan/Game/GAS/AbilitySystemDataComponent.h"
#include "AbilitySystemComponent.h"
#include "BaseCharacter.generated.h"

UCLASS()
class CUMPLEJUAN_API ABaseCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABaseCharacter();

private:
	UPROPERTY(Transient)
	UAbilitySystemComponent* abilitySystemComponent = nullptr;
	UPROPERTY(EditAnywhere, Category=AbilitySystem)
	UAbilitySystemDataComponent* abilitySystemDataComponent = nullptr;


protected:
	virtual void BeginPlay() override;

private:
	void OnMoveSpeedChanged(const FOnAttributeChangeData& Data);
};
