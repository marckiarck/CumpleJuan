// Fill out your copyright notice in the Description page of Project Settings.


#include "CumpleJuan/Core/Input/InputBehaviourComponent.h"
#include "EnhancedInputSubsystems.h"

// Sets default values for this component's properties
UInputBehaviourComponent::UInputBehaviourComponent()
{
	PrimaryComponentTick.bCanEverTick = false;

}


// Called when the game starts
void UInputBehaviourComponent::BeginPlay()
{
	Super::BeginPlay();
	
	APawn* ownerPawn = GetOwner<APawn>();
	if (APlayerController* PlayerController = Cast<APlayerController>(ownerPawn->GetController()))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(mappingContext, 0);
		}
	}
}


