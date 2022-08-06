#ifndef PESSOA_H
#define PESSOA_H
#include <iostream>

class Pessoa{
  private:
    std::string nome;
    std::string Email;
    std::string senhaEmail;
    std::string telefone;
    std::string nacionalidade;
    double renda = 0;
  public:
   // construtor
    Pessoa();
   // funções
    void setNome(std::string nome);
    void setEmail(std::string email); 
    void setSenha(std::string senha);
    void setTelefone(std::string telefone);
    void setNacionalidade(std::string nacionalidade);
    void setRenda(double renda);

    std::string getNome();
    std::string getEmail();
    std::string getsenhaEmail();
    std::string getTelefone();
    double getRenda();
    
   // destrutor 
    virtual ~Pessoa();
};




#endif