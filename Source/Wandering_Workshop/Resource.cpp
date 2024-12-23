// Fill out your copyright notice in the Description page of Project Settings.


#include "Resource.h"
#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

UENUM(BlueprintType)
enum class EMyEnum : uint8
{
    Option1 UMETA(DisplayName = "Fuel"),
    Option2 UMETA(DisplayName = "Fire"),
    Option3 UMETA(DisplayName = "Wind"),
    Option4 UMETA(DisplayName = "CannonBall"),
    Option5 UMETA(DisplayName = "FireBall"),
    Option6 UMETA(DisplayName = "WindBall"),
    Option7 UMETA(DisplayName = "GreaseBall"),
};
