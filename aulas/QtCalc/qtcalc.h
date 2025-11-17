#ifndef QTCALC_H
#define QTCALC_H

#include <QWidget>
#include <QLabel>
#include "numpad.h"
#include "display.h"

class QtCalc : public QWidget
{
    Q_OBJECT

public:
    QtCalc(QWidget *parent = nullptr);

public slots:
    void keyInput(char key);

private:
    void doMath();

private:
    Display *        _value;
    Numpad *        _numpad;
    QVBoxLayout *   _layout;

    double          _last_value;
    char            _cur_op;
    bool            _reset;


};
#endif // QTCALC_H
