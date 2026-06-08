#ifndef DISPLAY_H
#define DISPLAY_H

#include <QLabel>

class CalcDisplay : public QLabel
{
    Q_OBJECT
public:
    explicit CalcDisplay(QWidget *parent = nullptr);

signals:
};

#endif // DISPLAY_H
