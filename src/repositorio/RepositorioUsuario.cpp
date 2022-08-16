#include "RepositorioUsuario.hpp"

// CONSTRUTOR
RepositorioUsuario::RepositorioUsuario(/* args */){}

// FUNÇÃO RESPONSÁVEL POR CADASTRAR OS USUÁRIOS
void RepositorioUsuario::cadastrarUsuario(std::string cpf, Usuario& usuario){
    usuarios.insert(std::pair <std::string, Usuario> (cpf, usuario));
}

// FUNÇÃO RESPONSÁVEL POR EXIBIR TODAS AS INFORMAÇÕES DO USUÁRIO
void RepositorioUsuario::exibirUsuario(std::string cpf){
  for(it = usuarios.begin(); it != usuarios.end(); it++){
    if(it -> first == cpf){
        it -> second.exibirUsuario();
    }
  }
}

// DESTRUTOR
RepositorioUsuario::~RepositorioUsuario(){}