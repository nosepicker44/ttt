#include <iostream>
#include <vector>
#include <string>
#include "func.cpp"

int main() {
	std::cout << "lets game, gamers\n";
	int choice;
	turn1 = false;
	turn2 = false;

	std::cout << "\nthe board:\n";
	board();
	std::cout << "\n";

	while (over == false) {
		while (turn1 == false){
			choice = 0;
			std::cout << "\nplayer one (X), please select which tile you want to choose!\n\n";
			std::cin >> choice;
			std::cout << "\n";
				if ((choice > 0) && (choice < 10)) {
					if (moves[choice-1] == " ") {
						moves[choice-1] = "X";
						turns++;
						turn1 = true;
					}
					else {
						std::cout << "\nplease pick a valid tile.\n";
					}
					
				}
				else {
					std::cout << "\nplease pick a valid tile.\n";
				}

		}

		if (turns != 9) {
			board();
		}

		while (turn2 == false) {
			if (turns == 9) {
				break;
			}
			choice = 0;
			std::cout << "\nplayer two (O), please select which tile you want to choose!\n\n";
			std::cin >> choice;
			std::cout << "\n";
			if ((choice > 0) && (choice < 10)) {
				if (moves[choice - 1] == " ") {
					moves[choice - 1] = "O";
					turns++;
					turn2 = true;
				}
				else {
					std::cout << "\nplease pick a valid tile.\n";
				}
			}
			else {
				std::cout << "\nplease pick a valid tile.\n";
			}
		}

		board();
		wincheck();

		turn1 = false;
		turn2 = false;
		
	}



}