// Fill out your copyright notice in the Description page of Project Settings.


#include "CumpleJuan/Game/CompasManager/Notes/NoteActor.h"

// Sets default values
ANoteActor::ANoteActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ANoteActor::BeginPlay()
{
	Super::BeginPlay();
	
	baseNote = NewObject<UBaseNote>();
	baseNote->ConfigureNote(noteRow);
}

// Called every frame
void ANoteActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

UBaseNote* ANoteActor::GetBaseNote()
{
	return baseNote;
}

