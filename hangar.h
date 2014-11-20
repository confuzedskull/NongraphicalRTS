#ifndef HANGAR_H
#define HANGAR_H
#include "building.h"
#include "vehicle.h"

class hangar : public building
{
public:
    hangar();
    void load(vehicle);
};

#endif // HANGAR_H
