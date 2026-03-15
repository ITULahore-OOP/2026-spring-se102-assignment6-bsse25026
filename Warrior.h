#ifndef WARRIOR_H
#define WARRIOR_H

#include "Hero.h"

class Warrior : public Hero {

private:
    int armorRating;

public:
    Warrior(string name, int health, int power, int armor);

    int getArmor() const;

    int calculateEffectiveHealth() const;
};

#endif