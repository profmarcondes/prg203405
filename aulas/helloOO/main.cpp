#include <iostream>
#include <string>

namespace Hugo {
	int variavel = 5;

	namespace Config {
		int variavel = 15;
	};

};

namespace ifsc {
	int variavel = 10;
};

using namespace std;
using namespace Hugo;

class World {

private:
	std::string _name;
	void sayIt(string value);

public:
	World();
	World(string value);

	void name(string value) {
		_name = value;
	}
	string name() {
		return _name;
	}
	void sayHello();
	void sayGoodbye();
	void sayHi();

};

World::World(){
	_name = "no_name";
}

World::World(string value){
	_name = value;
}

void World::sayIt(string value) {
	cout << value << " " << _name << " !" << endl;
}

void World::sayHello() {
		sayIt("Hello");
}
void World::sayGoodbye() {
		sayIt("Goodbye");
}
void World::sayHi() {
		sayIt("Hi");
}


int main (int argc, char* argv[]) {

	cout << "Primeiro exemplo de código C++" << endl;

	World object;
	World obj1("mundo01");
	World obj2("mundo02"); 

	//object.setName("Hugo");

	object.name("Hugo");
	cout << object.name();

	object.sayHello();
	obj1.sayHello();
	obj2.sayHello();



	string fname = "Hugo";
	string lname = "Marcondes";

	string fullName = fname + " " + lname;

	cout << "Full name = " << fullName << endl;

	std::cout << "O valor da variável é = " << Hugo::Config::variavel << std::endl;

	return 0;
}
