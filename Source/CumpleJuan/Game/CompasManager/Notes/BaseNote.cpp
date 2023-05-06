// Fill out your copyright notice in the Description page of Project Settings.


#include "CumpleJuan/Game/CompasManager/Notes/BaseNote.h"
#include "BaseNote.h"

void UBaseNote::ConfigureNote(FNoteDataRow* noteData)
{
	noteID = noteData->noteID;
	unitCost = noteData->unitCost;
	noteSound = noteData->sound;
}

FName UBaseNote::GetNoteID()
{
	return noteID;
}

float UBaseNote::GetUnitCost()
{
	return unitCost;
}

USoundCue* UBaseNote::GetNoteSound()
{
	return noteSound;
}
