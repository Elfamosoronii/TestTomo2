// Copyright Epic Games, Inc. All Rights Reserved.

#include "Test_Tomo_RoniGameMode.h"
#include "Test_Tomo_RoniCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATest_Tomo_RoniGameMode::ATest_Tomo_RoniGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
