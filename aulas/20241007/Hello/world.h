#ifndef WORLD_H
#define WORLD_H

#include <string>

using namespace std;

class World {
private:
    string _name;
    string _owner;

public:
    World(string name);
    ~World();
    void setName(string value);
    string getName(){
        return this->_name;
    };
    void sayHello() { sayIt("Hello"); }
    void sayHi() { sayIt("Hi"); }
    void sayGoodbye() { sayIt("Goodbye"); }
    void setOwner(string value) { _owner = value; }
    string getOwner() { return _owner; }

private:
    void sayIt(string words);

};

#endif // WORLD_H
