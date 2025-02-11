#include "Mover.h"
#include "Config.h"

Mover::Mover() {
    _position = QVector2D(0,0);
    _velocity = QVector2D(0,0);
    _acceleration = QVector2D(-0.001, 0.01);
    _topspeed = 2;
    _mass = 1;
}

void Mover::applyMovement()
{
    _velocity += _acceleration;
    if(_velocity.length() > _topspeed){
        _velocity.normalize();
        _velocity *= _topspeed;
    }
    _position += _velocity;
    _acceleration *= 0;
}

void Mover::checkEdges()
{
    if (_position.x() > (Config::Viewport::WIDTH/2)) {
        _position.setX(-1*(Config::Viewport::WIDTH/2));
    } else if (_position.x() < -1*(Config::Viewport::WIDTH/2)) {
        _position.setX((Config::Viewport::WIDTH/2));
    }

    if (_position.y() > (Config::Viewport::HEIGHT/2)) {
        _position.setY(-1*(Config::Viewport::HEIGHT/2));
    } else if (_position.y() < -1*(Config::Viewport::HEIGHT/2)) {
        _position.setY((Config::Viewport::HEIGHT/2));
    }
}

void Mover::applyForce(QVector2D force)
{
    _acceleration += force/_mass;
}
