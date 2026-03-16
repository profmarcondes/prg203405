#include "dicegame.h"
#include <iostream>

using namespace std;

bool DiceGame::play() {
    int fv1, fv2;

    die1.roll();
    fv1 = die1.getFaceValue();

    die2.roll();
    fv2 = die2.getFaceValue();

    cout << "fv1 = " << fv1 << ", fv2 = " << fv2 << "; result = " << fv1+fv2 << endl;

    /*
    if( (fv1 + fv2) == 7)
        return true;
    else
        return false;
    */

    return ((fv1+fv2) == 7);
}
