// Copyright Epic Games, Inc. All Rights Reserved.

#include "PandemicHeartsGameMode.h"
#include "PandemicHeartsCharacter.h"
#include "UObject/ConstructorHelpers.h"

APandemicHeartsGameMode::APandemicHeartsGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
