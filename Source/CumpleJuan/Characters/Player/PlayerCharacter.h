// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CumpleJuan/Characters/BaseCharacter.h"
#include "CumpleJuan/Core/Input/InputBehaviourComponent.h"
#include "PlayerCharacter.generated.h"


UCLASS()
class CUMPLEJUAN_API APlayerCharacter : public ABaseCharacter
{
	GENERATED_BODY()

public:
	APlayerCharacter();

private:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
		class UInputMappingContext* DefaultMappingContext;

	UPROPERTY(EditAnywhere, Category = Input)
		TSubclassOf<UInputBehaviourComponent> inputBehaviourClass;

	UPROPERTY(Transient)
		UInputBehaviourComponent* InputBehaviourComponent = nullptr;

protected:
	virtual void BeginPlay() override;
};
