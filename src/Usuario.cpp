#include "Usuario.hpp"

Usuario::Usuario(){
}

void Usuario::setRenda(double renda){
  this -> renda = renda;
}


void Usuario::cadastrarEndereco(Endereco& endereco){
    this -> endereco = endereco;
}

void Usuario::exibir(){
  std::cout << "nome: " << getNome() << "\n";
  std::cout << "Email: " << getEmail() << "\n";
  std::cout << "telefone: " << getTelefone() << "\n";
  std::cout << "renda: " << this -> renda << "\n";
  std::cout << "senha: " << getsenhaEmail() << "\n";
  std::cout << "------------------------------------------------------" << "\n";
  // endereco.exibirEndereco();
}

Usuario::~Usuario(){
}

