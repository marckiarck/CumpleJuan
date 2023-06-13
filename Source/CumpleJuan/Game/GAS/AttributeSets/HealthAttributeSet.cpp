// Fill out your copyright notice in the Description page of Project Settings.


#include "CumpleJuan/Game/GAS/AttributeSets/HealthAttributeSet.h"
#include "AbilitySystemBlueprintLibrary.h"

void UHealthAttributeSet::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
{
	Super::PreAttributeChange(Attribute, NewValue);

	if (Attribute.GetUProperty() == FindFieldChecked<FProperty>(UHealthAttributeSet::StaticClass(), GET_MEMBER_NAME_CHECKED(UHealthAttributeSet, health)))
	{
		NewValue = FMath::Clamp(NewValue, 0.0f, maxHealth.GetCurrentValue());
	}

}

void UHealthAttributeSet::PostAttributeChange(const FGameplayAttribute& Attribute, float OldValue, float NewValue)
{
	Super::PostAttributeChange(Attribute, OldValue, NewValue);

	PreAttributeChange(Attribute, NewValue);

	UAbilitySystemComponent* owningAbilitySystem = GetOwningAbilitySystemComponent();
	if (NewValue == 0.f && owningAbilitySystem)
	{
		owningAbilitySystem->AddLooseGameplayTag(FGameplayTag::RequestGameplayTag(ZERO_HEALTH_TAG));
		LaunchZeroHealthAbility();
	}
	else if (owningAbilitySystem)
	{
		owningAbilitySystem->RemoveLooseGameplayTag(FGameplayTag::RequestGameplayTag(ZERO_HEALTH_TAG));
		zeroHealthAbilityLaunched = false;
	}
}

void UHealthAttributeSet::LaunchZeroHealthAbility()
{
	if (zeroHealthAbilityLaunched == false)
	{
		FGameplayTag abilityTag = FGameplayTag::RequestGameplayTag(ZERO_HEALTH_ABILITY_TAG, false);

		FGameplayEventData DataEvent;
		UAbilitySystemBlueprintLibrary::SendGameplayEventToActor(GetOwningActor(), abilityTag, DataEvent);

		zeroHealthAbilityLaunched = true;
	}
}
