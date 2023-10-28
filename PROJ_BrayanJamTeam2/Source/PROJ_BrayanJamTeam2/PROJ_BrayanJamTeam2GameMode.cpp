// Copyright Epic Games, Inc. All Rights Reserved.

#include "PROJ_BrayanJamTeam2GameMode.h"
#include "PROJ_BrayanJamTeam2Character.h"
#include "UObject/ConstructorHelpers.h"

APROJ_BrayanJamTeam2GameMode::APROJ_BrayanJamTeam2GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
