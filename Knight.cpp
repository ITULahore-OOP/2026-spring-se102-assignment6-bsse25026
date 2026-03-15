
#include "Knight.h"

// knight constructor
Knight::Knight(string name, int health, int power, int armor, int charge)
    : Warrior(name, health, power, armor)
{
    chargeBonus = charge;
}

// getter for charge value
int Knight::getChargeBonus() const
{
    return chargeBonus;
}

// burst damage  when knight charges
int Knight::calculateBurstDamage() const
{
    return getPower() + chargeBonus;
}