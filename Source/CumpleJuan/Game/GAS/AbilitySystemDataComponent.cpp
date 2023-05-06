// Fill out your copyright notice in the Description page of Project Settings.


#include "CumpleJuan/Game/GAS/AbilitySystemDataComponent.h"
#include "AbilitySystemComponent.h"

// Sets default values for this component's properties
UAbilitySystemDataComponent::UAbilitySystemDataComponent()
{
	PrimaryComponentTick.bCanEverTick = false;

}


// Called when the game starts
void UAbilitySystemDataComponent::BeginPlay()
{
	Super::BeginPlay();

	UAbilitySystemComponent* abilitySystem = GetOwner<AActor>()->FindComponentByClass<UAbilitySystemComponent>();
	if (abilitySystem)
	{
		for (TSubclassOf<UGameplayAbility> ability : addedAbilities)
		{
			if (ability)
			{

				abilitySystem->GiveAbility(FGameplayAbilitySpec(ability.GetDefaultObject(), 1, 0));
			}
		}
	}
	
}


