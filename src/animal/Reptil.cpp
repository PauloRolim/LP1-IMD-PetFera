#include <iostream>

#include "../../include/utils.hpp"
#include "../../include/animal/Reptil.hpp"

Reptil::Reptil(): Animal() {
    this->classe = _classe::reptil;
}

_tamanhoHabitat Reptil::getTamanhoHabitat() const{
    return this->tamanhoHabitat;
}

Reptil::~Reptil() {}

_tipoHabitatReptil Reptil::getTipoHabitat() const{
    return this->tipoHabitat;
}

std::string Reptil::getTamanhoHabitatTexto() const{
    switch (this->getTamanhoHabitat()) {
        case _tamanhoHabitat::pequeno:
            return "Pequeno";
            break;
        case _tamanhoHabitat::medio:
            return "Médio";
            break;
        case _tamanhoHabitat::grande:
            return "Grande";
            break;
        default:
            return "";
    }
}

std::string Reptil::getTipoHabitatTexto() const{
    switch (this->getTipoHabitat()) {
        case _tipoHabitatReptil::arido:
            return "Árido";
            break;
        case _tipoHabitatReptil::hibrido:
            return "Híbrido";
            break;
        case _tipoHabitatReptil::umido:
            return "Úmido";
            break;
        default:
            return "";
    }
}

_requerLuzUv Reptil::getRequerLuzUv() const{
    return this->requerLuzUv;
}

std::string Reptil::getRequerLuzUvTexto() const{
    switch (this->getRequerLuzUv()) {
        case _requerLuzUv::sim:
            return "Não";
            break;
        case _requerLuzUv::nao:
            return "Sim";
            break;
        default:
            return "";
    }
}

void Reptil::setTamanhoHabitat(_tamanhoHabitat tamanhoHabitat){
    this->tamanhoHabitat = tamanhoHabitat;
}

void Reptil::setTipoHabitat(_tipoHabitatReptil tipoHabitat){
    this->tipoHabitat = tipoHabitat;
}

void Reptil::setRequerLuzUv(_requerLuzUv requerLuzUv){
    this->requerLuzUv = requerLuzUv;
}

void Reptil::solicitaDadosBase2(){
    int tamanhoHabitat;
    int tipoHabitat;
    int requer;

    Animal::solicitaDadosBase();
  
    std::cout << "Tamanho do Habitat (0: Pequeno, 1: Médio, 2: Grande): ";
    std::cin >> tamanhoHabitat;
    this->setTamanhoHabitat(static_cast<_tamanhoHabitat>( tamanhoHabitat ));

    std::cout << "Tipo do Habitat (0: Árido, 1: Híbrido, 2: Úmido): ";
    std::cin >> tipoHabitat;
    this->setTipoHabitat(static_cast<_tipoHabitatReptil>( tipoHabitat ));

    std::cout << "Requer luz uv (0: Sim, 1: Não): ";
    std::cin >> requer;
    this->setRequerLuzUv(static_cast<_requerLuzUv>( requer ));
}

void Reptil::solicitaDados(){
    utils::printTitle("Adicionar Réptil", 60);

    this->solicitaDadosBase2();
}

void Reptil::verBase2(){
    this->verBase();

    std::cout << "Tamanho do Habitat:  " << this->getTamanhoHabitatTexto() << std::endl;
    std::cout << "Tipo do Habitat: " << this->getTipoHabitatTexto() << std::endl;
    std::cout << "Requer luz uv: " << this->getRequerLuzUvTexto() << std::endl;
}

void Reptil::ver(){
    utils::printTitle("Réptil", 60);

    this->verBase2();
}

void Reptil::editarBase2(){
    this->editarBase();

    int tamanhoHabitat;
    int tipoHabitat;
    int requer;
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
        this->setTipoHabitat(static_cast<_tipoHabitatReptil>( tipoHabitat ));
    }

    std::cout << "Editar Requer Luz UV? (s: sim, n: não) ";
    std::cin >> opcao;

    if(opcao == 'S' || opcao == 's') {
        std::cout << "Requer luz uv (0: Sim, 1: Não): ";
        std::cin >> requer;
        this->setRequerLuzUv(static_cast<_requerLuzUv>( requer ));
    }
}

void Reptil::editar(){
    utils::printTitle("Editar Réptil", 60);

    this->editarBase2();
}