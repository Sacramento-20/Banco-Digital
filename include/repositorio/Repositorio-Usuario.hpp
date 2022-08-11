#ifndef REPOSITORIOUSUARIO_H
#define REPOSITORIOUSUARIO_H
#include "Usuario.hpp"
#include <map>

class RepositorioUsuario
{
private:
    std::map <std::string, Usuario> usuarios;
    std::map <std::string, Usuario>::iterator it;
public:
    RepositorioUsuario();
    void cadastrarUsuario(std::string cpf, Usuario& usuario);
    void exibirUsuario(std::string cpf);
    virtual ~RepositorioUsuario();
};



#endif