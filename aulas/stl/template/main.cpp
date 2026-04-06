#include <iostream>

using namespace std;

template<typename PARAM, int COUNT = 10>
class MyClass {
	int value[COUNT];
	PARAM _attribute;

	public:
	void setAttribute(PARAM param) { _attribute = param; }
	PARAM getAttribute() { return _attribute; }
	void doSomething() { _attribute.calculate(); }
	void count() { cout << COUNT << endl; }
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
	obj2.setAttribute(5.9);
	cout << "Objeto2 = " << obj2.getAttribute() << endl;
	MyClass<string> obj3;
	//obj3.setAttribute(10);
	//obj3.doSomething();


	cout << "obj value = " << obj.getAttribute() << endl;

	MyClass<Dummy,5> obj4;
	obj4.doSomething();
	obj4.count();

	return 0;
}
