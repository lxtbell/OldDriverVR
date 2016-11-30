// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "OldDriverVR.h"
#include "OldDriverVRGameMode.h"
#include "OldDriverVRPawn.h"
#include "OldDriverVRHud.h"

AOldDriverVRGameMode::AOldDriverVRGameMode()
{
	DefaultPawnClass = AOldDriverVRPawn::StaticClass();
	HUDClass = AOldDriverVRHud::StaticClass();
}
