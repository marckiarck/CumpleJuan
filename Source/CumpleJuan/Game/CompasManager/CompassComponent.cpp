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

	if (UEnhancedInputComponent* enhancedInputComponent = CastChecked<UEnhancedInputComponent>(owner->FindComponentByClass<UInputComponent>()))
	{
		enhancedInputComponent->BindAction(blackNoteBind, ETriggerEvent::Completed, this, &UCompassComponent::AddBlackNoteToCompass);
		enhancedInputComponent->BindAction(whiteNoteBind, ETriggerEvent::Completed, this, &UCompassComponent::AddWhiteNoteToCompass);
		enhancedInputComponent->BindAction(corcheaNoteBind, ETriggerEvent::Completed, this, &UCompassComponent::AddCorcheaNoteToCompass);
	}

	FActorSpawnParameters params;
	blackNoteActor = GetWorld()->SpawnActor<ANoteActor>(blackNoteClass, params);
	whiteNoteActor = GetWorld()->SpawnActor<ANoteActor>(whiteNoteClass, params);
	corcheaNoteActor = GetWorld()->SpawnActor<ANoteActor>(corcheaNoteClass, params);
}


void UCompassComponent::AddNoteToCompass(FName noteRow)
{
	UNotesRegister::GetInstance()->AddNoteToCompass(compass, noteRow);
}

void UCompassComponent::AddBlackNoteToCompass()
{
	GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Red, TEXT("Black note"));
	AddNoteToCompass(BLACK_NOTE_ROW);
}

void UCompassComponent::AddWhiteNoteToCompass()
{
	GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Green, TEXT("White note"));
	AddNoteToCompass(WHITE_NOTE_ROW);
}

void UCompassComponent::AddCorcheaNoteToCompass()
{
	GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Blue, TEXT("Corchea note"));
	AddNoteToCompass(CORCHEA_NOTE_ROW);
}

void UCompassComponent::LaunchNoteAbility(FString tagString, UBaseNote* recievedNote)
{
	if (recievedNote == nullptr)
	{
		return;
	}

	ANoteActor* recievedNoteActor = GetNoteActor(recievedNote);
	if (recievedNoteActor)
	{
		FGameplayTag abilityTag = FGameplayTag::RequestGameplayTag(FName(tagString), false);

		UNoteAbilityData* noteData = NewObject<UNoteAbilityData>();
		noteData->noteActor = recievedNoteActor;
		noteData->failRecieveNoteSound = compass->GetFailRecieveNoteSoud();
		FGameplayEventData DataEvent;
		DataEvent.OptionalObject = noteData;
		UAbilitySystemBlueprintLibrary::SendGameplayEventToActor(GetOwner<AActor>(), abilityTag, DataEvent);
	}
	
}

ANoteActor* UCompassComponent::GetNoteActor(UBaseNote* referenceNote)
{
	if (blackNoteActor->GetBaseNote()->GetNoteID() == referenceNote->GetNoteID())
	{
		return blackNoteActor;
	}
	else if (whiteNoteActor->GetBaseNote()->GetNoteID() == referenceNote->GetNoteID())
	{
		return whiteNoteActor;
	}
	else if (corcheaNoteActor->GetBaseNote()->GetNoteID() == referenceNote->GetNoteID())
	{
		return whiteNoteActor;
	}

	return nullptr;
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