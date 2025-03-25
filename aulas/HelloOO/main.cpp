#include <iostream>
#include <string>

using namespace std;

class Pessoa {
public:
    string nome;
    int idade;

    void print();
    string toString();
};

void Pessoa::print(){
    cout << nome << "(" << idade << ")";
}

string Pessoa::toString(){
    return nome + " (" + to_string(idade) + ")";
}

int main()
{
    Pessoa hugo;

    hugo.nome = "Hugo Marcondes";
    hugo.idade = 45;

    hugo.print();

    cout << "Hello " << hugo.toString() << endl;

    return 0;
}
