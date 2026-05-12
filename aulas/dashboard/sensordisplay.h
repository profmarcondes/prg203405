#ifndef SENSORDISPLAY_H
#define SENSORDISPLAY_H

#include <QWidget>
#include <QLabel>
#include <QVBoxLayout>
#include <QDial>

class SensorDisplay : public QWidget
{
    Q_OBJECT

public:
    explicit SensorDisplay(QString name, QWidget *parent = nullptr);

    void setMin(double value) { _min = value; }
    void setMax(double value) { _max = value; }

public slots:
    void setValue(double value);

private:
    QVBoxLayout * _layout;
    QDial       * _dial;
    QLabel      * _dataDisplay;
    QLabel      * _name;

    double      _data;
    double      _min;
    double      _max;
};

#endif // SENSORDISPLAY_H
