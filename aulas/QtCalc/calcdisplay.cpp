#include "calcdisplay.h"

CalcDisplay::CalcDisplay(QWidget *parent)
    : QLabel{"0", parent}
{
    setStyleSheet("font-size: 48px");
    setAlignment(Qt::AlignRight);
}
