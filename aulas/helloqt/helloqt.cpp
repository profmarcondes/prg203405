#include "helloqt.h"

#include <QApplication>

HelloQT::HelloQT(QWidget *parent)
    : QWidget(parent)
{
    _mainLayout = new QVBoxLayout();
    _sideLayout = new QVBoxLayout();
    _bottomLayout = new QHBoxLayout();

    _label = new QLabel("<h1>Hello <font color='red'>QT!</font></h1>");
    _label->setAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
    _sideLayout->addWidget(_label);

    _sideLayout->addStretch();

    _button = new QPushButton("Close");
    QObject::connect(_button, SIGNAL(clicked(bool)), qApp, SLOT(quit()));
    _sideLayout->addWidget(_button);

    _spin = new QSpinBox();
    _spin->setRange(0, 1000000);
    _spin->setAlignment(Qt::AlignTop);
    _spin->setFixedSize(_spin->sizeHint());

    _bottomLayout->addWidget(_spin);
    _bottomLayout->addLayout(_sideLayout);

    _slider = new QSlider(Qt::Horizontal);
    _slider->setRange(0, 1000000);

    _mainLayout->addWidget(_slider);
    _mainLayout->addLayout(_bottomLayout);

    QObject::connect(_spin, SIGNAL(valueChanged(int)), _slider, SLOT(setValue(int)));
    QObject::connect(_slider, SIGNAL(valueChanged(int)), _spin, SLOT(setValue(int)));

    _spin->setValue(30);

    setLayout(_mainLayout);
    //setFixedSize(sizeHint());
}

HelloQT::~HelloQT() {}
