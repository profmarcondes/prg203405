#include "randomsensor.h"

RandomSensor::RandomSensor(QString desc,
                           int period_ms,
                           double maxValue,
                           double minValue,
                           QObject *parent)
    : QObject{parent}
{
    _name = desc;
    _max = maxValue;
    _min = minValue;

    _timer = new QTimer;

    QObject::connect(_timer, SIGNAL(timeout()), this, SLOT(generateValue()));
    _timer->start(period_ms);

}

void RandomSensor::generateValue()
{
    double tmp = QRandomGenerator::global()->generateDouble();
    _value = (tmp * (_max - _min)) + _min;
    emit valueChanged(_value);
}
