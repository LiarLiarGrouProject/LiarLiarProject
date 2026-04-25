// CardDataAsset.h
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CardDataAsset.generated.h"

UENUM(BlueprintType)
enum class ECardType : uint8 { Innocent, Liar, Chaos, Master };

UCLASS()
class YOURGAME_API UCardDataAsset : public UPrimaryDataAsset
{
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
    FName CardName;
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
    ECardType Type;
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
    UTexture2D* CardTexture;
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
    UStaticMesh* CardMesh;
};