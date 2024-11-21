
#include <QApplication>
#include <QtWidgets>
#include "helloqt.h"
#include "led.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    HelloQT * window = new HelloQT();
    window->show();

    //HelloQT * win2 = new HelloQT();
    //win2->show();

    return a.exec();
}
