#ifndef MOVER_H
#define MOVER_H

#include <QVector2D>

class Mover
{
public:
    Mover();

    void applyMovement();
    void checkEdges();
    void applyForce(QVector2D force);
    QPointF position(){ return _position.toPointF(); }

private:
    QVector2D   _position;
    QVector2D   _velocity;
    QVector2D   _acceleration;
    qreal       _topspeed;
    qreal       _mass;

};

#endif // MOVER_H
