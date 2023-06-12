// Fill out your copyright notice in the Description page of Project Settings.


#include "CumpleJuan/Game/CompasManager/Notes/NoteActor.h"
#include "BaseNote.h"


const FName ANoteActor::GetNoteID()
{
	FString ContextString = TEXT("Data table context");
	if (FNoteDataRow* noteRow = noteRowHandle.DataTable->FindRow<FNoteDataRow>(noteRowHandle.RowName, ContextString))
	{
		return noteRow->noteID;
	}
	else
	{
		return TEXT("None");
	}
	
}
