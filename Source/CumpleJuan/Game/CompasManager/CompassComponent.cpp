// Fill out your copyright notice in the Description page of Project Settings.


#include "CumpleJuan/Game/CompasManager/CompassComponent.h"
#include "CumpleJuan/Game/CompasManager/Notes/NotesRegister.h"
#include "EnhancedInputComponent.h"
#include "AbilitySystemBlueprintLibrary.h"

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

	AActor* owner = GetOwner<AActor>();
	abilitySystemComponent = owner->FindComponentByClass<UAbilitySystemComponent>();

	if (UEnhancedInputComponent* enhancedInputComponent = CastChecked<UEnhancedInputComponent>(owner->FindComponentByClass<UInputComponent>()))
	{
		enhancedInputComponent->BindAction(blackNoteBind, ETriggerEvent::Completed, this, &UCompassComponent::AddBlackNoteToCompass);
		enhancedInputComponent->BindAction(whiteNoteBind, ETriggerEvent::Completed, this, &UCompassComponent::AddWhiteNoteToCompass);
		enhancedInputComponent->BindAction(corcheaNoteBind, ETriggerEvent::Completed, this, &UCompassComponent::AddCorcheaNoteToCompass);

	}
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

void UCompassComponent::OnCompassTick()
{
	audioComponent->SetSound(compassSound);
	audioComponent->Play();
}

void UCompassComponent::OnCompassRecieveNote(UBaseNote* recievedNote)
{
	audioComponent->SetSound(recievedNote->GetNoteSound());
	audioComponent->Play();

	FString tagString = FString::Printf(TEXT("Compass.Trigger.%s"), *recievedNote->GetNoteID().ToString());
	FGameplayEventData eventData;
	FGameplayTag abilityTag = FGameplayTag::RequestGameplayTag(FName(tagString), true);
	UAbilitySystemBlueprintLibrary::SendGameplayEventToActor(GetOwner<AActor>(), abilityTag, eventData);
}

