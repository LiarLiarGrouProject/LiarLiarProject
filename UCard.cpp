#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Card.generated.h"

UENUM(BlueprintType)
enum class ECardType : uint8 { King, Queen, Ace, Joker, DevilKing, DevilQueen, DevilAce, Chaos, Master };

UCLASS(BlueprintType)
class YOURPROJECT_API UCard : public UPrimaryDataAsset
{
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Card")
    ECardType CardType;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Card")
    FString CardName;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Card")
    int32 CardID;
};