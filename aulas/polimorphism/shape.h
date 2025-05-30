#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>

using namespace std;

class Shape {
public:
	Shape();
	virtual double area();
	virtual void info();
};


#endif // SHAPE_H