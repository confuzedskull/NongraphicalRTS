#ifndef BUILDING_H
#define BUILDING_H
#include "unit.h"

class building : public unit
{
public:
    building();
    int condition;
    int fuel_cost;
    int power_cost;
};

#endif // BUILDING_H
