#ifndef DICEGAME_H
#define DICEGAME_H

#include "die.h"

class DiceGame {

public:
    bool play();

private:
    Die die1;
    Die die2;

};

#endif