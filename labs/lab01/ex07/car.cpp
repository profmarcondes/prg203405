#include "car.h"
#include <iostream>

using namespace std;

Car::Car(double capacity, double consumption) {
    _capacity = capacity;
    _consumption = consumption;
    _tank_level = 0.0;
    _odometer = 0.0;
}

void Car::fuelIn(double liters) {
    if ( (_tank_level + liters) <= _capacity ){
        _tank_level += liters;
    } else {
        _tank_level = _capacity;
        cout << "Você disperdiçou " << (liters - _capacity);
        cout << " litros de combustível" << endl;
    }
}

void Car::move(double distance_km) {
    double gasNeeded = distance_km / _consumption;

    if(gasNeeded > _tank_level){
        gasNeeded = _tank_level;
        distance_km = _consumption * gasNeeded;
        cout << " Você ficou sem gasolina e andou apenas ";
        cout << distance_km << "kilometros" << endl;
    }

    _odometer += distance_km;
    _tank_level -= gasNeeded;
}

double Car::fuel() {
    return _tank_level;
}

double Car::distance() {
    return _odometer;
}
