#include "rectangle.h"

Rectangle::Rectangle(double length, double width) {
		this->length = length;
		this->width = width;	
		cout << "(" << this << ") Rectangle constructor called" << endl;
}

double Rectangle::area() {
		cout << "(" << this << ") Rectangle::area()" << endl;
		return length * width;
}

void Rectangle::info() {
		cout << "(" << this << ") Rectangle::info()" << endl;
		cout << "Length: " << length << endl;
		cout << "Width: " << width << endl;
		cout << "Area: " << length * width << endl;
}