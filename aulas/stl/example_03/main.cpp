#include <string.h>
#include <iostream>
#include <map>
#include <utility>

using namespace std;
int main() {
    map<int, string> Estudante;
    map<int,string>::iterator ii;
    Estudante[5234] = "Joao da Silva";
    Estudante[3374] = "Carlos Pereira";
    Estudante[1923] = "Bruna da Silva";
    Estudante[7582] = "Jonas Macedo";
    Estudante[5328] = "Vitor Machado";

    cout << "Estudante[3374]=" << Estudante[3374] << endl << endl;
    cout << "Map size: " << Estudante.size() << endl;

    for(ii=Estudante.begin(); ii!=Estudante.end(); ++ii) {
        cout << (*ii).first << ": " << (*ii).second << endl;
    }
}