#include "troop.h"

troop::troop()
{
    name = "Troop";
    description = "a generic troop. used for fighting.";
    health = 0;
    stamina = 0;
    offense = 0;
    defense = 0;
    speed = 0;
    food_cost = 0;
    water_cost = 0;
}

troop::troop(int health, int stamina, int attack, int defense, int speed)
{
    this->health = health;
    this->stamina = stamina;
    this->offense = attack;
    this->defense = defense;
    this->speed = speed;
}

