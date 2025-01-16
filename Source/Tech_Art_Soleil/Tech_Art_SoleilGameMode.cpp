// Copyright Epic Games, Inc. All Rights Reserved.

#include "Tech_Art_SoleilGameMode.h"
#include "Tech_Art_SoleilCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATech_Art_SoleilGameMode::ATech_Art_SoleilGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
