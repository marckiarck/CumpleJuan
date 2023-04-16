// Fill out your copyright notice in the Description page of Project Settings.


#include "CumpleJuan/Game/CompasManager/CompassComponent.h"
#include "CumpleJuan/Game/CompasManager/Notes/NotesRegister.h"

UCompassComponent::UCompassComponent()
{
	PrimaryComponentTick.bCanEverTick = false;

	audioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("AudioComponent"));
}


void UCompassComponent::BeginPlay()
{
	Super::BeginPlay();

	UCompassManager* compassManager = UCompassManager::GetInstance(GetOwner<AActor>());
	
	compass = compassManager->RegisterCompass(compassConfiguration);

	compass->GetOnCompassTick().AddDynamic(this, &UCompassComponent::OnCompassTick);
	compass->GetOnNoteRecievedDelegate().AddDynamic(this, &UCompassComponent::OnCompassRecieveNote);
}


void UCompassComponent::AddNoteToCompass(FName noteRow)
{
	UNotesRegister::GetInstance()->AddNoteToCompass(compass, noteRow);
}

void UCompassComponent::OnCompassTick()
{
	audioComponent->SetSound(compassSound);
	audioComponent->Play();
}

void UCompassComponent::OnCompassRecieveNote(UBaseNote* recievedNote)
{
	audioComponent->SetSound(recievedNote->GetNoteSound());
	audioComponent->Play();
}
