#ifndef ASTEROIDS_H
#define ASTEROIDS_H

#include <QWidget>

class Asteroids : public QWidget
{
    Q_OBJECT

public:
    Asteroids(QWidget *parent = nullptr);
    ~Asteroids();
};
#endif // ASTEROIDS_H
