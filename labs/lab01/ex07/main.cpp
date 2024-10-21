#include <iostream>

#include "car.h"

using namespace std;

int main()
{
    cout << "Car Abstraction!" << endl;

    Car carro1(50, 15);
    Car carro2(30, 6);

    carro1.fuelIn(50.0);
    carro2.fuelIn(75.0);

    cout << "O carro 1 tem " << carro1.fuel() << " litros de combustível." << endl;
    cout << "O carro 2 tem " << carro2.fuel() << " litros de combustível." << endl;


    cout << "Round 1" << endl;
    carro1.move(50);
    carro2.move(50);

    cout << "O carro 1 andou " << carro1.distance() << " km." << endl;
    cout << "O carro 2 andou " << carro2.distance() << " km." << endl;

    cout << "O carro 1 tem " << carro1.fuel() << " litros de combustível." << endl;
    cout << "O carro 2 tem " << carro2.fuel() << " litros de combustível." << endl;

    cout << "Round 2" << endl;
    carro1.move(100);
    carro2.move(100);

    cout << "O carro 1 andou " << carro1.distance() << " km." << endl;
    cout << "O carro 2 andou " << carro2.distance() << " km." << endl;

    cout << "O carro 1 tem " << carro1.fuel() << " litros de combustível." << endl;
    cout << "O carro 2 tem " << carro2.fuel() << " litros de combustível." << endl;

    cout << "Round 3" << endl;
    carro1.move(50);
    carro2.move(50);

    cout << "O carro 1 andou " << carro1.distance() << " km." << endl;
    cout << "O carro 2 andou " << carro2.distance() << " km." << endl;

    cout << "O carro 1 tem " << carro1.fuel() << " litros de combustível." << endl;
    cout << "O carro 2 tem " << carro2.fuel() << " litros de combustível." << endl;

    return 0;
}
