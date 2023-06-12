// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CumpleJuan/Game/CompasManager/Notes/BaseNote.h"
#include "NoteActor.generated.h"

UCLASS()
class CUMPLEJUAN_API ANoteActor : public AActor
{
	GENERATED_BODY()
	
private:
	UPROPERTY(EditAnywhere)
		FDataTableRowHandle noteRowHandle;

public:
	const FName GetNoteID();
};
