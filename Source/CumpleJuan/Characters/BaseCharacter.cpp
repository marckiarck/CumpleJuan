// Fill out your copyright notice in the Description page of Project Settings.


#include "CumpleJuan/Characters/BaseCharacter.h"
#include "EnhancedInputSubsystems.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "CumpleJuan/Game/GAS/AttributeSets/MoveSpeedAttributeSet.h"

// Sets default values
ABaseCharacter::ABaseCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	abilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("Ability System"));
	abilitySystemDataComponent = CreateDefaultSubobject<UAbilitySystemDataComponent>(TEXT("Ability Data"));
}

void ABaseCharacter::BeginPlay()
{
	Super::BeginPlay();

	const UMoveSpeedAttributeSet* moveSpeedAttributeSet = abilitySystemDataComponent->GetAttributes<UMoveSpeedAttributeSet>();
	GetCharacterMovement()->MaxWalkSpeed = moveSpeedAttributeSet->GetmoveSpeed();

	abilitySystemComponent->GetGameplayAttributeValueChangeDelegate(moveSpeedAttributeSet->GetmoveSpeedAttribute()).AddUObject(this, &ABaseCharacter::OnMoveSpeedChanged);
}

void ABaseCharacter::OnMoveSpeedChanged(const FOnAttributeChangeData& Data)
{
	GetCharacterMovement()->MaxWalkSpeed = abilitySystemDataComponent->GetAttributes<UMoveSpeedAttributeSet>()->GetmoveSpeed();
}

