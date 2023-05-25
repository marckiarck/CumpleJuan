// Fill out your copyright notice in the Description page of Project Settings.


#include "CumpleJuan/Game/GAS/DebugCategories/PlayerAttriutesDebugCategory.h"
#include "../AbilitySystemDataComponent.h"
#include "../AttributeSets/CharacterAttributes.h"

#if WITH_GAMEPLAY_DEBUGGER

FPlayerAttriutesDebugCategory::FPlayerAttriutesDebugCategory()
{
	bShowOnlyWithDebugActor = false;

	SetDataPackReplication(&DataPack);
}

void FPlayerAttriutesDebugCategory::CollectData(APlayerController* OwnerPC, AActor* DebugActor)
{
	if (OwnerPC)
	{
		APawn* player = OwnerPC->GetPawn();
		if (player)
		{
			UAbilitySystemDataComponent* playerAbilityData = player->FindComponentByClass<UAbilitySystemDataComponent>();
			if (playerAbilityData)
			{
				const UCharacterAttributes* characterAttributes = playerAbilityData->GetAttributes<UCharacterAttributes>();
				if (characterAttributes)
				{
					DataPack.actorName = OwnerPC->GetPawn()->GetName();
					DataPack.maxHealth = FString::SanitizeFloat(characterAttributes->GetmaxHealth());
					DataPack.health = FString::SanitizeFloat(characterAttributes->Gethealth());
					DataPack.damage = FString::SanitizeFloat(characterAttributes->Getdamage());
				}
				
			}
		}
	}
	
}

void FPlayerAttriutesDebugCategory::DrawData(APlayerController* OwnerPC, FGameplayDebuggerCanvasContext& CanvasContext)
{
	if (!DataPack.actorName.IsEmpty())
	{
		CanvasContext.Printf(TEXT("{blue}[ACTOR NAME         ->         %s]"), *DataPack.actorName);
		CanvasContext.Printf(TEXT("{cyan}[MAX HEALTH]{white} == {white}(%s)"), *DataPack.maxHealth);
		CanvasContext.Printf(TEXT("{cyan}[HEALTH]    {white} == {white}(%s)"), *DataPack.health);
		CanvasContext.Printf(TEXT("{cyan}[DAMAGE]  {white} == {white}(%s)"), *DataPack.damage);
	}
}

TSharedRef<FGameplayDebuggerCategory> FPlayerAttriutesDebugCategory::MakeInstance()
{
	return MakeShareable(new FPlayerAttriutesDebugCategory());
}

void FPlayerAttriutesDebugCategory::FAbilitySys::Serialize(FArchive& Ar)
{
	Ar << actorName;
	Ar << maxHealth;
	Ar << health;
	Ar << damage;
}

#endif // WITH_GAMEPLAY_DEBUGGER