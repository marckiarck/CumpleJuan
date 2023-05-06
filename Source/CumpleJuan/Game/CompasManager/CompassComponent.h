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

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
		class UInputAction* blackNoteBind;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
		class UInputAction* whiteNoteBind;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
		class UInputAction* corcheaNoteBind;

	FName BLACK_NOTE_ROW = TEXT("Black");
	FName WHITE_NOTE_ROW = TEXT("White");
	FName CORCHEA_NOTE_ROW = TEXT("Corchea");

	UPROPERTY(Transient)
		UAbilitySystemComponent* abilitySystemComponent;


	UAbilitySystemComponent* GetAbilitySystemComponent() const override;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

private:

	UFUNCTION(BlueprintCallable)
		void AddNoteToCompass(FName noteRow);

	UFUNCTION()
		void AddBlackNoteToCompass();

	UFUNCTION()
		void AddWhiteNoteToCompass();

	UFUNCTION()
		void AddCorcheaNoteToCompass();

	UFUNCTION()
		void OnCompassTick();

	UFUNCTION()
		void OnCompassRecieveNote(UBaseNote* recievedNote);

};
