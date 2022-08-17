#ifndef BANCO_H
#define BANCO_H
#include "Conta.hpp"

class Banco{
  private:
    // ESTRUTURA DO TIPO MAP QUE SERÁ USADA PARA ARMAZENAR OS OBJETOS DO TIPO CONTA.
    std::map <std::string, Conta> contas;
    std::map <std::string, Conta>::iterator it;
  public:
    // CONSTRUTOR 
    Banco();
    // FUNÇÃO RESPONSAVEL POR CADASTAR OS OBJETOS DO TIPO CONTA EM SEU MAP QUE FUTURAMENTE SERÁ USADO PARA IMPLEMENTAÇÃO DE UM BANCO DE DADOS.
    void cadastrarConta(std::string cpf, Conta& conta);

     // CERTIFICA QUE OS NUMEROS DE CONTAS GERADOS ALEATORIAMENTE NÃO SÃO IGUAIS ENTRE SI.
    bool comparadorContas(std::string conta);
    
    // CLASSES GERAIS QUE SERÃO RESPONSAVEIS POR FAZER O CONTROLE DE DEPOSITO E SAQUE PARA TRANFERENCIA, SACAR E DEPOSITAR.
    void deposito(std::string cpf, double valor); 
    void saque(std::string cpf, double valor);

    
    // A DIFERENÇA DESSAS 3 FUNÇÕES PARA AS DE CIMA É QUE COMO ELAS SÃO ESPECIFICAS, ELAS POSSUEM UM PREENCHIMENTO DE EXTRATO PROPRIO.
    void depositar(std::string cpf, double valor);
    void sacar(std::string cpf, double valor);
    void Transferir(std::string cpf_remetente, std::string cpf_destinatario, double valor);

    // EXIBE TODOS OS ATRIBUTOS DA CONTA, NO MOMENTO EXIBE AS SENHAS, MAS SERÁ MUDADO NA VERSÃO FINAL.
    void exibirConta(std::string cpf); 
    
    // RESPONSAVEL POR EXIBIR TODOS OS ELEMENTOS QUE ESTÁ NO MAP DE EXTRATO EM CONTA.
    void Extrato(std::string cpf);
    
    // DESTRUTOR
    ~Banco();
};

// FUNÇÃO RESPONSAVEL POR EXIBIR APENAS DOIS DIGITOS APÓS A VIRGULA. 
std::string arredonda(double valor);

// FUNÇÃO RESPONSAVEL POR RETORNAR UMA STRING COM O HORARIO ATUAL PARA FAZER UM CHAVE PARA O EXTRATO.
std::string chaveHorario();

#endif