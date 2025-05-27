#include "helloqt.h"

#include <QApplication>
#include <QWidget>
#include <QVBoxLayout>
#include <QLabel>
#include <QPushButton>
#include <QSpinBox>
#include <QSlider>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    HelloQT window;
    window.show();
    return app.exec();
}
