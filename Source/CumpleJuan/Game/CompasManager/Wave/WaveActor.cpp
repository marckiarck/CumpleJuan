// Fill out your copyright notice in the Description page of Project Settings.


#include "CumpleJuan/Game/CompasManager/Wave/WaveActor.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
AWaveActor::AWaveActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	waveMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Wave Mesh"));
}

// Called when the game starts or when spawned
void AWaveActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWaveActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AWaveActor::OnPooledObjectCreated(FDataTableRowHandle creationDataHandle)
{
	FString ContextString = TEXT("Data table context");
	FWaveActorDataRow* waveRowHandle = creationDataHandle.DataTable->FindRow<FWaveActorDataRow>(creationDataHandle.RowName, ContextString, true);
	if (waveRowHandle)
	{
		waveMesh->SetStaticMesh(waveRowHandle->waveMesh);
		if (waveRowHandle->waveMaterial)
		{
			waveMaterial = UMaterialInstanceDynamic::Create(waveRowHandle->waveMaterial, this);
			waveMesh->SetMaterial(0, waveMaterial);
		}

	}
}

