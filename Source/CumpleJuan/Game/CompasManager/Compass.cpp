// Fill out your copyright notice in the Description page of Project Settings.


#include "CumpleJuan/Game/CompasManager/Compass.h"

void UCompass::ConfigureCompass(UCompassConfiguration* compassConfiguration)
{
	numTicks = compassConfiguration->numTicks;
	tickTime = compassConfiguration->tickTime;
	tickfrequency = compassConfiguration->tickfrequency;
	failRecieveNoteSound = compassConfiguration->failRecieveNoteSound;
}

void UCompass::InitialzeCompass(UWorld* contextWorld)
{
	tickIndex = -1;
	tickPortionFilled = 0.f;

	compassWorld = contextWorld;
	compassWorld->GetTimerManager().SetTimer(compassTickTimerHandle, this, &UCompass::CompassTick, tickfrequency, true, tickfrequency);
}

void UCompass::ShutDownCompass()
{
	if (compassWorld)
	{
		if (compassWorld->GetTimerManager().IsTimerActive(compassTickTimerHandle))
		{
			compassWorld->GetTimerManager().ClearTimer(compassTickTimerHandle);
		}
		
	}
}

void UCompass::RecieveNote(UBaseNote* recievedNote)
{
	if (tickPortionFilled < 1.f)
	{
		GEngine->AddOnScreenDebugMessage(-1, 0.17f, FColor::Green, TEXT("Added Note"));

		tickPortionFilled += recievedNote->GetUnitCost();
		OnNoteRecievedDelegate.Broadcast(recievedNote);
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 0.17f, FColor::Green, TEXT("Failed Adding Note"));
		OnNoteFailedDelegate.Broadcast(recievedNote);
	}
}

USoundCue* UCompass::GetFailRecieveNoteSoud()
{
	return failRecieveNoteSound;
}

void UCompass::CompassTick()
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 0.17f, FColor::Magenta, FString::Printf(TEXT("Compass: %d/%d, Filled: %f"), tickIndex, numTicks, tickPortionFilled));
	}

	tickIndex = ++tickIndex % numTicks;
	tickPortionFilled = FMath::Max(0.f, tickPortionFilled - 1.f);

	OnCompassTickDelegate.Broadcast();
}

FOnCompassTickDelegate& UCompass::GetOnCompassTick()
{
	return OnCompassTickDelegate;
}

FOnNoteRecievedDelegate& UCompass::GetOnNoteRecievedDelegate()
{
	return OnNoteRecievedDelegate;
}

FOnNoteRecievedDelegate& UCompass::GetOnNoteFailedDelegate()
{
	return OnNoteFailedDelegate;
}