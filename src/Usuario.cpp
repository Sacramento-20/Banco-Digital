#include "Usuario.hpp"

// CONSTRUTOR
Usuario::Usuario(){
}

// FUNÇÃO RESPONSÁVEL POR RETORNAR TODAS OS ATRIBUTOS DOS USUÁRIO.
void Usuario::exibirUsuario(){
  std::cout << "NOME: " << getNome() << "\n";
  std::cout << "CPF: " << getCPF() << "\n";
  std::cout << "EMAIL: " << getEmail() << "\n";
  std::cout << "TELEFONE: " << getTelefone() << "\n";
  std::cout << std::fixed << std::setprecision(2);
  std::cout << "RENDA: R$ " << getRenda() << "\n";
  std::cout << "SENHA: " << getsenhaEmail() << "\n";
}

// DESTRUTOR
Usuario::~Usuario(){
}

