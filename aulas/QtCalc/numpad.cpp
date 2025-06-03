#include "numpad.h"
#include <QDebug>
#include <QKeyEvent>

Numpad::Numpad(QWidget *parent)
    : QWidget{parent}
{
    _layout = new QGridLayout();

    setStyleSheet("font-size: 32px;");

    for(int i = 0; i < 9; i++){
        _pad[i+1] = new QPushButton(QString::number(i+1));
        connect(_pad[i+1], SIGNAL(clicked()), this, SLOT(keyPressed()));
        _layout->addWidget(_pad[i+1],3-(i/3), i%3);
    }
    _pad[0] = new QPushButton("0");
    connect(_pad[0], SIGNAL(clicked()), this, SLOT(keyPressed()));
    _layout->addWidget(_pad[0],4, 0);

    _plus_op = new QPushButton("+");
    connect(_plus_op, SIGNAL(clicked()), this, SLOT(keyPressed()));
    _layout->addWidget(_plus_op, 1, 3);

    _minus_op = new QPushButton("-");
    connect(_minus_op, SIGNAL(clicked()), this, SLOT(keyPressed()));
    _layout->addWidget(_minus_op, 2, 3);

    _div_op = new QPushButton("÷");
    connect(_div_op, SIGNAL(clicked()), this, SLOT(keyPressed()));
    _layout->addWidget(_div_op, 3, 3);

    _mul_op = new QPushButton("x");
    connect(_mul_op, SIGNAL(clicked()), this, SLOT(keyPressed()));
    _layout->addWidget(_mul_op, 4, 3);

    _clear = new QPushButton("C");
    connect(_clear, SIGNAL(clicked()), this, SLOT(keyPressed()));
    _layout->addWidget(_clear, 0, 3);

    _equal_op = new QPushButton("=");
    connect(_equal_op, SIGNAL(clicked()), this, SLOT(keyPressed()));
    _layout->addWidget(_equal_op, 4, 2);

    _period = new QPushButton(".");
    connect(_period, SIGNAL(clicked()), this, SLOT(keyPressed()));
    _layout->addWidget(_period, 4, 1);

    setLayout(_layout);
}

void Numpad::keyPressEvent(QKeyEvent *event)
{
    int k = event->key();
    if(k >= Qt::Key_0 && k <= Qt::Key_9)
        _pad[(k-48)]->animateClick(100);
    else if(k == Qt::Key_Plus)
        _plus_op->animateClick(100);
    else if(k == Qt::Key_Minus)
        _minus_op->animateClick(100);
    else if(k == Qt::Key_Slash)
        _div_op->animateClick(100);
    else if(k == Qt::Key_Asterisk)
        _mul_op->animateClick(100);
    else if(k == Qt::Key_Equal || k == 16777220)
        _equal_op->animateClick(100);
    else if(k == Qt::Key_Period)
        _period->animateClick(100);
    else if(k == Qt::Key_C || k == Qt::Key_Backspace)
        _clear->animateClick(100);
}

void Numpad::keyPressed() {

    QPushButton * button = qobject_cast<QPushButton *>(sender());
    //qDebug() << "Key pressed !!!" << button->text() << Qt::endl;

    char value = button->text().at(0).toLatin1();
    int tmp = (int)value;
    if (tmp == -9)
        value = '/';
    else if (value == 'x')
        value = '*';

    emit keyStroke(value);

}
