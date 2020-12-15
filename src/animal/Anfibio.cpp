#include <iostream>

#include "utils.hpp"
#include "animal/Anfibio.hpp"

Anfibio::Anfibio(): Animal() {
    this->classe = _classe::anfibio;
}

Anfibio::~Anfibio() {}

_tamanhoHabitat Anfibio::getTamanhoHabitat() const{
    return this->tamanhoHabitat;
}

std::string Anfibio::getTamanhoHabitatTexto() const{
    switch (this->getTamanhoHabitat()) {
        case _tamanhoHabitat::habitat_p:
            return "Pequeno";
            break;
        case _tamanhoHabitat::habitat_m:
            return "Médio";
            break;
        case _tamanhoHabitat::habitat_g:
            return "Grande";
            break;
        default:
            return "";
    }
}

_tipoHabitat Anfibio::getTipoHabitat() const{
    return this->tipoHabitat;
}

std::string Anfibio::getTipoHabitatTexto() const{
    switch (this->getTipoHabitat()) {
        case _tipoHabitat::habitat_mata_fechada:
            return "Mata fechada";
            break;
        case _tipoHabitat::habitat_tropical_umido:
            return "Tropical úmido";
            break;
        case _tipoHabitat::habitat_varzea_tropical:
            return "Várzea tropical";
            break;
        default:
            return "";
    }
}

void Anfibio::setTamanhoHabitat(_tamanhoHabitat tamanhoHabitat){
    this->tamanhoHabitat = tamanhoHabitat;
}

void Anfibio::setTipoHabitat(_tipoHabitat tipoHabitat){
    this->tipoHabitat = tipoHabitat;
}

void Anfibio::solicitaDadosBase2(){
    int tamanhoHabitat;
    int tipoHabitat;

    Animal::solicitaDadosBase();
  
    std::cout << "Tamanho do Habitat (0: Pequeno, 1: Médio, 2: Grande): ";
    std::cin >> tamanhoHabitat;
    this->setTamanhoHabitat(static_cast<_tamanhoHabitat>( tamanhoHabitat ));

    std::cout << "Tipo do Habitat (0: Mata fechada, 1: Tropical úmido, 2: Várzea tropical): ";
    std::cin >> tipoHabitat;
    this->setTipoHabitat(static_cast<_tipoHabitat>( tipoHabitat ));
}

void Anfibio::solicitaDados(){
    utils::printTitle("Adicionar Anfíbio", 60);

    this->solicitaDadosBase2();
}

void Anfibio::verBase2(){
    this->verBase();

    std::cout << "Tamanho do Habitat:  " << this->getTamanhoHabitatTexto() << std::endl;
    std::cout << "Tipo do Habitat: " << this->getTipoHabitatTexto() << std::endl;
}

void Anfibio::ver(){
    utils::printTitle("Anfíbio", 60);

    std::cout << "Tipo: Doméstico";

    this->verBase2();
}

void Anfibio::editarBase2(){
    this->editarBase();

    int tamanhoHabitat;
    int tipoHabitat;
    char opcao;

    std::cout << "Editar Tamanho do Habitat? (s: sim, n: não) ";
    std::cin >> opcao;

    if(opcao == 'S' || opcao == 's') {
        std::cout << "Tamanho do Habitat (0: Pequeno, 1: Médio, 2: Grande): ";
        std::cin >> tamanhoHabitat;
        this->setTamanhoHabitat(static_cast<_tamanhoHabitat>( tamanhoHabitat ));
    }

    std::cout << "Editar Tipo do Habitat? (s: sim, n: não) ";
    std::cin >> opcao;

    if(opcao == 'S' || opcao == 's') {
        std::cout << "Tipo do Habitat (0: Mata fechada, 1: Tropical úmido, 2: Várzea tropical): ";
        std::cin >> tipoHabitat;
        this->setTipoHabitat(static_cast<_tipoHabitat>( tipoHabitat ));
    }
}

void Anfibio::editar(){
    utils::printTitle("Editar Anfíbio", 60);

    this->editarBase2();
}