// Fill out your copyright notice in the Description page of Project Settings.


#include "CumpleJuan/Characters/Player/PlayerCharacter.h"
#include "EnhancedInputSubsystems.h"

APlayerCharacter::APlayerCharacter()
{
	InputBehaviourComponent = Cast<UInputBehaviourComponent>(CreateDefaultSubobject(TEXT("InputBehaviour"), inputBehaviourClass, inputBehaviourClass, true, true));
}

void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();

	if (APlayerController* PlayerController = Cast<APlayerController>(Controller))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}
}
