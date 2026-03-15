

#include "MagicalEntity.h"

// constructor
MagicalEntity::MagicalEntity(int mana, int spell)
{
    manaPool = mana;
    spellPower = spell;
}

// returns mana amount
int MagicalEntity::getMana() const
{
    return manaPool;
}

// returns spell power value
int MagicalEntity::getSpellPower() const
{
    return spellPower;
}