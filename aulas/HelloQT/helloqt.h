#ifndef HELLOQT_H
#define HELLOQT_H

#include <QtWidgets>
#include "led.h"

class HelloQT : public QWidget
{
    Q_OBJECT

public:
    HelloQT(QWidget *parent = nullptr);
    ~HelloQT();

private:
    QLabel * label;
    Led * led;
    QPushButton * b_led;
    QPushButton * button;
    QVBoxLayout * layout;
    QHBoxLayout * topLayout;
    QTimer      * timer;

};
#endif // HELLOQT_H
