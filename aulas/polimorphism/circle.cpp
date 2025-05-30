#include "circle.h"

Circle::Circle(double radius) {
		this->radius = radius;
		cout << "(" << this << ") Circle constructor called" << endl;
}

double Circle::area() {
		cout << "(" << this << ") Circle::area()" << endl;
		return 3.14 * radius * radius;
}

void Circle::info() {
		cout << "(" << this << ") Circle::info()" << endl;
		cout << "Radius: " << radius << endl;
		cout << "Area: " << 3.14 * radius * radius << endl;
}