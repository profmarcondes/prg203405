#include "dashboard.h"

Dashboard::Dashboard(QWidget *parent)
    : QWidget(parent)
{
    _layout = new QHBoxLayout;
    _sensor01 = new SensorDisplay("Slider");
    _slider = new QSlider;

    _slider->setRange(0,10000);
    QObject::connect(_slider, SIGNAL(valueChanged(int)), this, SLOT(process_slider_value(int)));

    _slider->setValue(5000);

    _sensor02 = new SensorDisplay("Wind");
    _rsensor02 = new RandomSensor("Wind", 3000, 30.00, 10.00);
    QObject::connect(_rsensor02, SIGNAL(valueChanged(double)), _sensor02, SLOT(setValue(double)));

    _sensor03 = new SensorDisplay("Wind Dir");
    _rsensor03 = new RandomSensor("Wind Dir", 500, 360.00, 0.00);
    QObject::connect(_rsensor03, SIGNAL(valueChanged(double)), _sensor03, SLOT(setValue(double)));

    _layout->addWidget(_sensor01);
    _layout->addWidget(_sensor02);
    _layout->addWidget(_sensor03);
    _layout->addWidget(_slider);

    setLayout(_layout);
}

Dashboard::~Dashboard() {}

void Dashboard::process_slider_value(int value)
{
    _sensor01->setValue( (value/100.00) );
}
