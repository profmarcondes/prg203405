#ifndef LED_H
#define LED_H

#include <QLabel>

class Led : public QLabel
{
    Q_OBJECT

public:
    Led(const QString &text,
        QWidget *parent = nullptr,
        Qt::WindowFlags f = Qt::WindowFlags());

public slots:
    void toggle();

private:
    bool state;

};

#endif // LED_H
