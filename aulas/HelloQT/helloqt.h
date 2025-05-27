#ifndef HELLOQT_H
#define HELLOQT_H

#include <QApplication>
#include <QWidget>
#include <QVBoxLayout>
#include <QLabel>
#include <QPushButton>
#include <QSpinBox>
#include <QSlider>

class HelloQT : public QWidget
{
    Q_OBJECT

public:
    HelloQT(QWidget *parent = nullptr);
    ~HelloQT();

private:
    QLabel * label;

    QSpinBox * spin;
    QSlider * slider;
    QHBoxLayout * middleLayout;

    QPushButton * btnQuit;
    QPushButton * btnAbout;
    QHBoxLayout * btnLayout;

    QVBoxLayout * mainLayout;

};
#endif // HELLOQT_H
