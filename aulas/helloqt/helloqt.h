#ifndef HELLOQT_H
#define HELLOQT_H

#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>
#include <QSpinBox>
#include <QSlider>
#include <QHBoxLayout>

class HelloQT : public QWidget
{
    Q_OBJECT

public:
    HelloQT(QWidget *parent = nullptr);
    ~HelloQT();


private:
    QLabel * _label;
    QPushButton * _button;
    QVBoxLayout * _mainLayout;
    QVBoxLayout * _sideLayout;
    QHBoxLayout * _bottomLayout;
    QSpinBox * _spin;
    QSlider * _slider;

};
#endif // HELLOQT_H
