#include <iostream>

#include "../../include/utils.hpp"
#include "../../include/animal/Ave.hpp"

Ave::Ave(): Animal() {
    this->classe = _classe::ave;
}

Ave::~Ave() {}

_tamanho_da_gaiola Ave::getTamanho_Tipo() const{
    return this-> tamanho_tipo;
}

std::string Ave::getTamanho_tipoTexto() const {
    switch (this->getTamanho_Tipo()) {
        case _tamanho_da_gaiola::pequena:
            return "Pequena";
            break;
        case _tamanho_da_gaiola::media:
            return "Média";
            break;
        case _tamanho_da_gaiola::grande:
            return "Grande";
            break;
        default:
            return "";
    }
}

_ave_voadora Ave::getVoa_Tipo() const{
    return this-> voa_tipo;
}

std::string Ave::getVoa_TipoTexto() const{
    switch (this->getVoa_Tipo()) {
        case _ave_voadora::sim:
            return "Sim";
            break;
        case _ave_voadora::nao:
            return "Não";
            break;
        default:
            return "";
    }
}

void 
Ave::setTamanho_da_gaiola(_tamanho_da_gaiola tamanho_tipo){
    tamanho_tipo = tamanho_tipo;
}

void 
Ave::setAve_voadora(_ave_voadora voa_tipo){
    voa_tipo = voa_tipo;
}

void Ave::solicitaDadosBase2(){
    int gaiola;
    int voa;

    Animal::solicitaDadosBase();
  
    std::cout << "Tamanho da Gaiola (0: Pequena, 1: Média, 2: Grande): ";
    std::cin >> gaiola;
    this->setTamanho_da_gaiola(static_cast<_tamanho_da_gaiola>( gaiola ));

    std::cout << "Voa: (0: Sim, 1: Não): ";
    std::cin >> voa;
    this->setAve_voadora(static_cast<_ave_voadora>( voa ));
}

void Ave::solicitaDados(){
    utils::printTitle("Adicionar Ave", 60);

    this->solicitaDadosBase2();
}

void Ave::verBase2(){
    this->verBase();

    std::cout << "Tamanho da Gaiola:  " << this->getTamanho_Tipo() << std::endl;
    std::cout << "Voa: " << this->getVoa_Tipo() << std::endl;
}

void Ave::ver(){
    utils::printTitle("Ave", 60);

    this->verBase2();
}

void Ave::editarBase2(){
    this->editarBase();

    int gaiola;
    int voa;
    char opcao;

    std::cout << "Editar tamanho da gaiola? (s: sim, n: não) ";
    std::cin >> opcao;

    if(opcao == 'S' || opcao == 's') {
        std::cout << "Tamanho da Gaiola (0: Pequena, 1: Média, 2: Grande): ";
        std::cin >> gaiola;
        this->setTamanho_da_gaiola(static_cast<_tamanho_da_gaiola>( gaiola ));
    }

    std::cout << "Editar Voa? (s: sim, n: não) ";
    std::cin >> opcao;

    if(opcao == 'S' || opcao == 's') {
        std::cout << "Voa: (0: Sim, 1: Não): ";
        std::cin >> voa;
        this->setAve_voadora(static_cast<_ave_voadora>( voa ));
    }
}

void Ave::editar(){
    utils::printTitle("Editar Anfíbio", 60);

    this->editarBase2();
}