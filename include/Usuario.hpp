#ifndef USUARIO_H
#define USUARIO_H
#include "Pessoa.hpp"
#include "Endereco.hpp"
#include <iomanip>

// CLASSE USUÁRIO HERDANDO OS ATRIBUTOS E FUNÇÕES DA CLASSE PESSOA.
class Usuario : public Pessoa{
  private:

  public:
    // CONSTRUTOR
    Usuario();

    // FUNÇÃO RESPONSÁVEL POR EXIBIR TODAS AS INFOMAÇÕES DO USUÁRIO.
    void exibirUsuario();
    
    // DESTRUTOR
    virtual ~Usuario();
};


#endif