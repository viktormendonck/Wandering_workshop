#pragma once

#include "CoreMinimal.h"
#include "Engine/Blueprint.h"
#include "UObject/NoExportTypes.h"
#include "MyEnums.h"
#include "EnumToBlueprintMapper.generated.h"

UCLASS()
class YOURPROJECT_API UEnumToBlueprintMapper : public UObject
{
    GENERATED_BODY()

public:
    static UEnumToBlueprintMapper* GetInstance();

    UFUNCTION(BlueprintCallable, Category = "Mapping")
    UBlueprint* GetBlueprintForEnum(EMyEnum EnumValue);

protected:
    UEnumToBlueprintMapper();
    
private:
    static UEnumToBlueprintMapper* Instance;
    TMap<EMyEnum, UBlueprint*> EnumToBlueprintMap;

    void InitializeMap();
};
