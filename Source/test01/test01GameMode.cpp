// Copyright Epic Games, Inc. All Rights Reserved.

#include "test01GameMode.h"
#include "test01HUD.h"
#include "test01Character.h"
#include "UObject/ConstructorHelpers.h"

Atest01GameMode::Atest01GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = Atest01HUD::StaticClass();
}
