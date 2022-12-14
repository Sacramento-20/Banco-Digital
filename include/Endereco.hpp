#ifndef ENDERECO_H
#define ENDERECO_H
#include <iostream>
// #include "ExceptionEndereco.hpp"

class Endereco {
  private:
    std::string rua, complemento, bairro, cep, cidade, estado, pais;
    int numero;

  public:
    // CONSTRUTOR
    Endereco();

    // FUNÇÕES
    void setRua(std::string rua);
    void setComplemento(std::string complemento);
    void setBairro(std::string bairro);
    void setCEP(std::string cep);
    void setCidade(std::string cidade);
    void setEstado(std::string estado);
    void setPais(std::string pais);
    void setNumero(int numero);
    
    // FUNÇÃO RESPONSÁVEL POR EXIBIR TODAS OS ATRIBUTOS DO ENDEREÇO.
    void exibirEndereco();
    
    // DESTRUTOR
    virtual ~Endereco();
};

#endif