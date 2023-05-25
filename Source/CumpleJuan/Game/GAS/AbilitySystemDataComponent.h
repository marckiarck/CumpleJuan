// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/DataTable.h"
#include "AbilitySystemDataComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class CUMPLEJUAN_API UAbilitySystemDataComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UAbilitySystemDataComponent();

private:
	UPROPERTY(EditAnywhere)
	TArray<TSubclassOf<class UGameplayAbility>> addedAbilities;

	UPROPERTY(EditAnywhere)
	TArray<TSubclassOf<class UAttributeSet>> addedAtributeSets;

	UPROPERTY(Transient)
	TMap<FString,const class UAttributeSet*> attributesMap;

	UPROPERTY(EditAnywhere, meta = (RequiredAssetDataTags = "RowStructure=AttributeMetaData"))
	UDataTable* attributtesDatatable;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	const FString GetAttributeSetKey(TSubclassOf<class UAttributeSet> attributeSetClass);
	
public:
	template <typename T>
	const T* GetAttributes()
	{
		if (attributesMap.Contains(GetAttributeSetKey(T::StaticClass())))
		{
			return static_cast<const T*>(attributesMap[GetAttributeSetKey(T::StaticClass())]);
		}
		else
		{
			return nullptr;
		}
	}
};
