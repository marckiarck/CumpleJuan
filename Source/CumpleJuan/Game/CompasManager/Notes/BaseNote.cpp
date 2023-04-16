// Fill out your copyright notice in the Description page of Project Settings.


#include "CumpleJuan/Game/CompasManager/Notes/BaseNote.h"
#include "BaseNote.h"

void UBaseNote::ConfigureNote(FNoteDataRow* noteData)
{
	unitCost = noteData->unitCost;
	noteSound = noteData->sound;
}

float UBaseNote::GetUnitCost()
{
	return unitCost;
}

USoundCue* UBaseNote::GetNoteSound()
{
	return noteSound;
}
