#ifndef ENGINEER_H
#define ENGINEER_H
#include "troop.h"
#include "vehicle.h"

class engineer : public troop
{
public:
    engineer();
    void repair(vehicle);
};

#endif // ENGINEER_H
