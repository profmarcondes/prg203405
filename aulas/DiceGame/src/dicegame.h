#ifndef DICEGAME_H
#define DICEGAME_H

#include "die.h"

class DiceGame {
private:
    Die _d1;
    Die _d2;

public:
	DiceGame(unsigned int seed);
    bool play();
};


#endif // DICEGAME_H