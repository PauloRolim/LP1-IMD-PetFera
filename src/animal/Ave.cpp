#include "../../include/animal/Ave.hpp"

Ave::Ave(
    tamanho_da_gaiola tamanho_tipo, 
    ave_voadora voa_tipo){}

tamanho_da_gaiola 
Ave::getTamanho_tipo() const{
    return this-> tamanho_tipo;
}

ave_voadora 
Ave::getVoa_tipo() const{
    return this-> voa_tipo;
}

void 
Ave::setTamanho_da_gaiola(tamanho_da_gaiola tamanho_tipo){}

void 
Ave::setAve_voadora(ave_voadora voa_tipo){}