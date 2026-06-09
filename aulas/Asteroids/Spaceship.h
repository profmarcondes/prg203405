#ifndef SPACESHIP_H
#define SPACESHIP_H

#include <QGraphicsItem>
#include <QVector2D>
#include "Config.h"

class Spaceship : public QGraphicsItem
{
public:
    explicit Spaceship();

    void speed(qreal value) {
        if (value <= Config::Spaceship::MAX_SPEED &&
            value >= Config::Spaceship::MIN_SPEED )
            _speed = value;
    }
    qreal speed() { return _speed; }

    void thruster(bool value = true) { _draw_thruster = value; }

    QRectF boundingRect() const override;
    QPainterPath shape() const override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option,
               QWidget *widget) override;

    void advance(int phase) override;

    void physics_update();
    void applyForce(QVector2D force);
    void turn(qreal a);
    void thrust();
    void wrapEdges();

private:
    qreal _speed;
    qreal _acceleration;

    bool  _draw_thruster;

    QVector2D _position;
    QVector2D _velocity;
    QVector2D _acceleration2;

    qreal _mass;
    qreal _damping = 0.995;
    qreal _topspeed = 6;
    qreal _heading = 0;
    bool  _thrusting = false;

    qreal _angle;
    qreal _angular_velocity;
    qreal _angular_acceleration;


    const qreal width = Config::Spaceship::WIDTH;
    const qreal height = Config::Spaceship::HEIGHT;
};

#endif // SPACESHIP_H
