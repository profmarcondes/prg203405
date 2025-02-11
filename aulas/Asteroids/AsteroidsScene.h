#ifndef ASTEROIDSSCENE_H
#define ASTEROIDSSCENE_H

#include <QGraphicsScene>
#include <QTimer>
#include "Spaceship.h"

class AsteroidsScene : public QGraphicsScene
{
public:
    explicit AsteroidsScene(QObject *parent = nullptr);

    void setAxis(bool value);

    // QGraphicsScene interface
protected:
    void keyPressEvent(QKeyEvent *event);
    void keyReleaseEvent(QKeyEvent *event);

private:
    Spaceship       * _ship;

    QTimer          * _timer;

    QGraphicsLineItem * x_axis;
    QGraphicsLineItem * y_axis;


    // QGraphicsScene interface
protected:
    void mousePressEvent(QGraphicsSceneMouseEvent *event) override;
};

#endif // ASTEROIDSSCENE_H
