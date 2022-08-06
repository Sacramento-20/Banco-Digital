#ifndef USUARIO_H
#define USUARIO_H
#include "Pessoa.hpp"
#include "Endereco.hpp"
#include "Conta.hpp"


class Usuario : public Pessoa{
  private:
    Endereco endereco;
    Conta conta;
    double renda = 0;

  public:
    // construtor
    Usuario();
    // funções
    
    void setRenda(double renda);
    void cadastrarEndereco(Endereco& endereco);
    void virtual cadastrarConta(Conta& conta);
    void exibir();
    // destrutor
    // virtual ~Usuario();
};


#endif