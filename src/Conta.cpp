#include "Conta.hpp"

// CONSTRUTOR
Conta::Conta(){}

// SETS
void Conta::setConta(std::string conta){
	this -> conta = conta;
}

void Conta::setSenha(std::string senha){
	this -> senha = senha;
}

void Conta::setSaldo(double valor){
	this -> saldo += valor;
}

// GETS

double Conta::getSaldo(){
	return this -> saldo;
}

std::string Conta::getAgencia(){
	return this -> agencia;
}

std::string Conta::getConta(){
	return this -> conta;
}

std::string Conta::getDigito(){
	return this -> digito;
}

std::string Conta::getSenha(){
	return this -> senha;
}

// RESPONSAVEL POR FAZER TODAS AS VERIFICAÇÕES QUE EXIGEM SENHA NO BANCO
bool Conta::validadorSenha(std::string senha){
	if(getSenha() == senha){
		return true;
	}
	return false;
}

// EXIBE TODAS AS INFORMAÇÕES DA CONTA DO USUÁRIO
void Conta::dadosConta(){
	std::cout << "----------------------------------- \n";
	std::cout << "--------- DADOS DA CONTA ---------- \n";
	std::cout << "----------------------------------- \n";
	std::cout << "\n";
	std::cout << "Agência: " << getAgencia() << "\n";
	std::cout << "Conta: " << getConta() << "-" << getDigito() << "\n";
	std::cout << "Senha: " << getSenha() << "\n";
	std::cout << std::fixed << std::setprecision(2);
	std::cout << "Saldo: R$ " << getSaldo() << "\n"; 
}

// IMPRIME ATRAVEZ DE UM FOR, TODAS AS MOVIMENTAÇÕES DO USUÁRIO
void Conta::getExtrato(){
	auto iter = extrato.begin();
	while (iter != extrato.end()) {
		std::cout << iter -> first << " - " << iter -> second << "\n";
		++iter;
	}
}

// DESTRUTOR
Conta::~Conta(){}
