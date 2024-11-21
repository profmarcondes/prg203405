#include "led.h"

Led::Led(const QString &text, QWidget *parent, Qt::WindowFlags f):
    QLabel(text, parent, f)
{
    state = false;
}

void Led::toggle()
{
    if(state){
        setText("<font color=\"black\"><strong>LED OFF</strong></font>");
        state = false;
    }else{
        setText("<font color=\"red\"><strong>LED ON</strong></font>");
        state = true;
    }
}

