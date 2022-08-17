#include "FuncoesConta.hpp"

// O ALGORITMO IRÁ GERAR UMA SÉRIE DE NÚMEROS ALEATORIO ENTRE 10000000 E 99999999. ESSE VALOR SERÁ O NÚMERO DA CONTA DO CLIENTE.
std::string geradorNumeroConta(Banco& banco){
  int contaNumerico;
  std::string contaString;
  
  // SE BASEIA NO HORARIO PARA CRIAR UMA SEED PARA A GERAÇÃO DO NÚMERO
  srand((unsigned)time(0));
  int maior = 99999999; 
  int menor = 10000000; 
  contaNumerico = rand()%(maior-menor+1) + menor;
  contaString = std::to_string(contaNumerico);
  
  return contaString;
}

// RESPONSÁVEL POR VALIDAR O LIMITE DE CARACTERES QUE UMA NÚMERO DE TELEFONE DEVE TER.
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

// VALIDA QUE TODA A ENTRADA PERTENCENTE AO NÚMERO SERÁ UM ATRIBUTO NUMÉRICO
int validadorNumeroEndereco(){
  bool modificador = false;
  int numero;
  while(modificador != true){
    std::cout << "Número: ";
    std:: cin >> numero;
    if (!std::cin.fail()){
      return numero;
      // modificador = true;
    }
    // std::cin.clear();
    std::cout << "valor não corresponde a um tipo númerico. \n";

  }
  return numero;
}

