#include "shape.h"

Shape::Shape() {
    // Constructor implementation
    cout << "(" << this << ") Shape constructor called" << endl;
}

double  Shape::area() {
    // Default area implementation
    cout << "(" << this << ") Shape::area()" << endl;
    return 0.0; // Default area for a generic shape
}

void Shape::info() {
    // Default info implementation
    cout << "(" << this << ") Shape::info()" << endl;
    cout << "This is a generic shape." << endl;
}
