#ifndef PESSOA_H
#define PESSOA_H
#include <iostream>

class Pessoa{
  private:
    std::string nome;
    std::string Email;
    std::string senhaEmail;
  public:
   // construtor
    Pessoa();
   // funções
    void setNome(std::string nome);
    void setEmail(std::string email); 
    void setSenha(std::string senha);

    std::string getNome();
    std::string getEmail();
    std::string getsenhaEmail();
    
   // destrutor 
    virtual ~Pessoa();
};




#endif