#ifndef NUMPAD_H
#define NUMPAD_H

#include <QWidget>
#include "numbutton.h"
#include <QGridLayout>

class Numpad : public QWidget
{
    Q_OBJECT
public:
    explicit Numpad(QWidget *parent = nullptr);

    // QWidget interface
protected:
    void keyPressEvent(QKeyEvent *event) override;


public slots:
    void keyPressed();

signals:
    void keyStroke(char);

private:
    NumButton * _pad[10];
    NumButton * _plus_op;
    NumButton * _minus_op;
    NumButton * _div_op;
    NumButton * _mul_op;
    NumButton * _equal_op;
    NumButton * _period;
    NumButton * _clear;
    QGridLayout * _layout;


};

#endif // NUMPAD_H
