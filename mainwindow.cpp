#include "mainwindow.h"
#include "game.h"
#include "ui_mainwindow.h"
#include <stdio.h>

MainWindow::MainWindow(QWidget *parent) :QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

/*To save on memory, each time a tab is changed specific elements will be loaded
 *NOTE: in order to load properly, tab must be changed before accessing its contents*/
void MainWindow::on_control_tabWidget_currentChanged(int index)
{
    switch(index)
    {
    case 1://construction tab
        game::load_troop_samples();
        game::load_vehicle_samples();
        game::load_building_samples();
        break;
    default:
        game::clear_troop_samples();
        game::clear_vehicle_samples();
        game::clear_building_samples();
        break;

    }
}

void MainWindow::on_troop_construction_listWidget_currentRowChanged(int currentRow)
{
    //stat buffers
    char health_buffer[4];
    char attack_buffer[4];
    char defense_buffer[4];
    char stamina_buffer[4];
    char speed_buffer[4];
    //cost buffers
    char food_cost_buffer[4];
    char water_cost_buffer[4];
    char material_cost_buffer[4];
    char land_cost_buffer[4];
    char time_cost_buffer[4];
    //convert integer stats to string and place in buffers
    sprintf(health_buffer,"%d",game::troop_samples[currentRow].health);
    sprintf(attack_buffer,"%d",game::troop_samples[currentRow].offense);
    sprintf(defense_buffer,"%d",game::troop_samples[currentRow].defense);
    sprintf(stamina_buffer,"%d",game::troop_samples[currentRow].stamina);
    sprintf(speed_buffer,"%d",game::troop_samples[currentRow].speed);
    sprintf(food_cost_buffer,"%d",game::troop_samples[currentRow].food_cost);
    sprintf(water_cost_buffer,"%d",game::troop_samples[currentRow].water_cost);
    sprintf(material_cost_buffer,"%d",game::troop_samples[currentRow].material_cost);
    sprintf(land_cost_buffer,"%d",game::troop_samples[currentRow].land_cost);
    sprintf(time_cost_buffer,"%d",game::troop_samples[currentRow].time_cost);

/*Rather than repeating the following functions for each unit, iterate through a vector of sample units.
 *The units in the vector correspond to the items in the list widget
 *NOTE: This means the number of items in the vector must match the number of items in the list*/
    ui->construction_info_textBrowser->setPlainText(game::troop_samples[currentRow].description);
    ui->construction_stat_tableWidget->item(0,0)->setText(health_buffer);
    ui->construction_stat_tableWidget->item(0,1)->setText(attack_buffer);
    ui->construction_stat_tableWidget->item(0,2)->setText(defense_buffer);
    ui->construction_stat_tableWidget->item(0,3)->setText(stamina_buffer);
    ui->construction_stat_tableWidget->item(0,4)->setText(speed_buffer);
    ui->construction_cost_tableWidget->item(0,0)->setText(food_cost_buffer);
    ui->construction_cost_tableWidget->item(0,1)->setText(water_cost_buffer);
    ui->construction_cost_tableWidget->item(0,2)->setText(material_cost_buffer);
    ui->construction_cost_tableWidget->item(0,3)->setText(land_cost_buffer);
    ui->construction_cost_tableWidget->item(0,4)->setText(time_cost_buffer);
}


void MainWindow::on_vehicle_construction_listWidget_currentRowChanged(int currentRow)
{
    char condition_buffer[4];
    char attack_buffer[4];
    char defense_buffer[4];
    char energy_buffer[4];
    char speed_buffer[4];
    //cost buffers
    char fuel_cost_buffer[4];
    char power_cost_buffer[4];
    char material_cost_buffer[4];
    char land_cost_buffer[4];
    char time_cost_buffer[4];

    using namespace std;
    //convert integer stats to string and place in buffers
    sprintf(condition_buffer,"%d",game::vehicle_samples[currentRow].condition);
    sprintf(attack_buffer,"%d",game::vehicle_samples[currentRow].offense);
    sprintf(defense_buffer,"%d",game::vehicle_samples[currentRow].defense);
    sprintf(energy_buffer,"%d",game::vehicle_samples[currentRow].energy);
    sprintf(speed_buffer,"%d",game::vehicle_samples[currentRow].speed);
    sprintf(fuel_cost_buffer,"%d",game::vehicle_samples[currentRow].fuel_cost);
    sprintf(power_cost_buffer,"%d",game::vehicle_samples[currentRow].power_cost);
    sprintf(material_cost_buffer,"%d",game::vehicle_samples[currentRow].material_cost);
    sprintf(land_cost_buffer,"%d",game::vehicle_samples[currentRow].land_cost);
    sprintf(time_cost_buffer,"%d",game::vehicle_samples[currentRow].time_cost);

    /*Rather than repeating the following functions for each unit, iterate through a vector of sample units.
     *The units in the vector correspond to the items in the list widget
     *NOTE: This means the number of items in the vector must match the number of items in the list*/
        ui->construction_info_textBrowser->setPlainText(game::vehicle_samples[currentRow].description);
        ui->construction_stat_tableWidget->item(0,0)->setText(condition_buffer);
        ui->construction_stat_tableWidget->item(0,1)->setText(attack_buffer);
        ui->construction_stat_tableWidget->item(0,2)->setText(defense_buffer);
        ui->construction_stat_tableWidget->item(0,3)->setText(energy_buffer);
        ui->construction_stat_tableWidget->item(0,4)->setText(speed_buffer);
        ui->construction_cost_tableWidget->item(0,0)->setText(fuel_cost_buffer);
        ui->construction_cost_tableWidget->item(0,1)->setText(power_cost_buffer);
        ui->construction_cost_tableWidget->item(0,2)->setText(material_cost_buffer);
        ui->construction_cost_tableWidget->item(0,3)->setText(land_cost_buffer);
        ui->construction_cost_tableWidget->item(0,4)->setText(time_cost_buffer);
}

void MainWindow::on_building_construction_listWidget_currentRowChanged(int currentRow)
{
    char condition_buffer[4];
    //cost buffers
    char fuel_cost_buffer[4];
    char power_cost_buffer[4];
    char material_cost_buffer[4];
    char land_cost_buffer[4];
    char time_cost_buffer[4];

    //convert integer stats to string and place in buffers
    sprintf(condition_buffer,"%d",game::building_samples[currentRow].condition);
    sprintf(fuel_cost_buffer,"%d",game::building_samples[currentRow].fuel_cost);
    sprintf(power_cost_buffer,"%d",game::building_samples[currentRow].power_cost);
    sprintf(material_cost_buffer,"%d",game::building_samples[currentRow].material_cost);
    sprintf(land_cost_buffer,"%d",game::building_samples[currentRow].land_cost);
    sprintf(time_cost_buffer,"%d",game::building_samples[currentRow].time_cost);

    //print info to stat table
    ui->construction_info_textBrowser->setPlainText(game::building_samples[currentRow].description);
    ui->construction_stat_tableWidget->item(0,0)->setText(condition_buffer);
    ui->construction_cost_tableWidget->item(0,0)->setText(fuel_cost_buffer);
    ui->construction_cost_tableWidget->item(0,1)->setText(power_cost_buffer);
    ui->construction_cost_tableWidget->item(0,2)->setText(material_cost_buffer);
    ui->construction_cost_tableWidget->item(0,3)->setText(land_cost_buffer);
    ui->construction_cost_tableWidget->item(0,4)->setText(time_cost_buffer);
}


void MainWindow::on_construction_tabWidget_currentChanged(int index)
{
    switch(index)
    {
    case 0://troops
        break;
    case 1://vehicles
        break;
    case 2://buildings
        break;
    case 3://in progress
        break;
    }
}
