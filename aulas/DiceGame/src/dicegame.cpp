#include "dicegame.h"
#include <iostream>

using namespace std;

DiceGame::DiceGame(unsigned int seed): _d1(seed), _d2(seed) {
    cout << "DiceGame constructor called." << endl;
}

bool DiceGame::play() {
    cout << "Playing the dice game..." << endl;

    // Roll the dice
    _d1.roll();
    _d2.roll();

    // Get the face values
    int d1Value = _d1.getFaceValue();
    int d2Value = _d2.getFaceValue();

    cout << "Die 1: " << d1Value << ", Die 2: " << d2Value << endl;

    if ( ( d1Value + d2Value ) == 7 ) {
        return true;
    } else {
        return false;
    }

}
