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

public slots:
    void process_slider_value(int);

private:
    QHBoxLayout     * _layout;
    SensorDisplay   * _sensor01;
    QSlider         * _slider;

    SensorDisplay   * _sensor02;
    RandomSensor    * _rsensor02;

    SensorDisplay   * _sensor03;
    RandomSensor    * _rsensor03;

};
#endif // DASHBOARD_H
