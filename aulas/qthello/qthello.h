#ifndef QTHELLO_H
#define QTHELLO_H

#include <QWidget>
#include <QtWidgets>
#include "datadisplay.h"

class QtHello : public QWidget
{
    Q_OBJECT

public:
    QtHello(QWidget *parent = nullptr);
    ~QtHello();

private:
    QLabel * label;
    DataDisplay * age;
    DataDisplay * distance;
    QPushButton * quitBtn;
    QPushButton * aboutBtn;
    QHBoxLayout * btnLayout;
    QVBoxLayout * mainLayout;

};
#endif // QTHELLO_H
