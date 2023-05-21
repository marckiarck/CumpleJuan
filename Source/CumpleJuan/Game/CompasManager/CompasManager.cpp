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
	if (instance == nullptr || instance->IsValidLowLevel() == false)
	{
		instance = NewObject<UCompassManager>();
	}

	if (requestingActor)
	{
		instance->contextWorld = requestingActor->GetWorld();
	}

	return instance;
}

UCompass* UCompassManager::RegisterCompass(UCompassConfiguration* compassConfiguration, bool addedTicking)
{
	UCompass* newCompass = NewObject<UCompass>();

	newCompass->ConfigureCompass(compassConfiguration);

	if (addedTicking)
	{
		tickingCompasses.Add(newCompass);
		StartCompassTick(); //Ensure all the compasses has the same start time
	}
	else
	{
		unTickingCompasses.Add(newCompass);
	}

	return newCompass;
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
	TArray<int> invalidIndexes;
	int currentIndex = 0;
	for (UCompass* tickingCompass : tickingCompasses)
	{
		if (tickingCompass)
		{
			tickingCompass->ShutDownCompass();
		}
		else
		{
			invalidIndexes.Add(currentIndex);
		}

		++currentIndex;
	}

	for (int index : invalidIndexes)
	{
		tickingCompasses.RemoveAt(index);
	}
}
