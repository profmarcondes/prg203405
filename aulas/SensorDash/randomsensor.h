#ifndef RANDOMSENSOR_H
#define RANDOMSENSOR_H

#include <QtCore>

class RandomSensor : public QObject
{
        Q_OBJECT
    public:
        explicit RandomSensor(QString desc,
                              int period_ms,
                              double ceiling = 100.00,
                              double floor = 0.0,
                              QObject *parent = nullptr);

    public slots:
        void generateValue();

    signals:
        void valueChanged(double);

    private:
        QTimer _timer;
        double _value;

        QString _desc;
        double  _floor;
        double  _ceiling;


};

#endif // RANDOMSENSOR_H
