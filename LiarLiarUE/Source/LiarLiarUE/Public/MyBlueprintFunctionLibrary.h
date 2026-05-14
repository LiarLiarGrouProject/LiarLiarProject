// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MyBlueprintFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class LIARLIARUE_API UMyBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	/*This Function is to retrive a random moveable and playable card from HandCardsDT (data table that holds all possible cards)*/
	UFUNCTION(BlueprintPure)
	void GetRandomPlayableCard(UObject* __WorldContext, FS_CardInfo& CardInfo);

	/*This function handles placement of the moveable cards*/
	UFUNCTION(BlueprintCallable)
	void PlaceTowardsPosition(FWidgetTransform CurrentPosition, FWidgetTransform DestinationPosition, double Delta, double PlacementSpeed, UObject* __WorldContext, FWidgetTransform& NewPosition);

	/** This function is deals out cards to a targeted computer player, so long as the number of cards in their hand is less than 7*/
	UFUNCTION(BlueprintCallable)
	void DealComputerHand(UObject* WorldContextObject, APlayerController* OwningPlayer, UPARAM(ref) TArray<UCardWidget_C*>& TargetArray, UObject* __WorldContext, TArray<UCardWidget_C*> NewLocalVar);

	/** This function is similar to the GetRandomPlayableCardFunction; it retrieves a card from TableHandDT, which is the data table that holds 3 cards that
	reprsent the face values that determine what card a player discards*/
	UFUNCTION(BlueprintPure)
	void GetRandomStartingCard(UObject* __WorldContext, FS_CardInfo& CardInfo);
	
};
