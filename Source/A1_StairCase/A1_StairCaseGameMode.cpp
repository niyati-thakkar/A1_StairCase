// Copyright Epic Games, Inc. All Rights Reserved.

#include "A1_StairCaseGameMode.h"
#include "A1_StairCaseCharacter.h"
#include "UObject/ConstructorHelpers.h"

AA1_StairCaseGameMode::AA1_StairCaseGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
