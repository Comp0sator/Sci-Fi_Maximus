// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "Console2GameMode.h"
#include "Console2Character.h"
#include "UObject/ConstructorHelpers.h"

AConsole2GameMode::AConsole2GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
