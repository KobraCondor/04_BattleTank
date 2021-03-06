// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "AIController.h"
#include "TankAimingComponent.h"
#include "TankAIController.generated.h"

// Forward declaration
class UTankAimingComponent;

/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankAIController : public AAIController
{
	GENERATED_BODY()

private:
	void BeginPlay() override;
	void Tick(float DeltaSeconds) override;

	// How close the AI tank can get
	float AcceptanceRadius = 3000;
};
