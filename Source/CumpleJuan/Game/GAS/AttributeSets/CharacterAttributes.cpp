// Fill out your copyright notice in the Description page of Project Settings.


#include "CumpleJuan/Game/GAS/AttributeSets/CharacterAttributes.h"

void UCharacterAttributes::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
{
	Super::PreAttributeChange(Attribute, NewValue);

	if (Attribute.GetUProperty() == FindFieldChecked<FProperty>(UCharacterAttributes::StaticClass(), GET_MEMBER_NAME_CHECKED(UCharacterAttributes, health)))
	{
		NewValue = FMath::Clamp(NewValue, 0.0f, maxHealth.GetCurrentValue());
	}

}