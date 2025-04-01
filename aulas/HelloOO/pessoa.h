#ifndef PESSOA_H
#define PESSOA_H

#include <string>
#include <iostream>

using namespace std;

class Pessoa {
    //private:
    string nome;
    int idade;
    double altura;

public:
    Pessoa();
    Pessoa(string nome);
    Pessoa(string nome, int idade);
    void setNome(string nome){
        if(nome.size() > 0){
            this->nome = nome;
        } else {
            cout << "nome nao pode ser vazio!" << endl;
        }
    }
    void setIdade(int idade);
    int getIdade(){ return idade; }

    void print();
    string toString();
};

#endif // PESSOA_H
