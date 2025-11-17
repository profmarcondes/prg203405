#include "helloqt.h"

#include <QApplication>
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    HelloQT * window = new HelloQT();
    window->show();

    //HelloQT * window2 = new HelloQT();
    //window2->show();


    return app.exec();
}
