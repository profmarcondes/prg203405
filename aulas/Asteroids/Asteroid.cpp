#include "Asteroid.h"
#include <QPainter>


Asteroid::Asteroid(QPointF pos): _position(pos), _acceleration(QPointF(-0.01,0.01)) {


}

QRectF Asteroid::boundingRect() const
{
    const qreal adjust = 0.5;

    return QRectF(-(width/2) - adjust,
                  -(height/2) - adjust,
                  width + adjust,
                  height + adjust);
}

QPainterPath Asteroid::shape() const
{
    QPainterPath path;
    path.addEllipse(-(width/2),
                    -(height/2),
                    width,
                    height);
    return path;
}

void Asteroid::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    // Ball
    painter->setBrush(Qt::lightGray);
    painter->drawEllipse(-0.5*width, -0.5*height, width, height);
}

void Asteroid::advance(int phase)
{
    if(!phase)
        return;

    _velocity = _velocity + _acceleration;
    _position = _position + _velocity;

    if(_position.x() > 300)
        _position.setX(-300);
    if(_position.x() < -300)
        _position.setX(300);
    if(_position.y() > 300)
        _position.setY(-300);
    if(_position.y() < -300)
        _position.setY(300);

    setPos(_position.x(), _position.y());

}
