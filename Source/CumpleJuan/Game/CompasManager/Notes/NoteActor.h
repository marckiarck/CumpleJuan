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
	
public:	
	// Sets default values for this actor's properties
	ANoteActor();

private:
	UPROPERTY(EditAnywhere, DisplayName="Note Identifier")
	FNoteDataRow noteRow;

	UPROPERTY(Transient)
	UBaseNote* baseNote = nullptr;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintPure)
	UBaseNote* GetBaseNote();
};
