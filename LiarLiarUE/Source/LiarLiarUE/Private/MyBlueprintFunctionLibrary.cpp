// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBlueprintFunctionLibrary.h"

/** Please add a class description */
UCLASS(Blueprintable, BlueprintType)
class LIARLIARUE_API UBPFL_Cards : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	void GetRandomPlayableCard(UObject* __WorldContext, FS_CardInfo& CardInfo)
	{
		// Implementation of the function to retrieve a random playable card from HandCardsDT

	}

	void PlaceTowardsPosition(FWidgetTransform CurrentPosition, FWidgetTransform DestinationPosition, double Delta, double PlacementSpeed, UObject* __WorldContext, FWidgetTransform& NewPosition)
	{
		// Implementation of the function to handle placement of moveable cards towards a destination position
	}
	void DealComputerHand(UObject* WorldContextObject, APlayerController* OwningPlayer, UPARAM(ref) TArray<UCardWidget_C*>& TargetArray, UObject* __WorldContext, TArray<UCardWidget_C*> NewLocalVar)
	{
		// Implementation of the function to deal cards to a targeted computer player
		
	}
	void  GetRandomStartingCard(UObject* __WorldContext, FS_CardInfo& CardInfo)
	{
		// Implementation of the function to retrieve a random starting card from TableHandDT//

	}
};
