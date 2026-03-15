//
// Created by abdullah on 13/03/2026.
//

#ifndef INC_2026_SPRING_SE102_ASSIGNMENT6_BSSE25026_MAGICALENTITY_H
#define INC_2026_SPRING_SE102_ASSIGNMENT6_BSSE25026_MAGICALENTITY_H
class MagicalEntity {

private:
    int manaPool;
    int spellPower;

public:
    MagicalEntity(int mana, int spell);

    int getMana() const;
    int getSpellPower() const;
};

#endif //INC_2026_SPRING_SE102_ASSIGNMENT6_BSSE25026_MAGICALENTITY_H