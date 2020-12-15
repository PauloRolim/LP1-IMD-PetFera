#include <iostream>

#include "utils.hpp"
#include "animal/Mamifero.hpp"

Mamifero::Mamifero() : Animal() {
    this->classe = _classe::mamifero;
}

Mamifero::~Mamifero() {}

_porte Mamifero::getPorte() const{
    return this->porte;
}

std::string Mamifero::getPorteTexto() const{
    switch (this->getPorte()) {
        case _porte::porte_p:
            return "Pequeno";
            break;
        case _porte::porte_m:
            return "Médio";
            break;
        case _porte::porte_g:
            return "Grande";
            break;
        default:
            return "";
    }
}

_requerGaiola Mamifero::getRequerGaiola() const{
    return this->requerGaiola;
}

std::string Mamifero::getRequerGaiolaTexto() const{
    switch (this->getRequerGaiola()) {
        case _requerGaiola::gaiola_sim:
            return "Não";
            break;
        case _requerGaiola::gaiola_nao:
            return "Sim";
            break;
        default:
            return "";
    }
}

void Mamifero::setPorte(_porte porte){
    this->porte = porte;
}

void Mamifero::setRequerGaiola(_requerGaiola requerGaiola){
    this->requerGaiola = requerGaiola;
}

void Mamifero::solicitaDadosBase2(){
    int porte;
    int requerGaiola;

    Animal::solicitaDadosBase();
  
    std::cout << "Porte (0: Pequeno, 1: Médio, 2: Grande): ";
    std::cin >> porte;
    this->setPorte(static_cast<_porte>( porte ));

    std::cout << "Requer Gaiola (0: Sim, 1: Não): ";
    std::cin >> requerGaiola;
    this->setRequerGaiola(static_cast<_requerGaiola>( requerGaiola ));
}

void Mamifero::solicitaDados(){
    utils::printTitle("Adicionar Mamífero", 60);

    this->solicitaDadosBase2();
}

void Mamifero::verBase2(){
    this->verBase();

    std::cout << "Porte: " << this->getPorteTexto() << std::endl;
    std::cout << "Requer gaiola: " << this->getRequerGaiolaTexto() << std::endl;
}

void Mamifero::ver(){
    utils::printTitle("Mamífero", 60);

    this->verBase2();
    std::cout << "Tipo: Doméstico" << std::endl;
}

void Mamifero::editarBase2(){
    this->editarBase();

    int porte;
    int requerGaiola;
    char opcao;

    std::cout << "Editar Porte? (s: sim, n: não) ";
    std::cin >> opcao;

    if(opcao == 'S' || opcao == 's') {
        std::cout << "Porte (0: Pequeno, 1: Médio, 2: Grande): ";
        std::cin >> porte;
        this->setPorte(static_cast<_porte>( porte ));
    }

    std::cout << "Editar Requer gaiola? (s: sim, n: não) ";
    std::cin >> opcao;

    if(opcao == 'S' || opcao == 's') {
        std::cout << "Requer gaiola (0: Sim, 1: Não): ";
        std::cin >> requerGaiola;
        this->setRequerGaiola(static_cast<_requerGaiola>( requerGaiola ));
    }
}

void Mamifero::editar(){
    utils::printTitle("Editar Mamífero", 60);

    this->editarBase2();
}