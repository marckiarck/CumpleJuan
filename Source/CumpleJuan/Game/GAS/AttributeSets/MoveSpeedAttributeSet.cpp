// Fill out your copyright notice in the Description page of Project Settings.


#include "CumpleJuan/Game/GAS/AttributeSets/MoveSpeedAttributeSet.h"

void UMoveSpeedAttributeSet::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
{
	if (Attribute.GetUProperty() == FindFieldChecked<FProperty>(UMoveSpeedAttributeSet::StaticClass(), GET_MEMBER_NAME_CHECKED(UMoveSpeedAttributeSet, moveSpeed)))
	{
		NewValue = FMath::Clamp(NewValue, minSpeed.GetCurrentValue(), maxSpeed.GetCurrentValue());
	}
}
