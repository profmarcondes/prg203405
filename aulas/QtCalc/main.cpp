#include "qtcalc.h"
#include "numpad.h"

#include <QApplication>
#include <QLoggingCategory>

int main(int argc, char *argv[]) {

    QLoggingCategory::setFilterRules("*.debug=true\nqt.*.debug=false");

    QApplication a(argc, argv);
    QtCalc w;
    w.show();
    return a.exec();
}
