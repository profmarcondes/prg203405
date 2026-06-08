#ifndef NUMBUTTON_H
#define NUMBUTTON_H

#include <QPushButton>

class NumButton : public QPushButton
{
    Q_OBJECT

public:
    NumButton(const QString &text, char value, QWidget *parent = nullptr);

    char getValue(){
        return _value;
    }

private:
    char _value;

    // QWidget interface
protected:
    void mousePressEvent(QMouseEvent *event);
};

#endif // NUMBUTTON_H
