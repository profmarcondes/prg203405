#include "dashboard.h"

Dashboard::Dashboard(QWidget *parent)
    : QWidget(parent), _temp("Temp")
{
    _temp.setMin(0);
    _temp.setMax(100);

    _slider.setMaximum(10000);

    QObject::connect(&_slider, SIGNAL(valueChanged(int)),
                     this, SLOT(setValue(int)));

    _slider.setValue(5000);

    _wind_display = new SensorDisplay("Wind");
    _wind_display->setMin(10.0);
    _wind_display->setMax(30.0);
    _wind_sensor = new RandomSensor("Wind", 3000, 30.0, 10.0);

    QObject::connect(_wind_sensor, SIGNAL(valueChanged(double)),
                     _wind_display, SLOT(setValue(double)));

    _dir_display = new SensorDisplay("Wind Dir");
    _dir_display->setMin(0.0);
    _dir_display->setMax(360.0);
    _dir_sensor = new RandomSensor("Wind Dir", 500, 360.0);

    QObject::connect(_dir_sensor, SIGNAL(valueChanged(double)),
                     _dir_display, SLOT(setValue(double)));


    _layout.addWidget(&_temp);
    _layout.addWidget(_wind_display);
    _layout.addWidget(_dir_display);
    _layout.addWidget(&_slider);
    this->setLayout(&_layout);
}

Dashboard::~Dashboard()
{
}

void Dashboard::setValue(int value)
{
    _temp.setValue((value/100.0));
    //_wind.setValue((value/100.0)*0.50);
}
