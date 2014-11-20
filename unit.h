#ifndef UNIT_H
#define UNIT_H

class unit
{
public:
    unit();
    const char* symbol;
    int user;
    const char* name;
    const char* description;
    int location_x;
    int location_y;
    int material_cost;
    int land_cost;
    int time_cost;
};

#endif // UNIT_H
