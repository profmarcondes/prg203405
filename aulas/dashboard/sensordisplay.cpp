#include "sensordisplay.h"

SensorDisplay::SensorDisplay(QString name, QWidget *parent)
    : QWidget{parent}
{
    this->setSizePolicy(QSizePolicy::Fixed,QSizePolicy::Fixed);
    this->setStyleSheet("QLabel{ font-size: 24px }");

    _min = 0.0;
    _max = 100.0;

    _name = new QLabel(name);
    _name->setAlignment(Qt::AlignCenter);

    _dial = new QDial;
    _dial->setNotchesVisible(true);
    _dial->setWrapping(false);
    _dial->setEnabled(false);
    _dial->setRange(0, 100);

    _dataDisplay = new QLabel("0");
    _dataDisplay->setAlignment(Qt::AlignCenter);

    _layout = new QVBoxLayout;

    _layout->addWidget(_name);
    _layout->addWidget(_dial);
    _layout->addWidget(_dataDisplay);

    setLayout(_layout);

    setValue(50.5);
}

void SensorDisplay::setValue(double value) {

    _data = value;

    _dataDisplay->setText(QString::number(value, 'f', 2));
    int percent = ((_data - _min) / ( _max - _min)) * 100;
    _dial->setValue(percent);

}
