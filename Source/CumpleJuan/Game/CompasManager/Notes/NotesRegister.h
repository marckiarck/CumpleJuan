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

	UFUNCTION(BlueprintPure, meta=(DisplayName="GetNotesRegister"))
		static UNotesRegister* GetInstance();

	UFUNCTION(BlueprintCallable, Category="NotesRegister")
	void AddNoteToCompass(struct FCompasssHandler compassHandler);
};
