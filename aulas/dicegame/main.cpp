#include <iostream>
#include "dicegame.h"

using namespace std;

int main (int argc, char* argv[]) {
	cout << "Hello dicegame !" << endl;

	DiceGame game;

	int times = 1000;
	int wins = 0;
	for(int i = 0; i < times; i++){
		if(game.play()){
			cout << "You won !" << endl;
			wins++;
		} else {
			cout << "You lost !" << endl;
		}
	}

	cout << "Win percentage = " << ((double)wins/times)*100 << "%" << endl;

	cout << "Goodbye dicegame !" << endl;

	return 0;
}
