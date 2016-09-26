// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleTank.h"
#include "Tank.h"
#include "TankAIController.h"

void ATankAIController::BeginPlay()
{
	Super::BeginPlay();


}

void ATankAIController::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	auto MyTank = Cast<ATank>(GetPawn());
	auto PlayerTank = Cast<ATank>(GetWorld()->GetFirstPlayerController()->GetPawn());
	
	if (!MyTank || !PlayerTank)
	{
		UE_LOG(LogTemp, Error, TEXT("AI could not find Player Tank"))
	}
	else
	{
		MyTank->AimAt(PlayerTank->GetActorLocation());

		MyTank->Fire(); // TODO don't fire every frame
	}
}
