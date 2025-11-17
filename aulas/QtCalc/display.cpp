#include "display.h"

Display::Display(QWidget *parent)
    : QLabel{"0", parent}
{
    setStyleSheet("font-size: 32px");
    setAlignment(Qt::AlignRight);
}
