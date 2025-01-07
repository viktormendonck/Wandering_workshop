// Fill out your copyright notice in the Description page of Project Settings.

#include "ResourceManagement.h"

TSoftObjectPtr<UClassReferences> UResourceManagement::pClassReferences =TSoftObjectPtr<UClassReferences>( FSoftClassPath("/Game/Blueprints/GameInfo.GameInfo"));

TSubclassOf<AActor> UResourceManagement::GetClassFromResource(EResource Resource)
{
	return *pClassReferences.LoadSynchronous()->ClassReferences.Find(Resource);
}

TSubclassOf<AActor> UResourceManagement::GetAmmoFromResource(EResource Resource)
{
	return *pClassReferences.LoadSynchronous()->AmmoReferences.Find(Resource);
}

bool UResourceManagement::IsAmmo(EResource Resource)
{
	switch (Resource)
	{
	case EResource::CannonBall:
	case EResource::FireBall:
	case EResource::GreaseBall :
	case EResource::WindBall :
		return true;
	default:
		return false;		
	}
}

EResource UResourceManagement::RecipeCheck(EResource Resource1, EResource Resource2)
{
	FRecipeInput RecipeInput{Resource1, Resource2};
	EResource* result = pClassReferences.LoadSynchronous()->Recipes.Find(RecipeInput);
	if (result != nullptr) {return *result;}
	FRecipeInput RecipeInputSwapped{Resource2, Resource1};
	result = pClassReferences.LoadSynchronous()->Recipes.Find(RecipeInputSwapped);
	if (result != nullptr) {return *result;}
	return EResource::Empty;
}

FRecipeInput UResourceManagement::ReverseRecipe(EResource Resource)
{
	for (const TPair<FRecipeInput, EResource>& pair : pClassReferences.LoadSynchronous()->Recipes)
	{
		if (pair.Value == Resource)
		{
			return pair.Key;
		}
	}
	return FRecipeInput{};
}
