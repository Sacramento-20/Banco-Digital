#ifndef PESSOA_H
#define PESSOA_H
#include <iostream>


class Pessoa{
  private:
    std::string nome, cpf, email, senhaEmail, telefone, nacionalidade;
    double renda = 0;
  public:
  // CONSTRUTOR
    Pessoa();

  // FUNÇÕES RESPONSAVEIS POR ALTERAR O VALOR DOS ATRIBUTOS DO OBJETO. 
    void setNome(std::string nome);
    void setCPF(std::string cpf);
    void setEmail(std::string email); 
    void setSenha(std::string senha);
    void setTelefone(std::string telefone);
    void setNacionalidade(std::string nacionalidade);
    void setRenda(double renda);

  // FUNÇÕES RESPONSÁVEIS POR RETORNAR OS ATRIBUTOS.
    std::string getNome();
    std::string getCPF();
    std::string getEmail();
    std::string getsenhaEmail();
    std::string getTelefone();
    double getRenda();
    
   // DESTRUTOR 
    virtual ~Pessoa();
    
};




#endif