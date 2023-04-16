// Fill out your copyright notice in the Description page of Project Settings.


#include "CumpleJuan/Game/CompasManager/Notes/NotesRegister.h"
#include <CumpleJuan/Game/CompasManager/CompasManager.h>

UNotesRegister* UNotesRegister::instance = nullptr;

UNotesRegister* UNotesRegister::GetInstance()
{
	if (instance == nullptr)
	{
		instance = NewObject<UNotesRegister>();
	}

	return instance;
}

void UNotesRegister::AddNoteToCompass(FCompasssHandler compassHandler)
{
	UBaseNote* newNote = NewObject<UBaseNote>();
	UCompass* compass = UCompassManager::GetInstance()->GetCompass(compassHandler);

	ensure(compass);
	if (compass)
	{
		compass->RecieveNote(newNote);
	}
}
