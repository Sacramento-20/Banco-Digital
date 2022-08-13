#include "Banco.hpp"
#include "Usuario.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
#include <iomanip>
#include <unistd.h>

std::string geradorNumeroConta(Banco& banco);
std::string validadorNumero();