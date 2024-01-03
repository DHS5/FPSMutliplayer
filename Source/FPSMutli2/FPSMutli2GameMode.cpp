// Copyright Epic Games, Inc. All Rights Reserved.

#include "FPSMutli2GameMode.h"
#include "FPSMutli2Character.h"
#include "UObject/ConstructorHelpers.h"

AFPSMutli2GameMode::AFPSMutli2GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
