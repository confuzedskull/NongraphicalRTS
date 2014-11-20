#ifndef RAIDER_H
#define RAIDER_H
#include "troop.h"
#include "building.h"

class raider : public troop
{
public:
    raider();
    void raid(building);
};

#endif // RAIDER_H
