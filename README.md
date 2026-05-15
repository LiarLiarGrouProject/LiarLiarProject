# LiarLiarProject
## A game made with C++ and Unreal Engine 5 based off of the Liar's Bar game, Liar's deck. Contributors are Steffen Turner, Tony Zitzner, and Mathew Schultz.

#### 04.06, ST - added editing branch to the project, to help maintain overal code integrity while working; also started working on coding the computer player. Updated default branch to editing branch for commits.

#### 04.12, ST added UE editing branch to project, changed original editing branch to cplusEditing branch

#### 04.25, TZ added 2 different ways to incorporate to deck, option#1 is UPrimaryDataAssect.cpp, ADeckActor.cpp, and ADeckManager. Option #2 is UCard.cpp and CardAssetFactory.cpp.

#### 05.07, ST added AI controllers, enum, a gameplay blueprint, and created a file to hold the enum and gameplay blueprint in the .uproject file. These are meant to be used for the Computer Player logic and Game Play logic down the road.

#### 05.09 [17:11-19:30] ST used older version of the project as a base for project rebuild, with the goal that ST could properly implement the computer player logic and create a working game. Using a YouTube tutorial series, ST worked on creating a widget-based deck in the CardUI folder and created: 

[NOTE: following summary of actions is not comprehensive as it was written after the work was done]

BPFL_Cards - A Function Library 
- created the GetRandomCard function for use in generating cards by pulling a random card's individual information at random from TableCardsDT

BPI_AddCard - An Interface meant to add cards to a hand (for now)

CardController - A class which creates the Card HUD using the CardHudWidget

CardGameMode - A custom game mode, so that camera is fixed in place and the card UI is optimized

CardHandWidget - A widget that handles the creation of a card hand after the AddCard button is pressed (this will be adjusted later)

CardHUDWidget - A widget that handles placement of the cards

CardWidget - A widget that genrates a card template, and hosts the add card button so that cards can be dealt out 
- the card template pulls from S_Card info to place the relevant visual elements of the card

S_CardInfo - A structure for the cards, containing the CardValue for use in the Computer Player logic later, CardFace to hold the face value of a card, CardImage for the visual of the card, CardDescription which holds a text description of the card (i.e. "Ace of Spades") to be used for possible accesibility features

HandCardsDT - A data table that holds the information for individual cards; these cards are specifically meant to be dealt out, checked for win/loss values, etc.

TableCardsDT - A data table that holds the information for individual cards; these cards are specifically meant to determing the starting face value of the hand. It is seperate from the hand cards so that random generation does not include the RedJack and BlackJack cards

[Break]

CardHUDWidget - Added Get Random Card Function to a Add Card messanger, so that cards generate

CardHandWidget - Set up a widget that activates when the Add Card button is pressed, so that a card is generated on the screen
- Confirmed card generation

CardHandWidget - Created the CardWidgetReference, an array that holds the cards dealt out to a hand
- Created the Custom Event UpdateCardPositions, so that cards can be moved (this is to prevent them stacking on top of eachother, 
making it difficult for the player to see) with a for loop
- Created CalculateCardPosition function to handle placing cards accordingly

CardWidget - Added custom event StartReposition, so that cards arrange themselves accordingly after being generated with an EventTick
- Created HAsCardReachedDestination? macro to confirm that card has been placed appropriately

#### 05.10 [17:53-19:19] ST continued work on the deck widgets, with the goal to finish the YouTube tutorial series

CardHandWidget - Created the GetCardIndexPositionFromCenter to get the angle of an individual card realitive to the center of a hand; this is going to be used in the future to help create a 'fan' effect with the cards in hand
- Created CardsInHand function which calls for the 'lenght' of the CardWidgetPref array (this array holds the cards dealt out)
- Adjusted default angle for LocalAngle variable for better fanning
- Created GetCenterPosition function, which retrieves the position of the center card

[BREAK]
	
CardHandWidget - Set up hover logic in the EventGraph using Custom Events; created function GetHoveredYCardDisplacement for this

CardWidget - Used Event On Mouse Enter/Leave nodes to implement hover logic, so that when the player hovers their mouse over specific cards, the card raises above other cards in the hand

#### 05.11 [09:54 -] ST finishing the YouTube tutorials

CardWidget - Used On Mouse Button and On Drag Detect override functions to start creating the effect where you can drag and place individual cards 
- Used BP_CardDragNDrop in On Drag Detect function
- Worked in OnDragDetected funciton and EventOnDragCancelled to set card opacity, so that when a card is dragged, player only sees one card instead of the card in the hand and that card being dragged at the same time

CardController - Added Set Input Mode UI Only node to prevent accidental camera shift or unnecessary user inputs

BP_CardDragNDrop - A DragDropOperation Blueprint 

CardHandWidget - Created DragSorted event to handle re-positioning of card after drag
- Added EventOnDrageCancelled node to handle what happens when player is done dragging card to desired position;

Uploaded current work to a new branch, SteffensLiarLiarGame, and migrated the repository to an organization created for the group project.
This allows branches/work to be locked as needed.

[BREAK]

CardWidget - Used EventOnDragEnter and EventOnDragLeave nodes to start creating the logic behind moving/rearranging cards in the player's hand, attached event dispatchers

CardHandWidget - Created custom events that will use the dispatchers created in CardWidget 
- Created function SetDraggedOverCard for drag placement logic
- Attatched SetDraggedOverCard to appropriates events in event graph

05.12 ST continued working on the movement of the cards in the player's hand

CardHandWidget - Created a seperate function, HandleDragOverStopped, to hand the logic for what happens when the card is no longer being dragged
- Attatched HandDragOverStopped to CallDragOverStopped event
- Created MoveDraggedCardToHover function; this function will make it so that when a card being dragged around the hand hovers over another card, the bottom card will move to allow space for the above card
- Having issue with the drag function, drop is not happening; checking work, no errors currently seen, will need to troubleshoot further
- Found that issue may be related to the HandleDragOverStopped function; does not seem to be activating
- Will go back to troubleshoot after finishing the YouTube tutorial series and creating hands for the computer players; this feature is not vital to gameplay
- Created GetCardIndesWithoutPosition function;
- New issue: cards are disappearing; could be basedon opacity change settings; will go back to troubleshoot as well
- Final video seems to be on content that may not be used; took break

[Break]

CardHandWidget - Changed CardWidgetReference to PlayerHandRef; functionality for how the cards are stored and seen on screen largely will remain the same, so this this Array will now be the player's hand
- Duplicated the PlayerHandRef three times, renamed Arrays ComputerHand1Ref, ComputerHand2Ref, and ComputerHand3Ref; these will store the hand info for the computer players
- Added a way for the get card button to send cards to Computer Hand 1 at the same time it deals cards to the PlayerHand
- Created CardInfo function, which is meant to recieve an array table, look up it's entries, then get an item by index and return the card info; currently using this so that a confirmation of cards entered into a computers hand is printed to the screen
- Chandged overlay name to PlayerHandOverlay
- 

CardHUDWidget - Set up text boxes to display the computer players' hand info; currently just printing the card description of the first card in each computer hand to confirm that the computer players are being dealt cards and that the information is being pulled correctly; will adjust this later so that it displays all cards in the computer hand and is formatted better
- Created functions to update the text for the computer players' to show how many cards they have in their hand; attatched to add card button for now, this could be used to update again when cards are playd by the computers
- Currently, AddCard button has to be clicked in order for cards to be dealt to all players; will work on making it so that the button can only be clicked once, and upon click, 6 cards will deal out to all players; 

05.13 ST started work on gamplay mechanics through functions; started with dealing out hands to all players

CardHUDWidget - Added while loop to the "Add Card" button; this is meant to make it so that when a random card is generated, a check for the number of cards in each player's hand before the card is created.
- Added buttons to deal cards computer hands; changed "AddCard" button to "DealPlayerCards"
- Created a function that should handle the card hand generation process; currently, because AddCard is handled by the HUD widget, adding cards to an array 'resets' the player card hand. Will test currnet code to see if calling the function from ComputerPlayer3, 2, and 1 before the player hand helps it achieve the effect desired
- Function did not work
- Reversed decision to add more buttons to deal out cards to players;

BPFL_Cards - Created DealComputerCards, a function that check the number of cards in the target computer player's hand (array) before entering a loop that will add a random card to their array.
- Tested function, confirmed that this method generates cards seperate from the player hand cards, which was a consistent problem with previous attempts at generating new cards for the computer players
- All players now have their own hand of cards

[Break]

05.14 ST started working on having a card pulled for play, to show the suit in action currently; after this is done, will move on to converting blueprints into deliverable C++ code; 

BPFL_Cards - Created the GetRandomStartingCard function; this function calls a random card from the TableCardsDT; it is meant to signal the first card "type" that is in play during a round

CardHUDwidget - Added code so that the last thing to happen when the "Deal Cards" button is clicked is a random card pull using the GetRandomStartingCard function
- Also created a text box that will update with the face value of the card pulled by the GetRandomStartingCard function, so that there is a visual representation of the card in play; this is meant to be used for testing purposes, but could be used in the final game as well for accesibility purposes

<<<<<<< HEAD
While clearing out the main branch so that I could place the files in the SteffensLiarLiarGame branch, I mistakenly deleted the files in the unrealEditing branch. The unrealEditing branch had Tony Z's work as of 5.12. Immediately contacted him to inform him of the mistake. His work can still be viewd in the history of the commits; will try to restor his work with that.
=======
While clearing out the main branch so that I could place the files in the SteffensLiarLiarGame branch, I mistakenly deleted the files in the unrealEditing branch. The unrealEditing branch had Tony Z's work as of 5.12. Immediately contacted him to inform him of the mistake. His work can still be viewd in the history of the commits; will try to restor his work with that.

OneDrive issue was more of a problem than expected; while working on re-creating code in C++ in a seperate .uproject file, cleared recycling bin. Somehow, this removed Unreal Engine. Re-download is still in progress.

