#include "AsteroidsWindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    AsteroidsWindow w;
    w.show();

    return a.exec();
}
