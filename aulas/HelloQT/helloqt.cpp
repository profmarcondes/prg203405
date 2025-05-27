#include "helloqt.h"

HelloQT::HelloQT(QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle("Hello QT App");

    label = new QLabel("<h2>Hello QT!</h2>");

    spin = new QSpinBox();
    spin->setRange(0,130);

    slider = new QSlider(Qt::Horizontal);
    slider->setRange(0,130);

    QObject::connect(spin, SIGNAL(valueChanged(int)), slider, SLOT(setValue(int)));
    QObject::connect(slider, SIGNAL(valueChanged(int)), spin, SLOT(setValue(int)));

    middleLayout = new QHBoxLayout();
    middleLayout->addWidget(slider);
    middleLayout->addWidget(spin);

    btnQuit = new QPushButton("Quit");
    QObject::connect(btnQuit, SIGNAL(clicked()), qApp, SLOT(quit()) );
    btnAbout = new QPushButton("About");
    QObject::connect(btnAbout, SIGNAL(clicked()), qApp, SLOT(aboutQt()) );

    btnLayout = new QHBoxLayout();
    btnLayout->addWidget(btnAbout);
    btnLayout->addWidget(btnQuit);

    mainLayout = new QVBoxLayout();
    mainLayout->addWidget(label);
    mainLayout->addLayout(middleLayout);
    mainLayout->addLayout(btnLayout);

    setLayout(mainLayout);

}

HelloQT::~HelloQT() {}
