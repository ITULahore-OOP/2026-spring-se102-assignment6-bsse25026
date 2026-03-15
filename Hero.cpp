

#include "Hero.h"

// constructor
Hero::Hero(string name, int h, int power)
{
    heroName = name;
    health = h;
    basePower = power;
}

//  getter
string Hero::getName() const
{
    return heroName;
}

// returns current health value
int Hero::getHealth() const
{
    return health;
}

// returns hero's base attack power
int Hero::getPower() const
{
    return basePower;
}

// reduces hero health when damage is taken
void Hero::takeDamage(int damage)
{
    health = health - damage;

    //  making sure health doesn't go below zero
    if (health < 0)
        health = 0;
}

// overload > operator so we can compare hero strength
bool Hero::operator>(const Hero &other) const
{
    return basePower > other.basePower;
}

// overload + operator to combine  (health)
int Hero::operator+(const Hero &other) const
{
    return health + other.health;
}