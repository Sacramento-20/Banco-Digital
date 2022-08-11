#ifndef USUARIO_H
#define USUARIO_H
#include "Pessoa.hpp"
#include "Endereco.hpp"
#include <iomanip>

class Usuario : public Pessoa{
  private:

  public:
    // construtor
    Usuario();
    // funções
    void exibirUsuario();
    // destrutor
    virtual ~Usuario();
};


#endif