#ifndef WATER_TOWER_H
#define WATER_TOWER_H
#include "building.h"

class water_tower : public building
{
public:
    water_tower();
    int capacity;
};

#endif // WATER_TOWER_H
