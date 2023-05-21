// Fill out your copyright notice in the Description page of Project Settings.


#include "CumpleJuan/Game/CompasManager/Notes/BaseNote.h"
#include "Kismet/GameplayStatics.h"
#include "BaseNote.h"

void UBaseNote::ConfigureNote(FNoteDataRow& noteData)
{
	noteID = noteData.noteID;
	unitCost = noteData.unitCost;
	noteSound = noteData.sound;
}

const void UBaseNote::PlayNoteSound(AActor* soundOwner)
{
	UGameplayStatics::PlaySoundAtLocation(soundOwner->GetWorld(), noteSound, soundOwner->GetActorLocation());
}

const FName UBaseNote::GetNoteID()
{
	return noteID;
}

const float UBaseNote::GetUnitCost()
{
	return unitCost;
}

USoundCue* UBaseNote::GetNoteSound()
{
	return noteSound;
}
