#ifndef GRAPHICS2D_H
#define GRAPHICS2D_H

#include <QtWidgets>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsEllipseItem>
#include <QGraphicsLineItem>

class Graphics2D : public QWidget
{
    Q_OBJECT

public:
    Graphics2D(QWidget *parent = nullptr);
    ~Graphics2D();

public slots:
    void setAngle(int angle);

private:
    QGraphicsScene * _scene;
    QGraphicsView  * _view;
    QGraphicsLineItem * _x_axis;
    QGraphicsLineItem * _y_axis;
    QGraphicsEllipseItem * _ball;
    QGraphicsRectItem * _rect;

    QVBoxLayout * _layout;
    QSlider * _angle;

};
#endif // GRAPHICS2D_H
