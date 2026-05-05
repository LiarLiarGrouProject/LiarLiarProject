#include "CardAssetFactory.h"
#include "Card.h"
#include "AssetToolsModule.h"
#include "PackageTools.h"
#include "AssetRegistryModule.h"

void UCardAssetFactory::Create36Cards()
{
    FAssetToolsModule& AssetToolsModule = FModuleManager::GetModuleChecked<FAssetToolsModule>("AssetTools");
    FString PackagePath = "/Game/Cards"; // Target folder

    struct FCardDef { ECardType Type; FString Name; int32 Count; };
    TArray<FCardDef> Definitions = {
        {ECardType::King, "King", 7}, // 6 + 1 spare
        {ECardType::Queen, "Queen", 7},
        {ECardType::Ace, "Ace", 7},
        {ECardType::Joker, "Joker", 3},
        {ECardType::DevilKing, "DevilKing", 1},
        {ECardType::DevilQueen, "DevilQueen", 1},
        {ECardType::DevilAce, "DevilAce", 1},
        {ECardType::Chaos, "Chaos", 1},
        {ECardType::Master, "Master", 1}
    };

    for (const auto& Def : Definitions)
    {
        for (int32 i = 0; i < Def.Count; ++i)
        {
            FString Name = FString::Printf(TEXT("DA_%s_%d"), *Def.Name, i + 1);
            UCard* NewAsset = Cast<UCard>(AssetToolsModule.Get().CreateAsset(Name, PackagePath, UCard::StaticClass(), nullptr));
            if (NewAsset)
            {
                NewAsset->CardType = Def.Type;
                NewAsset->CardName = Name;
                NewAsset->CardID = (int32)Def.Type * 100 + i;
                NewAsset->MarkPackageDirty();
            }
        }
    }
}