
#include "Warrior.h"

// constructor cuz (calls Hero constructor first)
Warrior::Warrior(string name, int health, int power, int armor)
    : Hero(name, health, power)
{
    armorRating = armor;
}

// returns armor value
int Warrior::getArmor() const
{
    return armorRating;
}

// effective health = health + (armor * 2)
int Warrior::calculateEffectiveHealth() const
{
    return getHealth() + (armorRating * 2);
}