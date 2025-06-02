#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>
#include "shape.h"

using namespace std;

class Rectangle: public Shape {

public:
	Rectangle(double length, double width);
	double area();
	void info();

private:
	double length;
	double width;
};


#endif // RECTANGLE_H