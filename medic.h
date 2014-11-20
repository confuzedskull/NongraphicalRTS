#ifndef MEDIC_H
#define MEDIC_H
#include "troop.h"

class medic : public troop
{
public:
    medic();
    void heal(troop);
};

#endif // MEDIC_H
