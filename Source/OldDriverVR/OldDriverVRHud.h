// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
#pragma once
#include "GameFramework/HUD.h"
#include "OldDriverVRHud.generated.h"


UCLASS(config = Game)
class AOldDriverVRHud : public AHUD
{
	GENERATED_BODY()

public:
	AOldDriverVRHud();

	/** Font used to render the vehicle info */
	UPROPERTY()
	UFont* HUDFont;

	// Begin AHUD interface
	virtual void DrawHUD() override;
	// End AHUD interface

};
