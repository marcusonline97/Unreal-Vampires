// Copyright Epic Games, Inc. All Rights Reserved.

#include "Vampire_Game_UE5GameMode.h"
#include "Vampire_Game_UE5Character.h"
#include "UObject/ConstructorHelpers.h"

AVampire_Game_UE5GameMode::AVampire_Game_UE5GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
