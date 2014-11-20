#ifndef PLAYER_H
#define PLAYER_H

#include <QVector>
#include "troop.h"
#include "vehicle.h"
#include "building.h"

class player
{
public:
    player();
    //stats
    char* name;
    int user_id;

    //resources
    int food;
    int water;
    int fuel;
    int power;
    int materials;
    int space;

    //units
    QVector <troop> troops;
    QVector <vehicle> vehicles;
    QVector <building> buildings;


    //functions
    void construct(troop);
    void construct(vehicle);
    void construct (building);

};

#endif // PLAYER_H
