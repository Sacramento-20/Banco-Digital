#include "RepositorioUsuario.hpp"

RepositorioUsuario::RepositorioUsuario(/* args */){}

void RepositorioUsuario::cadastrarUsuario(std::string cpf, Usuario& usuario){
    usuarios.insert(std::pair <std::string, Usuario> (cpf, usuario));
}

void RepositorioUsuario::exibirUsuario(std::string cpf){
  for(it = usuarios.begin(); it != usuarios.end(); it++){
    if(it -> first == cpf){
        it -> second.exibirUsuario();
    }
  }
}
RepositorioUsuario::~RepositorioUsuario(){}