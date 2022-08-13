#include "FuncoesConta.hpp"

// atraves de um algoritmo que gera numeros aleatorios com base na hora, é gerado um numero entre 10000000 e 99999999.
std::string geradorNumeroConta(Banco& banco){
  int contaNumerico;
  std::string contaString;

  srand((unsigned)time(0)); //para gerar números aleatórios reais.
  int maior = 99999999; 
  int menor = 10000000; 
  contaNumerico = rand()%(maior-menor+1) + menor;
  contaString = std::to_string(contaNumerico);
  
  return contaString;
}

std::string validadorNumero(){
  bool modificador = false;
  std::string telefone;
  
  while(modificador != true){
    std::cout << "Telefone: ";
    std:: cin >> telefone;
    if (telefone.length() < 11){
      std::cout << "Número inválido !\n";
      sleep(0.5);
    }
    else{
      modificador = true;
    }
  }
  return telefone;
}

