// Copyright Epic Games, Inc. All Rights Reserved.

#include "CumpleJuanGameMode.h"
#include "CumpleJuanCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACumpleJuanGameMode::ACumpleJuanGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
