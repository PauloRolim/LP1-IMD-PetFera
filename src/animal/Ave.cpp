#include "../../include/animal/Ave.hpp"

Ave::Ave(): Animal() {}

Ave::Ave(
    std::string classe,
    std::string especie,
    std::string nome,
    double preco,
    Tratador* tratador_responcavel,
    Veterinario* vet_responcavel,
    _sexo sexo,
    _classificacaoRisco risco,
    _alimentacao comida,
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