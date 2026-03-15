

#include "Spellblade.h"

// constructor
Spellblade::Spellblade(string name, int health, int power,
                       int armor, int mana, int spellPower)
        : Warrior(name, health, power, armor),
          MagicalEntity(mana, spellPower)
{

}

//  damage with both ze sword power and spell power
int Spellblade::calculateHybridDamage() const
{
    return getPower() + getSpellPower();
}