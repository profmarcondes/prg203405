#ifndef DASHBOARD_H
#define DASHBOARD_H

#include <QtWidgets>
#include "sensordisplay.h"
#include "randomsensor.h"

class Dashboard : public QWidget
{
        Q_OBJECT

    public:
        Dashboard(QWidget *parent = nullptr);
        ~Dashboard();

    private slots:
        void setValue(int value);

    private:
        QHBoxLayout _layout;
        SensorDisplay _temp;
        QSlider       _slider;
        SensorDisplay * _wind_display;
        RandomSensor  * _wind_sensor;
        SensorDisplay * _dir_display;
        RandomSensor  * _dir_sensor;

};
#endif // DASHBOARD_H
