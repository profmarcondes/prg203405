#include "helloqt.h"

HelloQT::HelloQT(QWidget *parent)
    : QWidget(parent)
{
    label = new QLabel("<h2>Hello Qt!</h2>");

    led = new Led("LED");
    QPushButton * b_led = new QPushButton("Toggle LED");
    QObject::connect(b_led, SIGNAL(clicked()), led, SLOT(toggle()));
    ledLayout = new QVBoxLayout;
    ledLayout->addWidget(led);
    ledLayout->addWidget(b_led);

    button = new QPushButton("Close");
    QObject::connect(button, SIGNAL(clicked()), this, SLOT(close()));
    topLayout = new QHBoxLayout;
    topLayout->addWidget(label);
    topLayout->addWidget(button);

    layout = new QVBoxLayout;
    layout->addLayout(topLayout);
    layout->addLayout(ledLayout);

    setLayout(layout);
}

HelloQT::~HelloQT() {}
