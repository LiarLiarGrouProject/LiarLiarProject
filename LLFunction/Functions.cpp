#include <iostream>
using namespace std;
#include "../LLClass/ComputerPlayer.h"

createComputers(int computerPlayers) {
	for (i = 0; i < computerPlayers; ++i) {
		ComputerPlayer currentComputer
		computerName = "Computer Player " + to_string(i);
		currentComputer.SetName(computerName);
		print(currentComputer); //to test
	}
}
