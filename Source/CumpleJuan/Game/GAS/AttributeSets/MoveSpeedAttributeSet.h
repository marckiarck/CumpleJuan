// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "CumpleJuan/macros.h"
#include "MoveSpeedAttributeSet.generated.h"


UCLASS()
class CUMPLEJUAN_API UMoveSpeedAttributeSet : public UAttributeSet
{

	GENERATED_BODY()

private:
	UPROPERTY(Category = "Ability System | Attributes", VisibleAnywhere)
		FGameplayAttributeData maxSpeed;

	UPROPERTY(Category = "Ability System | Attributes", VisibleAnywhere)
		FGameplayAttributeData minSpeed;

	UPROPERTY(Category = "Ability System | Attributes", VisibleAnywhere)
		FGameplayAttributeData moveSpeed;

public:
	ATTRIBUTE_ACCESSORS(UMoveSpeedAttributeSet, maxSpeed)
		ATTRIBUTE_ACCESSORS(UMoveSpeedAttributeSet, minSpeed)
		ATTRIBUTE_ACCESSORS(UMoveSpeedAttributeSet, moveSpeed)

		virtual void PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue) override;
};
