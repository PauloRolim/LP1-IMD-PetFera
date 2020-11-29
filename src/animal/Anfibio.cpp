#include "../../include/animal/Anfibio.hpp"

Anfibio::Anfibio(tamanho_do_habitat tamanho_tipo, tipo_do_habitat habitat_tipo){}

tamanho_do_habitat 
Anfibio::getTamanho_tipo() const{
    return this-> tamanho_tipo;
}

tipo_do_habitat 
Anfibio::getHabitat_tipo() const{
    return this-> habitat_tipo;
}

void 
Anfibio::setTamanho_do_habitat(tamanho_do_habitat tamanho_tipo){
    tamanho_do_habitat tamanho_tipo = tamanho_tipo;
}

void 
Anfibio::setTipo_do_habitat(tipo_do_habitat habitat_tipo){
    tipo_do_habitat habitat_tipo = habitat_tipo;
}

