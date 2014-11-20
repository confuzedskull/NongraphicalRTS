#ifndef TROOP_H
#define TROOP_H

#include "unit.h"

class troop : public unit
{
public:
    troop();
    troop(int,int,int,int,int);

    int health;
    int stamina;
    int offense;
    int defense;
    int speed;

    int range;
    int accuracy;

    int food_cost;
    int water_cost;

    void attack();
    void defend();
    void move(int, int);
};

#endif // TROOP_H
