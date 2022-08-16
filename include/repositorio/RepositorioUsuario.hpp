#ifndef REPOSITORIOUSUARIO_H
#define REPOSITORIOUSUARIO_H
#include "Usuario.hpp"
#include <map>

class RepositorioUsuario{
	private:
		// MAP UTILIZADO PARA ARMAZENAR O OBJETO USUARIO UTILIZANDO O CPF COMO CHAVE
		std::map <std::string, Usuario> usuarios;
		std::map <std::string, Usuario>::iterator it;
	public:
		// CONSTRUTOR
		RepositorioUsuario();
		
		// FUNÇÃO RESPONSÁVEL POR CADASTRAR OS USUÁRIOS
		void cadastrarUsuario(std::string cpf, Usuario& usuario);
		
		// FUNÇÃO RESPONSÁVEL POR EXIBIR TODAS AS INFORMAÇÕES DO USUÁRIO
		void exibirUsuario(std::string cpf);
		
		// DESTRUTOR
		virtual ~RepositorioUsuario();
};



#endif