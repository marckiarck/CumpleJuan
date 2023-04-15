// Fill out your copyright notice in the Description page of Project Settings.


#include "CumpleJuan/Game/CompasManager/CompasManager.h"

UCompassManager::UCompassManager()
{
	registeredCompasses = TArray<UCompass*>();
	tickingCompasses = TArray<UCompass*>();
	unTickingCompasses = TArray<UCompass*>();
}

UCompassManager* UCompassManager::instance = nullptr;

UCompassManager* UCompassManager::GetInstance(UWorld* world)
{
	if (instance == nullptr)
	{
		instance = NewObject<UCompassManager>();
		instance->contextWorld = world;
	}

	return instance;
}

const FCompasssHandler UCompassManager::RegisterCompass(UCompassConfiguration* compassConfiguration, bool addedTicking)
{
	UCompass* newCompass = NewObject<UCompass>();

	newCompass->ConfigureCompass(compassConfiguration);
	registeredCompasses.Add(newCompass);
	if (addedTicking)
	{
		tickingCompasses.Add(newCompass);
	}
	else
	{
		unTickingCompasses.Add(newCompass);
	}

	FCompasssHandler newCompassHandler = FCompasssHandler();
	newCompassHandler.storedCompass = newCompass;
	return newCompassHandler;
}

void UCompassManager::StartCompassTick()
{
	contextWorld->GetTimerManager().SetTimer(compassTickTimerHandle, this, &UCompassManager::OnCompassTick, compassTickfrecuency, true, compassTickfrecuency);
}

void UCompassManager::ShutDownCompassTick()
{
	contextWorld->GetTimerManager().ClearTimer(compassTickTimerHandle);
}

FOnCompassTickDelegate& UCompassManager::GetOnCompassTick()
{
	return OnCompassTickDelegate;
}

void UCompassManager::OnCompassTick()
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 0.17f, FColor::Green, TEXT("Compas Tick"));
	}

	OnCompassTickDelegate.Broadcast();
}

int FCompasssHandler::handlerIdSequence = 0;

FCompasssHandler::FCompasssHandler() : handlerId(++handlerIdSequence)
{
}
