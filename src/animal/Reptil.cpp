#include "../../include/animal/Reptil.hpp"

Reptil::Reptil(tamanho_do_habitat tamanho_tipo, 
               tipo_do_habitat habitat_tipo, 
               requer_luz_uv luz_tipo){}
    
tamanho_do_habitat 
Reptil::getTamanho_tipo() const{
    return this->tamanho_tipo;
}

tipo_do_habitat 
Reptil::getHabitat_tipo() const{
    return this->habitat_tipo;
}

requer_luz_uv 
Reptil::getLuz_tipo() const{
    return this->luz_tipo;
}

void 
Reptil::setTamanho_do_habitat(tamanho_do_habitat tamanho_tipo){
    tamanho_do_habitat tamanho_tipo = tamanho_tipo;
}

void 
Reptil::setTipo_do_habitat(tipo_do_habitat habitat_tipo){
    tipo_do_habitat habitat_tipo = habitat_tipo;
}

void 
Reptil::setRequer_luz_uv(requer_luz_uv luz_tipo){
    requer_luz_uv luz_tipo = luz_tipo;
}