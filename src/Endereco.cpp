#include "Endereco.hpp"

// CONSTRUTOR
Endereco::Endereco(){}

// SETS
void Endereco::setRua(std::string rua){
  this -> rua = rua;
}

void Endereco::setComplemento(std::string complemento){
  this -> complemento = complemento;
}

void Endereco::setBairro(std::string bairro){
  this -> bairro = bairro;
}

void Endereco::setCEP(std::string cep){
  this -> cep = cep;
}

void Endereco::setCidade(std::string cidade){
  this -> cidade = cidade;
}

void Endereco::setEstado(std::string estado){
  this -> estado = estado;
}

void Endereco::setPais(std::string pais){
  this -> pais = pais;
}

void Endereco::setNumero(int numero){
  this -> numero = numero;
}

// EXIBE TODAS AS INFORMAÇÕES DE ENDEREÇO.
void Endereco::exibirEndereco(){
  std::cout << "RUA: " << this -> rua << "\n";
  std::cout << "COMPLEMENTO: " << this -> complemento << "\n";
  std::cout << "BAIRRO: " << this -> bairro << "\n";
  std::cout << "CEP: " << this -> cep << "\n";
  std::cout << "CIDADE: " << this -> cidade << "\n";
  std::cout << "ESTADO: " << this -> estado << "\n";
  std::cout << "PAIS: " << this -> pais << "\n";
  std::cout << "NÚMERO: " << this -> numero << "\n";
}

Endereco::~Endereco(){}