// Copyright Epic Games, Inc. All Rights Reserved.

#include "WorkshopDemoProjectGameMode.h"
#include "WorkshopDemoProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AWorkshopDemoProjectGameMode::AWorkshopDemoProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
