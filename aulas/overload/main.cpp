#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Box {
	public:
		Box(double l, double w, double h) {
			cout << "Box constructor called" << endl;
			length = l;
			width = w;
			height = h;
		}
		Box(): Box(1.0,1.0,1.0) {}

		double getVolume() const {
			return length * width * height;
		}

		double getLength() const {
			return length;
		}
		double getWidth() const {
			return width;
		}
		double getHeight() const {
			return height;
		}

		Box operator+(const Box& other) const {
			Box result;
			result.length = length + other.length;
			result.width = width + other.width;
			result.height = height + other.height;
			return result;
		}

		//friend ostream& operator<<(ostream& os, const Box& box);

	private:
		double length;
		double width;
		double height;
}; 

ostream& operator<<(ostream& os, const Box& box) {
	os << "Box(" << box.getLength();
	os << ", " << box.getWidth();
	os << ", " << box.getHeight();
	os << ") = " << box.getVolume();
	return os;
}

bool operator<(const Box& b1, const Box& b2) {
	return b1.getVolume() < b2.getVolume();
}

int main() {
	cout << "Hello, boxes!!!" << endl;

	Box box1(2.0, 3.0, 4.0);
	Box box2(1.0, 2.0, 3.0);
	Box box3;

	cout << "Volume of box1: " << box1.getVolume() << endl;
	cout << "Volume of box2: " << box2.getVolume() << endl;
	cout << "Volume of box3: " << box3.getVolume() << endl;

	cout << box1 << endl;
	cout << box2 << endl;
	cout << box3 << endl;

	box3 = box1 + box2;
	cout << "Volume of box3 after addition: " << box3 << endl;

	vector<Box> boxes;
	boxes.push_back(box3);
	boxes.push_back(box2);
	boxes.push_back(box1);

	cout << "Boxes before sorting:" << endl;
	for (auto box : boxes) {
		cout << box << endl;
	}

	sort(boxes.begin(),boxes.end());

	cout << "Boxes after sorting:" << endl;
	for (auto box : boxes) {
		cout << box << endl;
	}
	
	boxes[0] = box1 + box3;
	cout << "Volume of box2 after addition: " << box2 << endl;

	for (auto box : boxes) {
		cout << box << endl;
	}

	return 0;
}