#include "Banco.hpp"

// CONSTRUTOR
Banco::Banco(){}

// FUNÇÃO RESPONSAVEL POR CADASTAR OS OBJETOS DO TIPO CONTA EM SEU MAP QUE FUTURAMENTE SERÁ USADO PARA IMPLEMENTAÇÃO DE UM BANCO DE DADOS.
void Banco::cadastrarConta(std::string cpf, Conta& conta){
  contas.insert(std::pair <std::string, Conta> (cpf, conta));
}

// FUNÇÃO CHAMADA NO MOMENTO QUE ESTÁ SENDO GERADO UMA CONTA, ELA É RESPONSÁVEL POR PERCORRER O MAP E RETORNAR FALSO CASO TENHA UMA CONTA DE MESMO NUMERO
// E RETORNA TRUE, CASO NÃO HOUVER NENHUMA CONTA IGUAL A QUE FOI GERADA.  
bool Banco::comparadorContas(std::string conta){
  for(it = contas.begin(); it != contas.end(); it++){
    if(it -> second.getConta() == conta){
      return false;
    }
  }
  return true;
}

// CLASSE RESPONSAVEL POR DEPOSITAR O VALOR NA CONTA
void Banco::deposito(std::string cpf, double valor){
  for(it = contas.begin(); it != contas.end(); it++){
    if(it -> first == cpf){
      // operando na conta
      if(valor <= 0){
        std::cout << "Valor insuficiente! \n";
      }
      else{
        it -> second.setSaldo(valor);
      }
    }
  }
}


// CLASSE RESPONSAVEL POR SACAR O VALOR DA CONTA
void Banco::saque(std::string cpf, double valor){
  std::string senhaConta;
  bool validador = true;

  for(it = contas.begin(); it != contas.end(); it++){
    if(it -> first == cpf){
      std::cout << "informe a senha da conta: ";
      while (validador){
        std::cin >> senhaConta;
        if(it -> second.validadorSenha(senhaConta) == true){
          if(it -> second.getSaldo() < valor){
          // retornar um erro
            std::cout << "Saldo insuficiente ! \n";
            validador = false;
            break;
          }
          it -> second.setSaldo(-valor);

          validador = false;
        }
        else{
          std::cout << "Senha incorreta ! \n";
          std::cout << "Informa a senha novamente: ";
        }
      }
    }
  }
}

/* para evitar uma repetição desnecessaria de codigo, foi feito implementada a seguinte solução:
  foi criado duas funções base de saque e deposito e essa funções são usada em outras para decumentarem no extrato o que refere a cada deposito 
  e a cada saque.
*/ 
void Banco::depositar(std::string cpf, double valor){

  // STRING SERÁ UTILIZADA PARA SER CONCATENADO EM UMA STRING PARA SER INCORPORADO AO EXTRATO.
  std::string valorString = arredonda(valor);
  
  deposito(cpf, valor);

  // ESTRUTURA QUE ENCONTRA A CONTA E ATRIBUI A MOVIMENTAÇÃO AO EXTRATO DELA
  for(it = contas.begin(); it != contas.end(); it++){
    if(it -> first == cpf){
      it -> second.extrato.insert(std::pair <std::string, std::string> (chaveHorario(),"Deposito: R$ " + valorString + "\n"));
    }
  }
}

void Banco::sacar(std::string cpf, double valor){

  // STRING SERÁ UTILIZADA PARA SER CONCATENADO EM UMA STRING PARA SER INCORPORADO AO EXTRATO.
  std::string valorString = arredonda(valor);
  
  saque(cpf, valor);

  // ESTRUTURA QUE ENCONTRA A CONTA E ATRIBUI A MOVIMENTAÇÃO AO EXTRATO DELA
  for(it = contas.begin(); it != contas.end(); it++){
    if(it -> first == cpf){
      it -> second.extrato.insert(std::pair <std::string, std::string> (chaveHorario(),"Saque: R$ " + valorString + "\n"));
    }
  }
}

// CLASSE RESPONSAVEL POR TRANSFERIR O VALOR DE UMA CONTA PARA OUTRA.
void Banco::Transferir(std::string cpf_remetente, std::string cpf_destinatario, double valor){
  
  std::string valorString = arredonda(valor);

  saque(cpf_remetente, valor);
  deposito(cpf_destinatario, valor);

  // ESTRUTURA QUE ENCONTRA A CONTA E ATRIBUI A MOVIMENTAÇÃO AO EXTRATO DELA
  for(it = contas.begin(); it != contas.end(); it++){
    
    if(it -> first == cpf_remetente){
      it -> second.extrato.insert(std::pair <std::string, std::string> (chaveHorario(),"Tranferencia enviada: R$ " + valorString + "\n"));
    }

    if(it -> first == cpf_destinatario){
      it -> second.extrato.insert(std::pair <std::string, std::string> (chaveHorario(),"Tranferencia recebida: R$ " + valorString + "\n"));
    }

  }
}

// EXIBIR TODOS OS DADOS DA CONTA DO USUÁRIO
void Banco::exibirConta(std::string cpf){
  for(it = contas.begin(); it != contas.end(); it++){
    if(it -> first == cpf){
    // operando na conta
      it -> second.dadosConta();
    }
  }
}

// FUNÇÃO CHAMA A FUNÇÃO GETEXTRATO DE CONTA PARA EXIBIR TODAS AS MOVIMENTAÇÕES DA CONTA
void Banco::Extrato(std::string cpf){
  std::cout << "----------------------------------- \n";
  std::cout << "------------- EXTRATO ------------- \n";
  std::cout << "----------------------------------- \n";
  std::cout << "\n";
	// Em banco o programa irá iterar entre as contas ate encontrar a conta correta e assim chamar a função que exibe todos os historicos do extrato.
  for(it = contas.begin(); it != contas.end(); it++){
    if(it -> first == cpf){
    // operando na conta
      it -> second.getExtrato();
    }
  }

}

// DESTRUTOR
Banco::~Banco(){}

// FUNÇÃO RESPONSÁVEL POR ARREDONDAR OS VALORES PARA DUAS CASAS DECIMAIS 
std::string arredonda(double valor){
  std::stringstream stream;
  stream << std::fixed << std::setprecision(2) << valor;
  return stream.str();
}

// FUNÇÃO QUE RETORNA A DATA E A HORA, UTILIZADO ATUALMENTE COMO CHAVE PARA PARA O MAP COM AS MOVIMENTAÇÕES
std::string chaveHorario(){
	
  time_t t = time(nullptr);
  tm *ltm = localtime(&t);
  
  int dia = ltm->tm_mday;
  int mes = 1 + ltm->tm_mon;
  int ano = 1900 + ltm->tm_year;
  int hora = ltm->tm_hour;
  int minuto = ltm->tm_min;
  int segundo = ltm->tm_sec;
  
  std::string diaS = std::to_string(dia);
  std::string mesS = std::to_string(mes);
  std::string anoS = std::to_string(ano);
  std::string horaS = std::to_string(hora);
  std::string minutoS = std::to_string(minuto);
  std::string segundoS = std::to_string(segundo);

  
  if (dia >= 0 && dia <= 9){
    diaS = "0" + diaS;
  }
  if (mes >= 0 && mes <= 9){
    mesS = "0" + mesS;
  }
  if (hora >= 0 && hora <= 9){
    horaS = "0" + horaS;
  }
  if (minuto >= 0 && minuto <= 9){
    minutoS = "0" + minutoS;
  }
  if (segundo >= 0 && segundo <= 9){
    segundoS = "0" + segundoS;
  }

  std::string data = diaS + "/" + mesS + "/" + anoS + " " + horaS + ":" + minutoS + ":" + segundoS;

  return data;
}