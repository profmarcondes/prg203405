#include "AsteroidsScene.h"
#include "Config.h"
#include "Asteroid.h"
#include <QDebug>
#include <QKeyEvent>
#include <QGraphicsSceneMouseEvent>

AsteroidsScene::AsteroidsScene(QObject *parent)
    : QGraphicsScene{parent}
{
    setSceneRect(-0.5*Config::Viewport::WIDTH,
                 -0.5*Config::Viewport::HEIGHT,
                 Config::Viewport::WIDTH,
                 Config::Viewport::HEIGHT);

    setBackgroundBrush(QBrush(QColor(QColorConstants::Svg::lightsteelblue)));

    // Construct Scene Axis -----------------------
    int x_limit = 0.5 * width();
    int y_limit = 0.5 * height();
    x_axis = addLine(-x_limit,0,x_limit,0);
    x_axis->setZValue(10);
    y_axis = addLine(0,-y_limit,0,y_limit);
    y_axis->setZValue(10);
    // --------------------------------------------


    // Exemplos de Itens adicionáveis na cena. ----
    QGraphicsRectItem * rect = new QGraphicsRectItem(-25,-25,50,50);
    QGraphicsRectItem * rect2 = new QGraphicsRectItem(0,0,50,50);
    addItem(rect);
    rect->setFlag(QGraphicsItem::ItemIsMovable);
    rect->setFlag(QGraphicsItem::ItemIsSelectable);
    rect->setPos(-100,-100);
    rect->setRotation(45);
    rect->setBrush(Qt::red);
    addItem(rect2);
    rect2->setPos(-100,-100);
    rect2->setRotation(15);
    rect2->setBrush(Qt::green);
    QGraphicsPixmapItem * pix = new QGraphicsPixmapItem(QPixmap(":/images/space.jpg"));
    pix->setScale(0.25);
    addItem(pix);
    // --------------------------------------------


    // Add spaceship
    _ship = new Spaceship;
    //_ship->setFlag(QGraphicsItem::ItemIsFocusable);
    //_ship->setFocus();
    _ship->setScale(2);
    addItem(_ship);

    // Add Asteroid
    addItem(new Asteroid(QPointF(0,0)));

    _timer = new QTimer;
    QObject::connect(_timer, &QTimer::timeout, this, &QGraphicsScene::advance);
    _timer->start(1000 / Config::Viewport::FPS);
}

void AsteroidsScene::setAxis(bool value)
{
    if(value){
        x_axis->show();
        y_axis->show();
    } else {
        x_axis->hide();
        y_axis->hide();
    }
}

void AsteroidsScene::keyPressEvent(QKeyEvent *event)
{
    qDebug() << "Key Press Event in Scene";
    if( event->key() == Qt::Key_Left){
        //Move left
        _ship->setRotation(_ship->rotation()-Config::Spaceship::ROTATION);
    }
    if( event->key() == Qt::Key_Right){
        //Move Right
        _ship->setRotation(_ship->rotation()+Config::Spaceship::ROTATION);
    }
    if( event->key() == Qt::Key_Up){
        //Move UP
        _ship->thruster(true);
        _ship->speed(_ship->speed()+1);
    }
    if( event->key() == Qt::Key_Down){
        _ship->speed(_ship->speed()-1);
    }
    if( event->key() == Qt::Key_R){
        _ship->setRotation(0);
        _ship->setPos(0,0);
        _ship->speed(0.0);
    }
    QGraphicsScene::keyPressEvent(event);
}

void AsteroidsScene::keyReleaseEvent(QKeyEvent *event)
{
    qDebug() << "Key Release Event in Scene";
    if( event->key() == Qt::Key_Up){
        //Move UP
        _ship->thruster(false);
    }
    QGraphicsScene::keyReleaseEvent(event);
}

void AsteroidsScene::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    qDebug() << "Mouse Press Event in Scene";
    QPointF mousePos = event->scenePos();
    qDebug() << "Mouse at " << mousePos.x() << "," << mousePos.y();
    QGraphicsScene::mousePressEvent(event);
}
