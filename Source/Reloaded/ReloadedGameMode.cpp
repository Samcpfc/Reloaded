// Copyright Epic Games, Inc. All Rights Reserved.

#include "ReloadedGameMode.h"
#include "ReloadedCharacter.h"
#include "UObject/ConstructorHelpers.h"

AReloadedGameMode::AReloadedGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
