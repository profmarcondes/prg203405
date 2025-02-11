#include "AsteroidsWindow.h"

AsteroidsWindow::AsteroidsWindow(QWidget *parent) : QWidget(parent) {
    _scene = new AsteroidsScene(this);
    _scene->setAxis(true);
    _viewport = new QGraphicsView(this);
    _viewport->setScene(_scene);
    //_viewport->setBackgroundBrush(QPixmap(":/images/space.jpg"));
    _layout = new QVBoxLayout(this);
    _layout->addWidget(_viewport);
    setLayout(_layout);
    setFixedSize(sizeHint());
    setWindowTitle("Asteroids");
}

AsteroidsWindow::~AsteroidsWindow() {}
