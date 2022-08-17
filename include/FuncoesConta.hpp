#include "Banco.hpp"
#include "Usuario.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
#include <iomanip>
#include <unistd.h>

// O ALGORITMO IRÁ GERAR UMA SÉRIE DE NÚMEROS ALEATORIO ENTRE 10000000 E 99999999. ESSE VALOR SERÁ O NÚMERO DA CONTA DO CLIENTE.
std::string geradorNumeroConta(Banco& banco);
// RESPONSÁVEL POR VALIDAR O LIMITE DE CARACTERES QUE UMA NÚMERO DE TELEFONE DEVE TER.
std::string validadorNumero();
// VALIDA QUE TODA A ENTRADA PERTENCENTE AO NÚMERO SERÁ UM ATRIBUTO NUMÉRICO
int validadorNumeroEndereco();