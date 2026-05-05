#ifndef DATADISPLAY_H
#define DATADISPLAY_H

#include <QtWidgets>

class DataDisplay : public QWidget
{
    Q_OBJECT
public:
    explicit DataDisplay(QString name, QWidget *parent = nullptr);

    int getValue();

private:
    QLabel      * label;
    QSpinBox    * spin;
    QSlider     * slider;
    QHBoxLayout * layout;
};

#endif // DATADISPLAY_H
