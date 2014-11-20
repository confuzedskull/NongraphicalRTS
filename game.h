#ifndef GAME_H
#define GAME_H
#include "player.h"
#include "troop.h"
#include "vehicle.h"
#include "building.h"


//contains integral parts of the game
namespace game {

//settings
extern int speed;
extern int difficulty;
extern int mode;
extern int map_width;
extern int map_height;

//samples of each unit. These make up the build menu.
extern std::vector<troop> troop_samples;
extern std::vector<vehicle> vehicle_samples;
extern std::vector<building> building_samples;

//global variables
extern std::vector<player> players;
extern std::vector <std::vector <unit* > >all_units;//two-dimensional vector to store

/*Loads samples of each troop.
 *By creating a sample of each troop, the stats always match what is to be constructed*/
void load_troop_samples();

//This empties the vector, thus saving memory
void clear_troop_samples();

/*Loads samples of each vehicle.
 *By creating a sample of each vehicle, the stats always match what is to be constructed*/
void load_vehicle_samples();

//This empties the vector, thus saving memory
void clear_vehicle_samples();

/*Loads samples of each building.
 *By creating a sample of each building, the stats always match what is to be constructed*/
void load_building_samples();

//This empties the vector, thus saving memory
void clear_building_samples();

};
#endif // GAME_H
