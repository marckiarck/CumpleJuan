// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "CumpleJuan/macros.h"
#include "CharacterAttributes.generated.h"

/**
 *
 */
UCLASS()
class CUMPLEJUAN_API UCharacterAttributes : public UAttributeSet
{
	GENERATED_BODY()

		UPROPERTY(Category = "Ability System | Attributes", VisibleAnywhere)
		FGameplayAttributeData maxHealth;

	UPROPERTY(Category = "Ability System | Attributes", VisibleAnywhere)
		FGameplayAttributeData health;

	UPROPERTY(Category = "Ability System | Attributes", VisibleAnywhere)
		FGameplayAttributeData damage;

public:
	ATTRIBUTE_ACCESSORS(UCharacterAttributes, maxHealth)
	ATTRIBUTE_ACCESSORS(UCharacterAttributes, health)
	ATTRIBUTE_ACCESSORS(UCharacterAttributes, damage)

	virtual void PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue) override;
};
