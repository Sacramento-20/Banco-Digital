#ifndef REPOSITORIOENDERECO_H
#define REPOSITORIOENDERECO_H
#include "Endereco.hpp"
#include <map>
class RepositorioEndereco
{
  private:
    // MAP UTILIZADO PARA ARMAZENAR O OBJETO ENDEREÇO UTILIZANDO O CPF COMO CHAVE
    std::map <std::string, Endereco> enderecos;
    std::map <std::string, Endereco>::iterator it;
  public:
    // CONSTRUTOR
    RepositorioEndereco();

    // FUNÇÃO RESPONSÁVEL POR CADASTRAR OS ENDEREÇOS
    void cadastrarEndereco(std::string cpf, Endereco& endereco);
    
    // FUNÇÃO RESPONSÁVEL POR EXIBIR TODAS AS INFORMAÇÕES DO USUÁRIO
    void exibirEndereco(std::string cpf);
    
    // DESTRUTOR
    virtual ~RepositorioEndereco();
};


#endif