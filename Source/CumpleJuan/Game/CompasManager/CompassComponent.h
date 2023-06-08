// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CumpleJuan/Game/CompasManager/CompasManager.h"
#include "CumpleJuan/Game/CompasManager/Compass.h"
#include <Components/AudioComponent.h>
#include <GameplayAbilities/Public/AbilitySystemInterface.h>
#include "AbilitySystemComponent.h"
#include "InputMappingContext.h"
#include <CumpleJuan/Game/CompasManager/Notes/NoteActor.h>
#include "CompassComponent.generated.h"

UCLASS(BlueprintType, Blueprintable, ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class CUMPLEJUAN_API UCompassComponent : public UActorComponent, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UCompassComponent();

private:

	UPROPERTY(Transient)
		UCompass* compass;

	UPROPERTY(EditAnywhere)
		UCompassConfiguration* compassConfiguration;

	UPROPERTY(Transient)
		UAudioComponent* audioComponent;

	UPROPERTY(EditAnywhere, meta = (DisplayName = "Compass Sound"))
		USoundCue* compassSound = nullptr;

	UPROPERTY(Transient)
		UAbilitySystemComponent* abilitySystemComponent;

	UPROPERTY(EditAnywhere)
	TArray<TSubclassOf<ANoteActor>> noteActors;

	UPROPERTY(Transient)
	TMap<FName, ANoteActor*> noteActorsMap;


	UAbilitySystemComponent* GetAbilitySystemComponent() const override;

public:
	UFUNCTION(BlueprintCallable)
		void AddNoteToCompass(FName noteRow);

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

private:

	void LaunchNoteAbility(FString tagString, UBaseNote* recievedNote);

	UFUNCTION()
		void OnCompassTick();

	UFUNCTION()
		void OnCompassRecieveNote(UBaseNote* recievedNote);

	UFUNCTION()
		void OnCompassFailedNote(UBaseNote* recievedNote);

};
