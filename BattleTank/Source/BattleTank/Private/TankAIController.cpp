// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleTank.h"
#include "TankAIController.h"

void ATankAIController::BeginPlay()
{
	Super::BeginPlay();

	auto ControlledTank = GetControlledTank();
	auto PlayerControlledTank = GetPlayerTank();

	if (!PlayerControlledTank) 
	{
		UE_LOG(LogTemp, Error, TEXT("AI could not find Player Tank"))
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("%s is aiming at %s!"), *(ControlledTank->GetName()), *(PlayerControlledTank->GetName()))
	}
}

ATank* ATankAIController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}

ATank* ATankAIController::GetPlayerTank() const
{
	auto PlayerPawn = GetWorld()->GetFirstPlayerController()->GetPawn();
	if (!PlayerPawn) { return nullptr; }
	else { return Cast<ATank>(PlayerPawn); }
}


