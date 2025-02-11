#include "Spaceship.h"
#include <QDebug>
#include <QKeyEvent>
#include <QtMath>
#include <QPainter>
#include <QStyleOption>

Spaceship::Spaceship(){
    _speed = 0;
    _draw_thruster = false;
}

QRectF Spaceship::boundingRect() const
{
    const qreal adjust = 0.5;

    return QRectF(-(width/2) - adjust,
                  -(height/2) - adjust,
                  width + adjust,
                  height + adjust);
}

QPainterPath Spaceship::shape() const
{
    QPainterPath path;
    path.addRect(-(width/2),
                 -(height/2),
                 width,
                 height);
    return path;
}

void Spaceship::paint(QPainter *painter, const QStyleOptionGraphicsItem *, QWidget *)
{
    // Body
    painter->setBrush(Qt::lightGray);
    QPolygon body(4);
    body.setPoint(0, 0, (height*-0.5));
    body.setPoint(1, (width*-0.5), (height*0.3));
    body.setPoint(2, 0, (height*0.20));
    body.setPoint(3, (width*0.5), (height*0.3));
    painter->drawPolygon(body);

    // Cockpit
    painter->setBrush(Qt::darkGray);
    qreal c_width = (width*0.25);
    qreal c_height = (height*0.25);
    painter->drawEllipse(-0.5*c_width, -0.6*c_height, c_width, c_height);

    if(_draw_thruster){
        // Propulsion Jet
        painter->setBrush(QBrush(QGradient(QGradient::MorpheusDen)));
        QPolygon fire(4);
        fire.setPoint(0, 0, (height*0.21));
        fire.setPoint(1, (width*-0.25), (height*0.5));
        fire.setPoint(2, 0, (height*0.45));
        fire.setPoint(3, (width*0.25), (height*0.5));
        painter->drawPolygon(fire);
    }

}

void Spaceship::advance(int phase)
{
    if(phase == 0)
        return;

    const qreal limit_x = Config::Viewport::WIDTH/2;
    const qreal limit_y = Config::Viewport::HEIGHT/2;

    //QPointF position = pos();
    qreal abs_dx = abs(0 - pos().x());
    qreal abs_dy = abs(0 - pos().y());

    qreal dx = 0;
    qreal dy = 0;
    if(abs_dx > limit_x)
        dx = 2*( 0 - pos().x());
    if(abs_dy > limit_y)
        dy = 2*( 0 - pos().y());
    if(dx != 0 || dy != 0)
        moveBy(dx, dy);

    dx = qSin(qDegreesToRadians(rotation())) * _speed;
    dy = -qCos(qDegreesToRadians(rotation())) * _speed;
    moveBy(dx,dy);

    //if(_speed > 0) _speed -= (Config::Spaceship::MAX_SPEED/(3*Config::Viewport::FPS));

}
