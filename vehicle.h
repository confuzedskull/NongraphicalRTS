#ifndef VEHICLE_H
#define VEHICLE_H
#include "unit.h"
#include "troop.h"

class vehicle : public unit
{
public:
    vehicle();

    int condition;
    int offense;
    int defense;
    int energy;
    int speed;
    int unit_capacity;
    int fuel_capacity;
    int fuel_level;
    troop driver;
    troop* passengers;

    int fuel_cost;
    int power_cost;

    void move();
    void load(troop);
    void refuel(int);
};

#endif // VEHICLE_H
