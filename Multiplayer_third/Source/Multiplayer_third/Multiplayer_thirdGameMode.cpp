// Copyright Epic Games, Inc. All Rights Reserved.

#include "Multiplayer_thirdGameMode.h"
#include "Multiplayer_thirdCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMultiplayer_thirdGameMode::AMultiplayer_thirdGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
