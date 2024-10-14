#include "world.h"
#include <iostream>

using namespace std;

World meu_mundo("World");

void functionHello(){
    cout << "Entering functionHello()" << endl;
    World obj("FunctionHello");
    obj.sayHi();
    cout << "Leaving functionHello()" << endl;
}


int main() {
    cout << "Entering main" << endl;
    World objeto("MainWorld");
    objeto.sayHi();
    cout << "obj name =" << objeto.getName() << endl;

    cout << "Calling functionHello()" << endl;
    functionHello();
    cout << "Returning functionHello()" << endl;

    World * ptr_obj;
    ptr_obj = new World("WorldPtr");
    ptr_obj->sayHi();
    delete ptr_obj;

    /*
    objeto.setName("MarioWorld");
    objeto.sayHi();

    objeto.setName("Mordor");
    objeto.sayHi();

    objeto.setName("");
    objeto.sayHi();
    */

    cout << "Leaving main" << endl;
    
    return 0;
}
