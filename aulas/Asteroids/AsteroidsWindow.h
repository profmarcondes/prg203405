#ifndef ASTEROIDSWINDOW_H
#define ASTEROIDSWINDOW_H

#include <QtWidgets>
#include <QGraphicsScene>
#include <QGraphicsView>
#include "AsteroidsScene.h"

class AsteroidsWindow : public QWidget
{
    Q_OBJECT

public:
    AsteroidsWindow(QWidget *parent = nullptr);
    ~AsteroidsWindow();

private:
    AsteroidsScene  * _scene;
    QGraphicsView   * _viewport;
    QVBoxLayout     * _layout;

};
#endif // ASTEROIDSWINDOW_H
