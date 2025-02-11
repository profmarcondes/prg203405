#ifndef ASTEROID_H
#define ASTEROID_H

#include <QGraphicsItem>
#include <QtMath>
#include <QVector2D>
#include "Mover.h"
#include "Config.h"

class Asteroid : public QGraphicsItem, public Mover
{
public:
    Asteroid(QPointF pos);

    QRectF boundingRect() const override;
    QPainterPath shape() const override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option,
               QWidget *widget) override;

    void advance(int phase) override;

private:
    //QVector2D _position;
    //QVector2D _velocity;
    //QVector2D _acceleration;

    const qreal width = 40;
    const qreal height = 40;
};

#endif // ASTEROID_H
