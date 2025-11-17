#ifndef DISPLAY_H
#define DISPLAY_H

#include <QLabel>

class Display : public QLabel
{
    Q_OBJECT
public:
    explicit Display(QWidget *parent = nullptr);

signals:
};

#endif // DISPLAY_H
