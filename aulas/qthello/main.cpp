#include "qthello.h"
#include "datadisplay.h"

#include <QApplication>
//#include <QWidget>
//#include <QLabel>
//#include <QPushButton>
//#include <QVBoxLayout>
#include <QtWidgets>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QtHello * janela = new QtHello();
    janela->show();
    return a.exec();
}
