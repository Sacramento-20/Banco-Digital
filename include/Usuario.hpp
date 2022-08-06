#ifndef USUARIO_H
#define USUARIO_H
#include "Pessoa.hpp"
#include "Endereco.hpp"
#include "Conta.hpp"


class Usuario : public Pessoa{
  private:
    Endereco endereco;
    Conta conta;
    
  public:
    // construtor
    Usuario();
    // funções
    void cadastrarEndereco(Endereco& endereco);
    void virtual cadastrarConta(Conta& conta);
    void exibir();
    // destrutor
    // virtual ~Usuario();
};


#endif