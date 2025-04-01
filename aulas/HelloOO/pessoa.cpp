#include "pessoa.h"
#include <string>
#include <iostream>

using namespace std;

Pessoa::Pessoa()
{
    this->nome = "Nome desconhecido";
    this->idade = 0;
}

Pessoa::Pessoa(string nome) {
    this->nome = nome;
    this->idade = 0;
}

Pessoa::Pessoa(string nome, int idade)
{
    this->nome = nome;
    this->idade = idade;
}

void Pessoa::setIdade(int idade) {
    if(idade > this->idade){
        this->idade = idade;
    }
}

void Pessoa::print(){
    cout << nome << "(" << idade << ")";
}

string Pessoa::toString(){
    return nome + " (" + to_string(idade) + ")";
}

