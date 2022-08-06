#ifndef ENDERECO_H
#define ENDERECO_H

// #include "ExceptionEndereco.hpp"

#include <iostream>

class Endereco {
  private:
    std::string rua, complemento, bairro, cep, cidade, estado, pais;
    int numero;

  public:
    // construtor
    Endereco();
    // funções
    void setRua(std::string rua);
    void setComplemento(std::string complemento);
    void setBairro(std::string bairro);
    void setCEP(std::string cep);
    void setCidade(std::string cidade);
    void setEstado(std::string estado);
    void setPais(std::string pais);
    void setNumero(int numero);

    void exibirEndereco();
    // destrutor
    virtual ~Endereco();
};

#endif