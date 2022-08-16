#include "Cadastro.hpp"
#include "FuncoesConta.hpp"


void Cadastro(RepositorioUsuario& rep_u, RepositorioEndereco& rep_e, Banco& banco){
    // objetos
  
  Usuario usuario;
  Endereco endereco;
  Conta conta;
  
  //variaveis de Usuario
  std::string nome, cpf, Email, senhaEmail, telefone, nacionalidade;
  double renda;
  //variaveis de endereço
  std::string rua, complemento, bairro, cep, cidade, estado, pais;
  int numero = 0;
  // variaveis de conta
  std::string numeroConta, senhaConta;
  bool validador = true;

  std::cout << " --------------------------------------\n";
  std::cout << " --------- Cadastro de Usuário --------\n";
  std::cout << " --------------------------------------\n";

  std::cout << "DADOS PESSOAIS: \n";
 
  std::cout << "Nome: ";std::cin >> nome; usuario.setNome(nome);

  std::cout << "CPF: "; std::cin >> cpf; usuario.setCPF(cpf);

  std::cout << "E-mail: ";std::cin >> Email;usuario.setEmail(Email);

  std::cout << "Senha: ";std::cin >> senhaEmail;usuario.setSenha(senhaEmail);
  
  usuario.setTelefone(validadorNumero()); 
  
  std::cout << "Nacionalidade: ";std::cin >> nacionalidade;usuario.setNacionalidade(nacionalidade);

  std::cout << "Informe a sua renda: "; std::cin >> renda;usuario.setRenda(renda);

  rep_u.cadastrarUsuario(usuario.getCPF(), usuario);

  system("clear");

  std::cout << " --------------------------------------\n";
  std::cout << " --------- Cadastro de Usuário --------\n";
  std::cout << " --------------------------------------\n";

  std::cout << "ENDEREÇO: \n";

  std::cout << "Rua: "; std:: cin >> rua; endereco.setRua(rua);

  std::cout << "Complemento: ";std:: cin >> complemento;endereco.setComplemento(complemento);

  std::cout << "Bairro: ";std:: cin >> bairro;endereco.setBairro(bairro);

  std::cout << "Número: ";std:: cin >> numero;endereco.setNumero(numero); 
  // endereco.setNumero(validadorNumeroEndereco());

  std::cout << "CEP: ";std:: cin >> cep;endereco.setCEP(cep);
  
  std::cout << "Cidade: ";std:: cin >> cidade;endereco.setCidade(cidade);
  
  std::cout << "Estado: ";std:: cin >> estado;endereco.setEstado(estado);

  std::cout << "Pais: ";std:: cin >> pais;endereco.setPais(pais);

  rep_e.cadastrarEndereco(usuario.getCPF(),endereco);
  
  // colocar os dados de conta aqui
  std::cout << " --------------------------------------\n";
  std::cout << " ---------- Cadastro de Conta ---------\n";
  std::cout << " --------------------------------------\n";
  
  // cadastrando a senha informada pelo usuario
  std::cout << "Informe a senha da sua conta: "; 
  while(validador){
    std::cin >> senhaConta; 
    if(senhaConta.length() < 4 && senhaConta.length() > 8){
      std::cout << "Senha deve conter entre 4 e 8 caracteres.";
      sleep(2);
      system("clear");
      std::cout << "informe uma nova senha: ";
    }
    else{
      conta.setSenha(senhaConta);
      validador = false;
    }
  }
  
  // gerando um numero de conta

  validador = true;
  while(validador){
    numeroConta = geradorNumeroConta(banco);
    // se retornar falso é porque tem, se retornar true é porque não tem
    if(banco.comparadorContas(numeroConta) == true){
      conta.setConta(numeroConta);
      validador = false;
    }
  }

  banco.cadastrarConta(usuario.getCPF(), conta);

  system("clear");
}