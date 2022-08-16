#include "RepositorioEndereco.hpp"

// CONSTRUTOR
RepositorioEndereco::RepositorioEndereco(/* args */){}

// FUNÇÃO RESPONSÁVEL POR CADASTRAR OS ENDEREÇOS
void RepositorioEndereco::cadastrarEndereco(std::string cpf, Endereco& endereco){
    enderecos.insert(std::pair <std::string, Endereco> (cpf, endereco));
}

// FUNÇÃO RESPONSÁVEL POR EXIBIR TODAS AS INFORMAÇÕES DO USUÁRIO
void RepositorioEndereco::exibirEndereco(std::string cpf){
  for(it = enderecos.begin(); it != enderecos.end(); it++){
    if(it -> first == cpf){
        it -> second.exibirEndereco();
    }
  }
}

// DESTRUTOR
RepositorioEndereco::~RepositorioEndereco(){}
