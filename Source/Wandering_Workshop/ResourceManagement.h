// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ClassReferences.h"
#include "Kismet/BlueprintFunctionLibrary.h"


#include "ResourceManagement.generated.h"
UCLASS()
class WANDERING_WORKSHOP_API UResourceManagement : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	public:
	static TSoftObjectPtr<UClassReferences> pClassReferences;

	UFUNCTION(BlueprintCallable)
	static TSubclassOf<AActor> GetClassFromResource(EResource Resource);
	UFUNCTION(BlueprintCallable)
	static TSubclassOf<AActor> GetAmmoFromResource(EResource Resource);
	UFUNCTION(BlueprintCallable)
	static bool IsAmmo(EResource Resource);
	UFUNCTION(BlueprintCallable)
	static EResource RecipeCheck(EResource Resource1,EResource Resource2);
	
};
