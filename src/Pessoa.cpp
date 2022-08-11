#include "Pessoa.hpp"

Pessoa::Pessoa(){}

// sets
void Pessoa::setNome(std::string nome){
    this -> nome = nome; 
}

void Pessoa::setCPF(std::string cpf){
    this -> cpf = cpf;
}

void Pessoa::setEmail(std::string email){
    this -> Email = email; 
}

void Pessoa::setSenha(std::string senha){
    this -> senhaEmail = senha; 
}

void Pessoa::setTelefone(std::string telefone){
  this -> telefone = telefone;
}

void Pessoa::setNacionalidade(std::string nacionalidade){
  this -> nacionalidade = nacionalidade;
}

void Pessoa::setRenda(double renda){
  this -> renda = renda;
}

// gets


std::string Pessoa::getNome(){
    return this -> nome;
}

std::string Pessoa::getCPF(){
    return this -> cpf;
}

std::string Pessoa::getEmail(){
    return this -> Email;
}

std::string Pessoa::getsenhaEmail(){
    return this -> senhaEmail;
}

std::string Pessoa::getTelefone(){
    return this -> telefone;
}

double Pessoa::getRenda(){
    return this -> renda;
}

Pessoa::~Pessoa(){
}