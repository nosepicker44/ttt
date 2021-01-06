#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> moves = { " ", " ", " ", " ", " ", " ", " ", " ", " " };
bool over = false;
int turns = 0;
bool turn1 = false;
bool turn2 = false;

void board() {

	std::cout << "-------------\n";
	std::cout << "| " << moves[0] << " | " << moves[1] << " | " << moves[2] << " |" << " possible choices: 1, 2, 3";
	std::cout << "\n-------------";
	std::cout << "\n| " << moves[3] << " | " << moves[4] << " | " << moves[5] << " |" << " possible choices: 4, 5, 6";
	std::cout << "\n-------------";
	std::cout << "\n| " << moves[6] << " | " << moves[7] << " | " << moves[8] << " |" << " possible choices: 7, 8, 9";
	std::cout << "\n-------------\n";
}

void wince(int check) {
	if (moves[check] == "X") {
		std::cout << "\nplayer 1 wins!\n";
		over = true;
		turn2 = true;
	}
	else if (moves[check] == "O") {
		std::cout << "\nplayer 2 wins!\n";
		over = true;
		turn1 = true;
	}
}

void wincheck() {

	//across the top
	if ((moves[0] == moves[1]) && (moves[0] == moves[2])) {
		wince(0);
	}
	
	//down from left
	else if ((moves[0] == moves[3]) && (moves[0] == moves[6])){
		wince(0);
	}
	
	//diagonal through the centre 1
	else if ((moves[0] == moves[4]) && (moves[0] == moves[8])) {
		wince(0);
	}

	//across the bottom
	else if ((moves[6] == moves[7]) && (moves[6] == moves[8])) {
		wince(6);
	}

	//diagonal through the centre 2
	else if ((moves[6] == moves[4]) && (moves[6] == moves[2])) {
		wince(6);
	}

	//down the middle
	else if ((moves[1] == moves[4]) && (moves[1] == moves[7])) {
		wince(1);
	}

	//down from right
	else if ((moves[2] == moves[5]) && (moves[2] == moves[8])) {
		wince(2);
	}

	//across the middle
	else if ((moves[3] == moves[4]) && (moves[3] == moves[5])) {
		wince(3);
	}

	else if (turns == 9) {
		std::cout << "\ndraw!\n";
		over = true;
		turn2 = true;
	}
}