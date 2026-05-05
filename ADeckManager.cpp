// DeckManager.h
#include "CardActor.h"
#include "GameFramework/Actor.h"
#include "DeckManager.generated.h"

UCLASS()
class YOURGAME_API ADeckManager : public AActor
{
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<UCardDataAsset*> DeckContents; // Fill with 36 cards in editor

    UFUNCTION(BlueprintCallable)
    void ShuffleDeck();

    UFUNCTION(BlueprintCallable)
    ACardActor* DrawCard(FTransform SpawnTransform);
};