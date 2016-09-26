// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/StaticMeshComponent.h"
#include "TankBarrel.generated.h"

/**
 * 
 */
UCLASS(meta = (BlueprintSpawnableComponent))
class BATTLETANK_API UTankBarrel : public UStaticMeshComponent
{
	GENERATED_BODY()
	
public:
	// -1 is max downward speed, +1 is max upward speed
	void Elevate(float RelativeSpeed);
	
private:
	UPROPERTY(EditDefaultsOnly, Category = Setup)
	float MaxDegreesPerSecond = 5; // Sensible number

	UPROPERTY(EditDefaultsOnly, Category = Setup)
	float MinDegreesElevation = 0;

	UPROPERTY(EditDefaultsOnly, Category = Setup)
	float MaxDegreesElevation = 50;
};
