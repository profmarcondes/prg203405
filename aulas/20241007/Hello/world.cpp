#include "world.h"
#include <iostream>

using namespace std;

World::World(string name){
    cout << "Creating obj at " << this << endl;
    _name = name;
    sayHello();
}

World::~World(){
    cout << "Destroying obj at " << this << endl;
    sayGoodbye();
}

void World::sayIt(string words) {
    cout << "(" << this << ") - ";
    cout << words << " " << _name << "!" << endl;
}

void World::setName(string value){
    if(value.size() != 0){
        _name = value;
    } else {
        cout << "Invalid name" << endl;
    }
}

