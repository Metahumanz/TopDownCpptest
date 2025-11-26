// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "TopDownCpptestGameMode.h"
#include "TopDownCpptestPlayerController.h"
#include "TopDownCpptestCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATopDownCpptestGameMode::ATopDownCpptestGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ATopDownCpptestPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}