#include "die.h"
#include <cstdlib>
#include <ctime>

Die::Die() {
    srand(time(NULL));
    roll();
}

int Die::getFaceValue() {
    return faceValue;
}

void Die::roll() {
    faceValue = rand() % 6 + 1;
}
