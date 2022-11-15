// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SExplosiveBarrel.generated.h"

class URadialForceComponent;
class UStaticMeshComponent;

UCLASS()
class ACTIONROGUELIKE_API ASExplosiveBarrel : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASExplosiveBarrel();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere)
		URadialForceComponent* RadialForceComp;

	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* StaticMeshComp;



public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called if static mesh registers component hit event
	virtual void Explode();

};
