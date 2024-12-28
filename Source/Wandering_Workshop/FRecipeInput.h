#pragma once

#include "CoreMinimal.h"
#include "EResource.h"
#include "FRecipeInput.generated.h"


USTRUCT(BlueprintType)
struct FRecipeInput
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EResource ResourceA;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EResource ResourceB;

	// Constructor
	FRecipeInput(EResource resourceA, EResource resourceB)
		: ResourceA(resourceA)
		, ResourceB(resourceB)
	{}
	FRecipeInput()
		: ResourceA(EResource::Empty)
		, ResourceB(EResource::Empty)
	{}

	// Overload the equality operator
	bool operator==(const FRecipeInput& Other) const
	{
		return ResourceA == Other.ResourceA && ResourceB == Other.ResourceB;
	}

	// Custom GetTypeHash function
	friend uint32 GetTypeHash(const FRecipeInput& Pair)
	{
		return HashCombine(GetTypeHash(Pair.ResourceA), GetTypeHash(Pair.ResourceB));
	}
};