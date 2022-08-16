#include "RepositorioEndereco.hpp"

RepositorioEndereco::RepositorioEndereco(/* args */){}

void RepositorioEndereco::cadastrarEndereco(std::string cpf, Endereco& endereco){
    enderecos.insert(std::pair <std::string, Endereco> (cpf, endereco));
}

void RepositorioEndereco::exibirEndereco(std::string cpf){
  for(it = enderecos.begin(); it != enderecos.end(); it++){
    if(it -> first == cpf){
        it -> second.exibirEndereco();
    }
  }
}

RepositorioEndereco::~RepositorioEndereco(){}
