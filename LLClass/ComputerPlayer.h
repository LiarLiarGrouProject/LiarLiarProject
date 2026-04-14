#pragma once
#ifndef COMPUTERPLAYER_H
#define COMPUTERPLAYER_H

//This is the Computer Player class. It stores the data members and member funciton 
// declarations for objects of the computer class.

//DELETELATER - Things the Computer Player needs to do
	//Draw cards
	//Play cards
	//Bluff
	//Call liar
	//Lose lives

//FUNCTIONS WILL BE COMMENTED OUT UNTIL FINISHED
class ComputerPlayer {
public:
	void SetName(string computerPlayer) {
		name = computerPlayer;
	}
	//void TakeCards(); //Function to take cards in discard pile and add them to the computer's hand
	//void PlayCard(); //Function to play a card from the computer's hand
	//void Bluff(); //Function to bluff by playing a card that does not match the current rank
	//void CallLiar(); //Function to call liar on the previous player
	//string ShowHand(); //Function to show the computer's hand, will also declare if the computer is bluffing or not

private:
	//Adjustments may need to be made based on Deck/Playing coding
	string name;
	int lives = 3; //Set number of lives to 3 for now, may change later
	string hand = []; //Assuming we will be using an array for hands
	int brain = 0; //Placeholder for the random number generator that will be used to determine if the computer lies or calls
};
