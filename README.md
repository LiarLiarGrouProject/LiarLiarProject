# LiarLiarProject
A game made with C++ and Unreal Engine 5 based off of the Liar's Bar game, Liar's deck. Contributors are Steffen Turner, Tony Zitzner, and Mathew Schultz.

04.06, ST - added editing branch to the project, to help maintain overal code integrity while working; also started working on coding the computer player. Updated default branch to editing branch for commits.

04.12, ST added UE editing branch to project, changed original editing branch to cplusEditing branch

04.25, TZ added 2 different ways to incorporate to deck, option#1 is UPrimaryDataAssect.cpp, ADeckActor.cpp, and ADeckManager. Option #2 is UCard.cpp and CardAssetFactory.cpp.

05.07, ST added AI controllers, enum, a gameplay blueprint, and created a file to hold the enum and gameplay blueprint in the .uproject file. These are meant to be used for the Computer Player logic and Game Play logic down the road.

05.09 [17:11-19:30] ST used older version of the project as a base for project rebuild, with the goal that ST could properly implement the AI logic and create a working game. Using a YouTube tutorial, ST worked on creating a widget-based deck in the CardUI folder and created: 
[NOTE: following summary of actions is not comprehensive as it was written afte the work was done]
BPFL_Cards - A Function Library; created the GetRandomCard function for use in generating cards by pulling a random card's individual information at random from TableCardsDT
BPI_AddCard - An Interface meant to add cards to a hand (for now)
CardController - A class which creates the Card HUD using the CardHudWidget
CardGameMode - A custom game mode, so that camera is fixed in place and the card UI is optimized
CardHandWidget - A widget that handles the creation of a card hand after the AddCard button is pressed (this will be adjusted later)
CardHUDWidget - A widget that handles placement of the cards
CardWidget - A widget that genrates a card template, and hosts the add card button so that cards can be dealt out; the card template pulls from S_Card info to place the relevant visual elements of the card
S_CardInfo - A structure for the cards, containing the CardValue for use in the Computer Player logic later, CardFace to hold the face value of a card, CardImage for the visual of the card, CardDescription which holds a text description of the card (i.e. "Ace of Spades") to be used for possible accesibility features
HandCardsDT - A data table that holds the information for individual cards; these cards are specifically meant to be dealt out, checked for win/loss values, etc.
TableCardsDT - A data table that holds the information for individual cards; these careds are specifically meant to determing the starting face value of the hand. It is seperate from the hand cards so that random generation does not include the RedJack and BlackJack cards
[Break]
ST continued work on the deck portion of the game; the goal for this session is to create the card logic 
CardHUDWidget - Added Get Random Card Function to a Add Card messanger, so that cards generate
CardHandWidget - Set up a widget that activates when the Add Card button is pressed, so that a card is generated on the screen
Confirmed card generation
CardHandWidget - Created the CardWidgetReference, an array that holds the cards dealt out to a hand; created the Custom Event UpdateCardPositions, so that cards can be moved (this is to prevent them stacking on top of eachother, making it difficult for the player to see) with a for loop; created CalculateCardPosition function to handle placing cards accordingly
CardWidget - Added custom event StartReposition, so that cards arrange themselves accordingly after being generated with an EventTick; created HAsCardReachedDestination? macro to confirm that card has been placed appropriately

05.10 [17:53-19:19] ST continued work on the deck widgets, with the goal to finish the YouTube tutorial series
CardHandWidget - Created the GetCardIndexPositionFromCenter to get the angle of an individual card realitive to the center of a hand; this is going to be used in the future to help create a 'fan' effect with the cards in hand; created CardsInHand function which calls for the 'lenght' of the CardWidgetPref array (this array holds the cards dealt out); adjusted default angle for LocalAngle variable for better fanning; created GetCenterPosition function, which retrieves the position of the center card
[BREAK]
CardHandWidget - Set up hover logic in the EventGraph using Custom Events; created function GetHoveredYCardDisplacement for this; 
CardWidget - Used Event On Mouse Enter/Leave nodes to implement hover logic, so that when the player hovers their mouse over specific cards, the card raises above other cards in the hand

05.11 [09:54 -] ST finished the YouTube tutorials
CardWidget - Used On Mouse Button and On Drag Detect override functions to start creating the effect where you can drag and place individual cards; 
- Used BP_CardDragNDrop in On Drag Detect function
- Worked in OnDragDetected funciton and EventOnDragCancelled to set card opacity, so that when a card is dragged, you only see one card instead of the card in the hand and that card being dragged at the same time
CardController - Added Set Input Mode UI Only node to prevent accidental camera shift or unnecessary user inputs
BP_CardDragNDrop - A DragDropOperation Blueprint 
CardHandWidget - Created DragSorted event to handle re-positioning of card after drag; added EventOnDrageCancelled node to handle what happens when player is done dragging card to desired position;

Uploaded current work to a new branch, SteffensLiarLiarGame, and migrated the repository to an organization created for the group project. This allows branches/work to be locked as needed.
