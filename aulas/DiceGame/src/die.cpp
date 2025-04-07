#include "die.h"
#include <cstdlib> // For rand() and srand()
#include <ctime>
#include <iostream>
using namespace std;

Die::Die(unsigned int seed) { // Initialize face value to 1
    cout << "Die constructor called." << endl;
    srand(seed);
    roll(); 
}

int Die::getFaceValue() {
    return _faceValue;
}

void Die::roll() {
    _faceValue = rand() % 6 + 1; // Generate a random number between 1 and 6
}