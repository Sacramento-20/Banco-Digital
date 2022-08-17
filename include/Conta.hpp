#ifndef CONTA_H
#define CONTA_H
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
#include <iomanip>
#include <map>
#include <vector>
#include <sstream>
#include <string>
#include <ctime>

class Conta{
  private:
    std::string agencia = "0001";
    std::string digito = "5";
    double saldo = 0;
    std::string conta, senha;
  
  public:
    // MAP QUE POSSUI COMO CHAVE A DATA E A HORA PARA TODAS AS MOVIMENTAÇÕES FEITA PELO USUÁRIO
    std::map <std::string, std::string> extrato;
    
    // CONSTRUTOR
    Conta();
    
    // SETS
    void setConta(std::string conta);
    void setSaldo(double saldo);
    void setSenha(std::string senha);

    // GETS
    double getSaldo();
    std::string getAgencia();
    std::string getConta();
    std::string getDigito();
    std::string getSenha();
    
    // RESPONSAVEL POR FAZER TODAS AS VERIFICAÇÕES QUE EXIGEM SENHA NO BANCO
    bool validadorSenha(std::string senha);
    
    // EXIBE TODAS AS INFORMAÇÕES DA CONTA DO USUÁRIO
    void dadosConta();
    
    // IMPRIME ATRAVEZ DE UM FOR, TODAS AS MOVIMENTAÇÕES DO USUÁRIO
    void getExtrato();
    
    // DESTRUTOR
    virtual ~Conta();
};


#endif