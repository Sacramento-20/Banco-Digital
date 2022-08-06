#include "Endereco.hpp"

Endereco::Endereco(){

}
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

void Endereco::exibirEndereco(){
  std::cout << "rua: " << this -> rua << "\n";
  std::cout << "complemento: " << this -> complemento << "\n";
  std::cout << "bairro: " << this -> bairro << "\n";
  std::cout << "cep: " << this -> cep << "\n";
  std::cout << "cidade: " << this -> cidade << "\n";
  std::cout << "estado: " << this -> estado << "\n";
  std::cout << "pais: " << this -> pais << "\n";
  std::cout << "numero: " << this -> numero << "\n";
}

Endereco::~Endereco(){
}