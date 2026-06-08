#include "numbutton.h"
#include <QMouseEvent>
#include <QDebug>

NumButton::NumButton(const QString &text, char value, QWidget *parent)
    : QPushButton(text, parent) {
    _value = value;
}

void NumButton::mousePressEvent(QMouseEvent *event)
{
    if( event->button() == Qt::RightButton) {
        qDebug() << "Right button clicked" ;
    }
    QPushButton::mousePressEvent(event);
}
