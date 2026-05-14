// CardActor.h
#include "CardDataAsset.h"
#include "GameFramework/Actor.h"
#include "CardActor.generated.h"

UCLASS()
class YOURGAME_API ACardActor : public AActor
{
    GENERATED_BODY()
public:
    ACardActor();
    UPROPERTY(VisibleAnywhere)
    UStaticMeshComponent* CardMesh;

    void InitializeCard(UCardDataAsset* Data);
    UCardDataAsset* GetCardData() const { return CardData; }

private:
    UCardDataAsset* CardData;
};