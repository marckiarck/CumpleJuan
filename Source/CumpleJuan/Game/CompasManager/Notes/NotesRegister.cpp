// Fill out your copyright notice in the Description page of Project Settings.


#include "CumpleJuan/Game/CompasManager/Notes/NotesRegister.h"
#include <CumpleJuan/Game/CompasManager/CompasManager.h>

const FString DATATABLE_PATH = TEXT("/Game/Datatables/NotesRegister");

UNotesRegister* UNotesRegister::instance = nullptr;

UNotesRegister* UNotesRegister::GetInstance()
{
	if (instance == nullptr || instance->IsValidLowLevel() == false)
	{
		instance = NewObject<UNotesRegister>();
	}

	return instance;
}

UNotesRegister::UNotesRegister()
{
	static ConstructorHelpers::FObjectFinder<UDataTable> datatable(*DATATABLE_PATH);
	ensure(datatable.Object);

	notesDatatable = datatable.Object;
}

void UNotesRegister::AddNoteToCompassByRow(UCompass* compass, FName noteData)
{
	UBaseNote* newNote = NewObject<UBaseNote>();

	FString ContextString = TEXT("Data table context");
	FNoteDataRow* row = nullptr;


	row = notesDatatable->FindRow<FNoteDataRow>(noteData, ContextString, true);

	if (row)
	{
		newNote->ConfigureNote(*row);
	}

	AddNoteToCompass(compass, newNote);
}

void UNotesRegister::AddNoteToCompass(UCompass* compass, UBaseNote* addedNote)
{
	ensure(compass);
	if (compass && addedNote)
	{
		compass->RecieveNote(addedNote);
	}
}
