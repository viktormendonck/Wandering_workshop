// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ResourceFuncs.generated.h"


UCLASS()
class WANDERING_WORKSHOP_API UResourceFuncs : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	public: 
		UFUNCTION(BlueprintCallable, Category = "MyLibrary")
		static TSubclassOf<AActor> GetClassFromResource();
};
