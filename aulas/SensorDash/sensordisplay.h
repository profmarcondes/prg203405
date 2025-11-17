#ifndef SENSORDISPLAY_H
#define SENSORDISPLAY_H

#include <QObject>
#include <QtWidgets>

class SensorDisplay : public QWidget
{
        Q_OBJECT
    public:
        explicit SensorDisplay(QString name, QWidget *parent = nullptr);

        void setMin(double value) { _min = value; }
        void setMax(double value) { _max = value; }

    public slots:
        void setValue(double value);

    signals:
        void valueChanged(double value);

    private:
        QVBoxLayout _layout;
        QDial       _dial;
        QLabel      _data_display;
        QLabel      _name;

        double      _data;
        double      _min;
        double      _max;

};

#endif // SENSORDISPLAY_H
