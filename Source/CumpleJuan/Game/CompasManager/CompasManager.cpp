// Fill out your copyright notice in the Description page of Project Settings.


#include "CumpleJuan/Game/CompasManager/CompasManager.h"

UCompassManager::UCompassManager()
{
	tickingCompasses = TArray<UCompass*>();
	unTickingCompasses = TArray<UCompass*>();
}

UCompassManager* UCompassManager::instance = nullptr;

UCompassManager* UCompassManager::GetInstance(AActor* requestingActor)
{
	if (instance == nullptr && requestingActor)
	{
		instance = NewObject<UCompassManager>();
		instance->contextWorld = requestingActor->GetWorld();
	}

	return instance;
}

const FCompasssHandler UCompassManager::RegisterCompass(UCompassConfiguration* compassConfiguration, bool addedTicking)
{
	UCompass* newCompass = NewObject<UCompass>();

	newCompass->ConfigureCompass(compassConfiguration);

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

UCompass* UCompassManager::GetCompass(FCompasssHandler compassHandler)
{
	for (UCompass* tickingCompass : tickingCompasses)
	{
		if (tickingCompass == compassHandler.storedCompass)
		{
			return tickingCompass;
		}
	}

	for (UCompass* unTickingCompass : unTickingCompasses)
	{
		if (unTickingCompass == compassHandler.storedCompass)
		{
			return unTickingCompass;
		}
	}

	return nullptr;
}

void UCompassManager::StartCompassTick()
{
	ShutDownCompassTick();

	for (UCompass* tickingCompass : tickingCompasses)
	{
		tickingCompass->InitialzeCompass(contextWorld);
	}
}

void UCompassManager::ShutDownCompassTick()
{
	for (UCompass* tickingCompass : tickingCompasses)
	{
		tickingCompass->ShutDownCompass();
	}
}

int FCompasssHandler::handlerIdSequence = 0;

FCompasssHandler::FCompasssHandler() : handlerId(++handlerIdSequence)
{
}
