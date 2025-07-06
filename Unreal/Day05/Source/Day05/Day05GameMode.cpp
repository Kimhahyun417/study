// Copyright Epic Games, Inc. All Rights Reserved.

#include "Day05GameMode.h"
#include "Day05Character.h"
#include "UObject/ConstructorHelpers.h"

ADay05GameMode::ADay05GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
