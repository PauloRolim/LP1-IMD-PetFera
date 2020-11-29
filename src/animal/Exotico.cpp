#include "../../include/animal/Exotico.hpp"

Exotico::Exotico(std::string pais_de_origem)
{
}

std::string 
Exotico::getPais_de_origem() const{
    return this->pais_de_origem;
}

void 
Exotico::setPais_de_origem(std::string pais_de_origem){
    std::string pais_de_origem = pais_de_origem;
}

