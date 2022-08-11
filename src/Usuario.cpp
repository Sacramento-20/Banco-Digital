#include "Usuario.hpp"

Usuario::Usuario(){
}

void Usuario::exibirUsuario(){
  std::cout << "Nome: " << getNome() << "\n";
  std::cout << "CPF: " << getCPF() << "\n";
  std::cout << "Email: " << getEmail() << "\n";
  std::cout << "Telefone: " << getTelefone() << "\n";
  std::cout << std::fixed << std::setprecision(2);
  std::cout << "Renda: R$ " << getRenda() << "\n";
  std::cout << "Senha: " << getsenhaEmail() << "\n";
}

Usuario::~Usuario(){
}

