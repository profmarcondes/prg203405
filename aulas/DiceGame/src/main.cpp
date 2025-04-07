#include <iostream>
#include "dicegame.h"
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

using namespace std;

int main() {

	DiceGame game(time(NULL));

	int times = 1000;
	int wins = 0;
	for (int i = 0; i < times; i++) {
		if (game.play()) {
			cout << "You win!" << endl;
			wins++;
		} else {
			cout << "You lose!" << endl;
		}
	}

	float win_rate = (float)wins / times * 100;
	cout << "Win rate: " << win_rate << "%" << endl;
	cout << "Total wins: " << wins << endl;
	cout << "Total games played: " << times << endl;
	cout << "Thanks for playing!" << endl;
	cout << "Goodbye!" << endl;

	return 0;
}