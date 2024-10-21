#ifndef CAR_H
#define CAR_H

class Car {
public:
    Car(double capacity, double consumption);

    // Abastecer o carro com uma certa quantidade de gasolina
    void fuelIn(double liters);
    // Mover o carro em uma determinada distância (medida em km);
    void move(double distance_km);
    // Retornar a quantidade de combustı́vel e a distância total percorrida.
    double fuel();
    double distance();

private:
    double _capacity;
    double _tank_level;
    double _odometer;
    double _consumption;

};

#endif // CAR_H
