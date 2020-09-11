// Copyright Epic Games, Inc. All Rights Reserved.

#include "FirstCppProject2GameMode.h"
#include "FirstCppProject2HUD.h"
#include "FirstCppProject2Character.h"
#include "UObject/ConstructorHelpers.h"

AFirstCppProject2GameMode::AFirstCppProject2GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AFirstCppProject2HUD::StaticClass();
}
