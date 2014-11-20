#include "humvee.h"
#include "troop.h"

humvee::humvee()
{
    name = "Humvee";
    symbol = "hv";
    description = "A heavy-duty combat-ready motor vehicle.";
    passengers = new troop[3];
}
