#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>
#include "shape.h"

using namespace std;

class Circle : public Shape {
public:
	Circle(double radius);

	double area();
	void info();

private:
	double radius;
};


#endif // CIRCLE_H