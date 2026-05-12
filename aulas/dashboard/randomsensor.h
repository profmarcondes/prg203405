#ifndef RANDOMSENSOR_H
#define RANDOMSENSOR_H

#include <QRandomGenerator>
#include <QObject>
#include <QTimer>

class RandomSensor : public QObject
{
    Q_OBJECT

public:
    explicit RandomSensor(QString desc,
                          int period_ms,
                          double maxValue = 100.00,
                          double minValue = 0.00,
                          QObject *parent = nullptr);

public slots:
    void generateValue();

signals:
    void valueChanged(double);

private:
    QTimer * _timer;
    double   _value;

    QString  _name;
    double   _max;
    double   _min;


};

#endif // RANDOMSENSOR_H
