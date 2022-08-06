#include "Pessoa.hpp"

Pessoa::Pessoa(){}

void Pessoa::setNome(std::string nome){
    this -> nome = nome; 
}

void Pessoa::setEmail(std::string email){
    this -> Email = email; 
}

void Pessoa::setSenha(std::string senha){
    this -> senhaEmail = senha; 
}

std::string Pessoa::getEmail(){
    return this -> Email;
}

std::string Pessoa::getNome(){
    return this -> nome;
}

std::string Pessoa::getsenhaEmail(){
    return this -> senhaEmail;
}

Pessoa::~Pessoa(){
}