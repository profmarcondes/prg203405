#include "graphics2d.h"

Graphics2D::Graphics2D(QWidget *parent)
    : QWidget(parent)
{
    _scene = new QGraphicsScene;

    _view = new QGraphicsView(_scene);
    //_view->setScene(scene);

    _ball = new QGraphicsEllipseItem(-50,-25,100,50);
    _rect = _scene->addRect(-50,-25,100,50);

    //_ball->setPos(100,-100);
    _ball->setRotation(30);

    _ball->setBrush(QBrush(Qt::red));
    _ball->setPen(QPen(QBrush(Qt::darkGreen),5));

    _rect->setRotation(30);
    _scene->addItem(_ball);

    _x_axis = _scene->addLine(-200,0,200,0);
    _y_axis = _scene->addLine(0,-200,0,200);


    _angle = new QSlider(Qt::Horizontal);
    _angle->setRange(-180, 180);
    QObject::connect(_angle, SIGNAL(valueChanged(int)), this, SLOT(setAngle(int)));

    _layout = new QVBoxLayout;
    _layout->addWidget(_view);
    _layout->addWidget(_angle);

    setLayout(_layout);
}

Graphics2D::~Graphics2D() {}

void Graphics2D::setAngle(int angle)
{
    _ball->setRotation(angle);
}
