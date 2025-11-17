#include "sensordisplay.h"

SensorDisplay::SensorDisplay(QString name, QWidget *parent)
    : QWidget{parent}, _name(name)
{

    _min = 0.0;
    _max = 100.0;

    this->setSizePolicy(QSizePolicy::Fixed,QSizePolicy::Fixed);
    this->setStyleSheet("QLabel{font-size: 24px;}");
    _dial.setNotchesVisible(true);
    _dial.setWrapping(false);
    _dial.setEnabled(false);
    _dial.setMaximum(100);
    _dial.setMinimum(0);

    _data_display.setAlignment(Qt::AlignCenter);
    _name.setAlignment(Qt::AlignCenter);

    _layout.addWidget(&_name);
    _layout.addWidget(&_dial);
    _layout.addWidget(&_data_display);
    this->setLayout(&_layout);

    setValue(50.5);

}

void SensorDisplay::setValue(double value) {
    if(value >= _min && value <= _max){
        _data = value;

        _data_display.setText(QString::number(_data, 'f', 2));
        int percent = ((_data - _min) / (_max - _min))*100;
        _dial.setValue(percent);

        emit valueChanged(_data);
    }
}






