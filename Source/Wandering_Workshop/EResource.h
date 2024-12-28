// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

UENUM(BlueprintType)
enum class EResource : uint8
{
	Empty UMETA(DisplayName = "Empty"),
	Fuel UMETA(DisplayName = "Fuel"),
	Fire UMETA(DisplayName = "Fire"),
	Wind UMETA(DisplayName = "Wind"),
	CannonBall UMETA(DisplayName = "CannonBall"),
	FireBall UMETA(DisplayName = "FireBall"),
	WindBall UMETA(DisplayName = "WindBall"),
	GreaseBall UMETA(DisplayName = "GreaseBall"),
};




