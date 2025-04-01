#include <iostream>
#include "pessoa.h"

using namespace std;

int main()
{
    Pessoa hugo;
    Pessoa obj2("Joao", 50);

    obj2.print();

    cout << endl << "Constructed =" << hugo.toString() << endl;

    hugo.setNome("Hugo Marcondes");
    hugo.setIdade(45);
    hugo.print();

    cout << "Idade = " << hugo.getIdade() << endl;

    cout << endl << "Hello " << hugo.toString() << endl;

    return 0;
}
