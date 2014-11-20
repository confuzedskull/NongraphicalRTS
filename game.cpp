#include "game.h"
#include "worker.h"
#include "engineer.h"
#include "scout.h"
#include "medic.h"
#include "soldier.h"
#include "sniper.h"
#include "grenadier.h"
#include "commando.h"
#include "spy.h"
#include "raider.h"
#include "humvee.h"
#include "tank.h"
#include "hovercraft.h"
#include "helicopter.h"
#include "fighter_jet.h"
#include "bomber.h"
#include "cargo_plane.h"
#include "freighter.h"
#include "carrier.h"
#include "battleship.h"
#include "destroyer.h"
#include "submarine.h"
#include "headquarters.h"
#include "barracks.h"
#include "commissary.h"
#include "factory.h"
#include "armory.h"
#include "infirmary.h"
#include "research_facility.h"
#include "hangar.h"
#include "shipyard.h"
#include "mess_hall.h"
#include "water_tower.h"
#include "fuel_tank.h"
#include "gas_station.h"
#include "power_plant.h"

//settings
int game::speed = 1;
int game::difficulty = 1;
int game::mode = 1;
int game::map_width = 100;
int game::map_height = 100;

//samples of each unit. These make up the build menu.
std::vector<troop> game::troop_samples;
std::vector<vehicle> game::vehicle_samples;
std::vector<building> game::building_samples;

//global variables
std::vector<player> game::players;
std::vector <std::vector <unit* > > game::all_units;//two-dimensional vector to store

void game::load_troop_samples()
{
    worker worker_sample;
    engineer engineer_sample;
    scout scout_sample;
    medic medic_sample;
    soldier soldier_sample;
    sniper sniper_sample;
    grenadier grenadier_sample;
    commando commando_sample;
    spy spy_sample;
    raider raider_sample;

    troop_samples.push_back(worker_sample);
    troop_samples.push_back(engineer_sample);
    troop_samples.push_back(scout_sample);
    troop_samples.push_back(medic_sample);
    troop_samples.push_back(soldier_sample);
    troop_samples.push_back(sniper_sample);
    troop_samples.push_back(grenadier_sample);
    troop_samples.push_back(commando_sample);
    troop_samples.push_back(spy_sample);
    troop_samples.push_back(raider_sample);
}

//This empties the vector, thus saving memory
void game::clear_troop_samples()
{
    troop_samples.clear();
}

/*Loads samples of each vehicle.
 *By creating a sample of each vehicle, the stats always match what is to be constructed*/
void game::load_vehicle_samples()
{
    humvee humvee_sample;
    tank tank_sample;
    hovercraft hovercraft_sample;
    helicopter helicopter_sample;
    fighter_jet fighter_jet_sample;
    bomber bomber_sample;
    cargo_plane cargo_plane_sample;
    freighter freighter_sample;
    carrier carrier_sample;
    battleship battleship_sample;
    destroyer destroyer_sample;
    submarine submarine_sample;

    vehicle_samples.push_back(humvee_sample);
    vehicle_samples.push_back(tank_sample);
    vehicle_samples.push_back(hovercraft_sample);
    vehicle_samples.push_back(helicopter_sample);
    vehicle_samples.push_back(fighter_jet_sample);
    vehicle_samples.push_back(bomber_sample);
    vehicle_samples.push_back(cargo_plane_sample);
    vehicle_samples.push_back(freighter_sample);
    vehicle_samples.push_back(carrier_sample);
    vehicle_samples.push_back(battleship_sample);
    vehicle_samples.push_back(destroyer_sample);
    vehicle_samples.push_back(submarine_sample);
}
//This empties the vector, thus saving memory
void game::clear_vehicle_samples()
{
    vehicle_samples.clear();
}

/*Loads samples of each building.
 *By creating a sample of each building, the stats always match what is to be constructed*/
void game::load_building_samples()
{
    headquarters headquarters_sample;
    barracks barracks_sample;
    commissary commissary_sample;
    factory factory_sample;
    armory armory_sample;
    infirmary infirmary_sample;
    research_facility research_facility_sample;
    hangar hangar_sample;
    shipyard shipyard_sample;
    mess_hall mess_hall_sample;
    water_tower water_tower_sample;
    fuel_tank fuel_tank_sample;
    gas_station gas_station_sample;
    power_plant power_plant_sample;

    building_samples.push_back(headquarters_sample);
    building_samples.push_back(barracks_sample);
    building_samples.push_back(commissary_sample);
    building_samples.push_back(infirmary_sample);
    building_samples.push_back(factory_sample);
    building_samples.push_back(armory_sample);
    building_samples.push_back(research_facility_sample);
    building_samples.push_back(hangar_sample);
    building_samples.push_back(shipyard_sample);
    building_samples.push_back(mess_hall_sample);
    building_samples.push_back(water_tower_sample);
    building_samples.push_back(fuel_tank_sample);
    building_samples.push_back(gas_station_sample);
    building_samples.push_back(power_plant_sample);
}

//This empties the vector, thus saving memory
void game::clear_building_samples()
{
    building_samples.clear();
}

