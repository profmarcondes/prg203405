#include <iostream>

using namespace std;

#include "shape.h"
#include "rectangle.h"
#include "circle.h"

#include <vector>

int main (int argc, char* argv[]) {
	cout << "Hello shapes !" << endl;

	Shape shape;
	shape.info();
	cout << "Area of shape: " << shape.area() << endl;

	Circle circle(5);
	circle.info();
	cout << "Area of circle: " << circle.area() << endl;

	Rectangle rectangle(5, 10);
	rectangle.info();
	cout << "Area of rectangle: " << rectangle.area() << endl;

	cout << endl;
	cout << endl;
	cout << "Polymorphism example:" << endl;
	

	Shape* ptr;

	ptr = &circle;
	ptr->info();

	cout << "Changing pointer to rectangle" << endl;
	ptr = &rectangle;
	ptr->info();


	vector<Shape*> shapes;
	shapes.push_back(new Circle(3));
	shapes.push_back(new Rectangle(4, 5));
	shapes.push_back(new Circle(7));
	shapes.push_back(new Rectangle(2, 8));
	shapes.push_back(new Circle(6));

	double totalArea = 0;
	for (auto s : shapes) {
		totalArea += s->area();
		s->info();
		cout << "Area: " << s->area() << endl;
	}

	cout << "Total area of all shapes: " << totalArea << endl;
	
	return 0;
}
