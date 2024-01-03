// Copyright Epic Games, Inc. All Rights Reserved.


#include "FPSMutli2/Public/PlayerController/FPSMutli2PlayerController.h"

#include "EnhancedInputSubsystems.h"

void AFPSMutli2PlayerController::BeginPlay()
{
	Super::BeginPlay();

	// get the enhanced input subsystem
	if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
	{
		// add the mapping context so we get controls
		Subsystem->AddMappingContext(InputMappingContext, 0);

		UE_LOG(LogTemp, Warning, TEXT("BeginPlay"));
	}
}