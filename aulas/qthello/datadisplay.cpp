#include "datadisplay.h"

DataDisplay::DataDisplay(QString name, QWidget *parent)
    : QWidget{parent}
{
    label = new QLabel(name);

    spin = new QSpinBox();
    spin->setRange(0,100);

    slider = new QSlider(Qt::Horizontal);
    slider->setRange(0,100);

    QObject::connect(slider, SIGNAL(valueChanged(int)), spin, SLOT(setValue(int)));
    QObject::connect(spin, SIGNAL(valueChanged(int)), slider, SLOT(setValue(int)));

    layout = new QHBoxLayout;
    layout->addWidget(label);
    layout->addWidget(slider);
    layout->addWidget(spin);

    setLayout(layout);
}

int DataDisplay::getValue() {
    return spin->value();
}

