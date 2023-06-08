// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include <CumpleJuan/Game/CompasManager/Notes/BaseNote.h>
#include <CumpleJuan/Game/CompasManager/Compass.h>
#include "NotesRegister.generated.h"


UCLASS()
class CUMPLEJUAN_API UNotesRegister : public UObject
{
	GENERATED_BODY()

public:
	static UNotesRegister* instance;

	UFUNCTION(BlueprintPure, meta = (DisplayName = "GetNotesRegister"))
		static UNotesRegister* GetInstance();

	UNotesRegister();

private:
	UPROPERTY(EditDefaultsOnly)
		UDataTable* notesDatatable;

public:
	UFUNCTION(BlueprintCallable, Category = "NotesRegister")
		void AddNoteToCompassByRow(class UCompass* compass, FName noteData);

	UFUNCTION(BlueprintCallable, Category = "NotesRegister")
		void AddNoteToCompass(class UCompass* compass, UBaseNote* addedNote);
};
