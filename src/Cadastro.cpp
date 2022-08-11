#include "Cadastro.hpp"

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


void Cadastro(RepositorioUsuario& rep_u, RepositorioEndereco& rep_e){
    // objetos
  
  Usuario usuario;
  Endereco endereco;
  
  //variaveis de Usuario
  std::string nome, cpf, Email, senhaEmail, telefone, nacionalidade;
  double renda;
  //variaveis de endereço
  std::string rua, complemento, bairro, cep, cidade, estado, pais;
  int numero = 0;


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
  
  std::cout << "CEP: ";std:: cin >> cep;endereco.setCEP(cep);
  
  std::cout << "Cidade: ";std:: cin >> cidade;endereco.setCidade(cidade);
  
  std::cout << "Estado: ";std:: cin >> estado;endereco.setEstado(estado);

  std::cout << "Pais: ";std:: cin >> pais;endereco.setPais(pais);

  rep_e.cadastrarEndereco(usuario.getCPF(),endereco);
  
  // colocar os dados de conta aqui

  system("clear");
}