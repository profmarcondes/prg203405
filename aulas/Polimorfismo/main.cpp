#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Shape {
    public:
        virtual double area() = 0;
};

class Rectangle: public Shape {
    public:
        Rectangle(double w, double h){
            _width = w;
            _height = h;
        }

        double area() {
            cout << "Rectangle::area() called!" << endl;
            return _width * _height;
        }

    private:
        double _width;
        double _height;
};

class Circle: public Shape {
    public:
        Circle(double r){
            _radius = r;
        }

        double area() {
            cout << "Circle::area() called!" << endl;
            return _radius * _radius * 3.14159;
        }

    private:
        double _radius;
};

class EquilateralTriangle: public Shape {
    public:
        EquilateralTriangle(double s){
            _side = s;
        }

        double area() {
            cout << "EquilateralTriangle::area() called!" << endl;
            return _side * _side * 0.433013;
        }

    private:
        double _side;
};

int main(){

    cout << "Hello Shapes!" << endl;

    double total_area;

    vector<Shape *> canvas;

    canvas.push_back(new Rectangle(2.0,5.0));
    canvas.push_back(new Circle(3.5));
    canvas.push_back(new Rectangle(2.0,5.0));
    canvas.push_back(new EquilateralTriangle(5.0));
    canvas.push_back(new Rectangle(1.0,6.5));
    canvas.push_back(new EquilateralTriangle(10.75));
    canvas.push_back(new Rectangle(2.0,5.0));
    canvas.push_back(new Circle(2.0));

    for(auto shp_ptr: canvas){
        total_area += shp_ptr->area();
    }

    cout << "Total area = " << total_area << endl;

}
