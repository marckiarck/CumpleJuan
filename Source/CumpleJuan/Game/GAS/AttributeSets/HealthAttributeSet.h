// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "CumpleJuan/macros.h"
#include "HealthAttributeSet.generated.h"


#define ZERO_HEALTH_TAG TEXT("GameplayTag.Attribute.ZeroHealth")
#define ZERO_HEALTH_ABILITY_TAG TEXT("GameplayAbility.Trigger.ZeroHealth")

UCLASS()
class CUMPLEJUAN_API UHealthAttributeSet : public UAttributeSet
{
	GENERATED_BODY()

private:
	UPROPERTY(Category = "Ability System | Attributes", VisibleAnywhere)
		FGameplayAttributeData maxHealth;

	UPROPERTY(Category = "Ability System | Attributes", VisibleAnywhere)
		FGameplayAttributeData health;

	bool zeroHealthAbilityLaunched = false;

public:
	ATTRIBUTE_ACCESSORS(UHealthAttributeSet, maxHealth)
	ATTRIBUTE_ACCESSORS(UHealthAttributeSet, health)

	virtual void PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue) override;
	virtual void PostAttributeChange(const FGameplayAttribute& Attribute, float OldValue, float NewValue) override;

private:
	void LaunchZeroHealthAbility();
};
