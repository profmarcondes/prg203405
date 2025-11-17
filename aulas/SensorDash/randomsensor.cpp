#include "randomsensor.h"

RandomSensor::RandomSensor(QString desc,
                           int period_ms,
                           double ceiling,
                           double floor,
                           QObject *parent)
    : QObject{parent}, _desc(desc), _floor(floor), _ceiling(ceiling)
{
    QObject::connect(&_timer, SIGNAL(timeout()), this, SLOT(generateValue()));
    _timer.start(period_ms);
}

void RandomSensor::generateValue(){
    double tmp = QRandomGenerator::global()->generateDouble();
    _value = (tmp * (_ceiling-_floor)) + _floor;
    emit valueChanged(_value);
}
