// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EResource.h"
#include "FRecipeInput.h"
#include "Engine/DataAsset.h"
#include "ClassReferences.generated.h"

/**
 * 
 */


UCLASS()
class WANDERING_WORKSHOP_API UClassReferences : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<EResource,TSubclassOf<AActor>> ClassReferences;
	UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<EResource,TSubclassOf<AActor>> AmmoReferences;
	UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FRecipeInput,EResource> Recipes;
	
};
