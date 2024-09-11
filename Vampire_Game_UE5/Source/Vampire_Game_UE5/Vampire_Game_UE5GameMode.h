// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Vampire_Game_UE5GameMode.generated.h"

UCLASS(minimalapi)
class AVampire_Game_UE5GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AVampire_Game_UE5GameMode();
	virtual void InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage);
};



