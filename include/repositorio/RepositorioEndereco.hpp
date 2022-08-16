#ifndef REPOSITORIOENDERECO_H
#define REPOSITORIOENDERECO_H
#include "Endereco.hpp"
#include <map>
class RepositorioEndereco
{
  private:
    std::map <std::string, Endereco> enderecos;
    std::map <std::string, Endereco>::iterator it;
  public:
    RepositorioEndereco(/* args */);
    void cadastrarEndereco(std::string cpf, Endereco& endereco);
    void exibirEndereco(std::string cpf);
    virtual ~RepositorioEndereco();
};


#endif