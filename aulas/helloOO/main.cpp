#include <iostream>
#include <string>

namespace Hugo {
	int variavel = 5;
};

namespace ifsc {
	int variavel = 10;
}

using namespace std;
using namespace Hugo;

class World {

public:
	void sayHello() {
		cout << "Hello helloOO !" << endl;
	}

};

int main (int argc, char* argv[]) {


	World object;

	object.sayHello();


	std::cout << "O valor da variável é = " << variavel << std::endl;
	return 0;
}
