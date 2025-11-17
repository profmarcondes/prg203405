//============================================================================
// Name        : Polimorphism.cpp
// Author      : Hugo Marcondes
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <vector>
#include <iostream>
using namespace std;

// Base class
class Shape {
   public:
		virtual double area() = 0;
		virtual double cost() = 0;
		virtual ~Shape(){ }
};

class PaintCost{
	public:
		PaintCost(int cost): cost_per_m2(cost) {
			cout << "(" << this << ") PaintCost constructed!" << endl;
		}

		int getCost(int area){
			return area * cost_per_m2;
		}

	protected:
		void updateCost(int cost){
			cost_per_m2 = cost;
		}

	private:
		int cost_per_m2;
};

// Derived class
class Rectangle: public Shape
{
   public:
	  Rectangle(double w, double h): _width(w), _height(h) {
		  cout << "(" << this << ") Rectangle(" ;
		  cout << _width << "," << _height << ") Constructed! " << endl;
	  }

	  double area() override {
		  cout << this << " Rectangle::area() called!" << endl;
		  return (this->_width * this->_height);
      }

	  double cost() override {
		  cout << this << " Rectangle::cost() called!" << endl;
		  return area() * 70;
	  }

	  double width() { return _width; }
	  double height() { return _height; }

   private:
	  double _width;
	  double _height;

};

class Circle: public Shape
{
   public:
	  Circle(double r): _radius(r) {
		  cout << "(" << this << ") Circle(" ;
		  cout << _radius << ") Constructed! " << endl;
	  }
	  double area() override {
		  cout << this << " Circle::area() called!" << endl;
		  return (_radius * _radius * PI);
      }
	  double cost() override {
		  cout << this << " Circle::cost() called!" << endl;
		  return area() * 70;
	  }
	  double radius() { return _radius; }

   private:
	  double _radius;
	  static const double PI;
};
const double Circle::PI = 3.14159;

class EquilateralTriangle: public Shape
{
   public:
	  EquilateralTriangle(double w): _width(w) {
		  cout << "(" << this << ") EquilateralTriangle(" ;
		  cout << _width << ") Constructed! " << endl;
	  }

	  double area() override {
		  cout << this << " EquilateralTriangle::area() called!" << endl;
		  return (_width * _width * SQRT3BY4);
      }

	  double cost()  override {
		  cout << this << " EquilateralTriangle::cost() called!" << endl;
		  return area() * 70;
	  }

   private:
	  double _width;
	  static const double SQRT3BY4;

};
const double EquilateralTriangle::SQRT3BY4 = 0.4330127;


typedef vector<Shape*> ShapeVector;

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	ShapeVector objects;

	objects.push_back(new Rectangle(10,5));
	objects.push_back(new Circle(7.5));
	objects.push_back(new Rectangle(5.46,7.89));
	objects.push_back(new EquilateralTriangle(2.5));
	objects.push_back(new Circle(15));
	objects.push_back(new Rectangle(2,4));
	objects.push_back(new EquilateralTriangle(5));

	cout << "Calculating total area of shapes" << endl;
	double totalArea = 0;
	//for(ShapeVector::iterator it = objects.begin(); it != objects.end(); it++){
	//	totalArea += static_cast<Shape *>(*it)->area();
	//
	//}
	for(auto shape: objects){
		totalArea += shape->area();
	}
	cout << "Total area = " << totalArea << endl;

	/*
	Rectangle obj1(5,7);
	Circle obj2(10);

	//Shape obj3;

	Shape * ptr;

	// Print the area of the object.
	cout << "Obj1 (Rectangle)" << endl;
	cout << obj1.area() << endl;
	cout << obj1.cost() << endl;

	cout << "Obj1 (Circle)" << endl;
	cout << obj2.area() << endl;
	cout << obj2.cost() << endl;

	ptr = &obj1;
	cout << "Calling Rectangle::area, through a Shape ptr!" << endl;
	ptr->area();
	*/

	return 0;
}
















