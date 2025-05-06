#include <iostream>

using namespace std;

template<typename T>
class MyClass {
	T _attribute;

	public:
	void setAttribute(T param) { _attribute = param; }
	T getAttribute() { return _attribute; }
	void doSomething() { _attribute.calculate(); }
};

class Dummy {

public:
	void  calculate() { cout << "Calculating" << endl; }

};


int main (int argc, char* argv[]) {
	cout << "Hello template !" << endl;

	MyClass<double> obj;
	obj.setAttribute(5.8);
	MyClass<int> obj2;
	MyClass<string> obj3;

	cout << "obj value = " << obj.getAttribute() << endl;

	MyClass<Dummy> obj4;
	obj4.doSomething();

	return 0;
}
