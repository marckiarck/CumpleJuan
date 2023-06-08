// Fill out your copyright notice in the Description page of Project Settings.


#include "CumpleJuan/Game/CompasManager/CompassComponent.h"
#include "CumpleJuan/Game/CompasManager/Notes/NotesRegister.h"
#include "EnhancedInputComponent.h"
#include "AbilitySystemBlueprintLibrary.h"
#include <CumpleJuan/Game/GAS/AbilityData/NoteAbilityData.h>

UCompassComponent::UCompassComponent()
{
	PrimaryComponentTick.bCanEverTick = false;

	audioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("AudioComponent"));
}


UAbilitySystemComponent* UCompassComponent::GetAbilitySystemComponent() const
{
	return abilitySystemComponent;
}

void UCompassComponent::BeginPlay()
{
	Super::BeginPlay();

	UCompassManager* compassManager = UCompassManager::GetInstance(GetOwner<AActor>());
	
	compass = compassManager->RegisterCompass(compassConfiguration);

	compass->GetOnCompassTick().AddDynamic(this, &UCompassComponent::OnCompassTick);
	compass->GetOnNoteRecievedDelegate().AddDynamic(this, &UCompassComponent::OnCompassRecieveNote);
	compass->GetOnNoteFailedDelegate().AddDynamic(this, &UCompassComponent::OnCompassFailedNote);

	AActor* owner = GetOwner<AActor>();
	abilitySystemComponent = owner->FindComponentByClass<UAbilitySystemComponent>();

	noteActorsMap.Empty();
	FActorSpawnParameters params;
	for (TSubclassOf<ANoteActor> noteActorClassIt : noteActors)
	{
		ANoteActor* spawnedNoteActor = GetWorld()->SpawnActor<ANoteActor>(noteActorClassIt, params);
		noteActorsMap.Add(spawnedNoteActor->GetBaseNote()->GetNoteID(), spawnedNoteActor);
	}
}


void UCompassComponent::AddNoteToCompass(FName noteRow)
{
	UNotesRegister::GetInstance()->AddNoteToCompassByRow(compass, noteRow);
}

void UCompassComponent::LaunchNoteAbility(FString tagString, UBaseNote* recievedNote)
{
	if (recievedNote == nullptr)
	{
		return;
	}

	ANoteActor* noteActor = nullptr;
	FName noteID = recievedNote->GetNoteID();
	if (noteActorsMap.Contains(noteID))
	{
		noteActor = noteActorsMap[noteID];
	}

	FGameplayTag abilityTag = FGameplayTag::RequestGameplayTag(FName(tagString), false);

	UNoteAbilityData* noteData = NewObject<UNoteAbilityData>();
	noteData->noteActor = noteActor;
	noteData->failRecieveNoteSound = compass->GetFailRecieveNoteSoud();
	FGameplayEventData DataEvent;
	DataEvent.OptionalObject = noteData;
	UAbilitySystemBlueprintLibrary::SendGameplayEventToActor(GetOwner<AActor>(), abilityTag, DataEvent);
	
}

void UCompassComponent::OnCompassTick()
{
	audioComponent->SetSound(compassSound);
	audioComponent->Play();
}

void UCompassComponent::OnCompassRecieveNote(UBaseNote* recievedNote)
{

	if (recievedNote)
	{
		FString tagString = FString::Printf(TEXT("Compass.Trigger.%s"), *recievedNote->GetNoteID().ToString());
		LaunchNoteAbility(tagString, recievedNote);
	}

}

void UCompassComponent::OnCompassFailedNote(UBaseNote* recievedNote)
{
	if (recievedNote)
	{
		FString tagString = TEXT("Compass.Trigger.Fail");
		LaunchNoteAbility(tagString, recievedNote);
	}
}