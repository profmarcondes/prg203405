#include "qtcalc.h"

QtCalc::QtCalc(QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle("QtCalculator");

    _reset = true;
    _cur_op = 0;

    _value = new Display();

    _numpad = new Numpad();
    connect(_numpad, SIGNAL(keyStroke(char)), this, SLOT(keyInput(char)));

    _layout = new QVBoxLayout();
    _layout->addWidget(_value);
    _layout->addWidget(_numpad);

    setLayout(_layout);
}

void QtCalc::keyInput(char key) {
    switch(key){
        case '+':
        case '-':
        case '/':
        case '*':
            if(_cur_op) doMath();
            _last_value = _value->text().toDouble();
            _cur_op = key;
            _reset = true;
            break;

        case '=':
            if(_cur_op){
                doMath();
                _cur_op = 0;
                _reset = true;
            }
            break;

        case '.':
            if(!_value->text().contains(key))
                _value->setText(_value->text() + key);
            break;

        case 'C':
            _value->setText("0");
            //_cur_op = 0;
            _reset = true;
            break;

        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
            if( key == '0' && _value->text() == '0')
                break;
            if(_reset){
                _value->setText(QString());
                _reset = false;
            }
            _value->setText(_value->text() + key);
    }
}

void QtCalc::doMath()
{
    double res = 0.0;
    double cur_value = 0.0;

    if(_reset) {
        cur_value = 0.0;
    } else {
        cur_value = _value->text().toDouble();
    }
    switch(_cur_op){
        case '+':
            res = _last_value + cur_value;
            break;
        case '-':
            res = _last_value - cur_value;
            break;
        case '/':
            res = _last_value / cur_value;
            break;
        case '*':
            res = _last_value * cur_value;
            break;
    }
    _value->setText(QString::number(res));
}


