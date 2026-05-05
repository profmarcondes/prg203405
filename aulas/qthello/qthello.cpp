#include "qthello.h"

QtHello::QtHello(QWidget *parent)
    : QWidget(parent) {

    label = new QLabel("<h1>Hello <font color=red>Qt!</font></h1>");
    label->setAlignment(Qt::AlignHCenter | Qt::AlignVCenter);

    age = new DataDisplay("Age:");
    distance = new DataDisplay("Distance:");

    quitBtn = new QPushButton("Quit");
    QObject::connect(quitBtn, SIGNAL(clicked(bool)), this, SLOT(close()));

    aboutBtn = new QPushButton("About");
    QObject::connect(aboutBtn, SIGNAL(clicked(bool)), qApp, SLOT(aboutQt()));

    btnLayout = new QHBoxLayout;
    btnLayout->addWidget(aboutBtn);
    btnLayout->addWidget(quitBtn);

    mainLayout = new QVBoxLayout;
    mainLayout->addWidget(label);
    mainLayout->addWidget(age);
    mainLayout->addWidget(distance);
    mainLayout->addLayout(btnLayout);

    setLayout(mainLayout);
}

QtHello::~QtHello() {}
