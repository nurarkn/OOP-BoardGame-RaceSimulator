#ifndef DICE_H
#define DICE_H

#include <cstdlib>
#include <ctime>

class Dice {
public:
    Dice() {
        srand(time(0));
    }

    int roll() {
        return (rand() % 6) + 1;
    }
};

#endif

