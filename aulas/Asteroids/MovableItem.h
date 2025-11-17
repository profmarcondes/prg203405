#ifndef MOVABLEITEM_H
#define MOVABLEITEM_H

#include <QVector2D>
#include <QGraphicsItem>
#include <QObject>

class MovableItem : public QGraphicsItem
{
    //Q_OBJECT

public:
    MovableItem();

    void applyForce(QVector2D force) {
        _acceleration += force;
    }

    void update(){
        _velocity += _acceleration;
        _position += _velocity;
        _acceleration *= 0.0;
    }

private:
    QVector2D _position;
    QVector2D _velocity;
    QVector2D _acceleration;
};

#endif // MOVABLEITEM_H
