#include <iostream>

#include "utils.hpp"
#include "animal/Ave.hpp"

Ave::Ave(): Animal() {
    this->classe = _classe::ave;
}

Ave::~Ave() {}

_tamanhoGaiola Ave::getTamanhoGaiola() const{
    return this->tamanhoGaiola;
}

std::string Ave::getTamanhoGaiolaTexto() const {
    switch (this->getTamanhoGaiola()) {
        case _tamanhoGaiola::gaiola_p:
            return "Pequena";
            break;
        case _tamanhoGaiola::gaiola_m:
            return "Média";
            break;
        case _tamanhoGaiola::gaiola_g:
            return "Grande";
            break;
        default:
            return "";
    }
}

_voadora Ave::getVoadora() const{
    return this->voadora;
}

std::string Ave::getVoadoraTexto() const{
    switch (this->getVoadora()) {
        case _voadora::voadora_s:
            return "Sim";
            break;
        case _voadora::voadora_n:
            return "Não";
            break;
        default:
            return "";
    }
}

void Ave::setTamanhoGaiola(_tamanhoGaiola tamanhoGaiola){
    this->tamanhoGaiola = tamanhoGaiola;
}

void Ave::setVoadora(_voadora voadora){
    this->voadora = voadora;
}

void Ave::solicitaDadosBase2(){
    int gaiola;
    int voa;

    Animal::solicitaDadosBase();
  
    std::cout << "Tamanho da Gaiola (0: Pequena, 1: Média, 2: Grande): ";
    std::cin >> gaiola;
    this->setTamanhoGaiola(static_cast<_tamanhoGaiola>( gaiola ));

    std::cout << "Voadora: (0: Sim, 1: Não): ";
    std::cin >> voa;
    this->setVoadora(static_cast<_voadora>( voa ));
}

void Ave::solicitaDados(){
    utils::printTitle("Adicionar Ave", 60);

    this->solicitaDadosBase2();
}

void Ave::verBase2(){
    this->verBase();

    std::cout << "Tamanho da Gaiola: " << this->getTamanhoGaiola() << std::endl;
    std::cout << "Voadora: " << this->getVoadora() << std::endl;
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

    std::cout << "Editar tamanho da gaiola? (s: Sim, n: Não) ";
    std::cin >> opcao;

    if(opcao == 'S' || opcao == 's') {
        std::cout << "Tamanho da Gaiola (0: Pequena, 1: Média, 2: Grande): ";
        std::cin >> gaiola;
        this->setTamanhoGaiola(static_cast<_tamanhoGaiola>( gaiola ));
    }

    std::cout << "Editar Voadora? (s: Sim, n: Não) ";
    std::cin >> opcao;

    if(opcao == 'S' || opcao == 's') {
        std::cout << "Voadora: (0: Sim, 1: Não): ";
        std::cin >> voa;
        this->setVoadora(static_cast<_voadora>( voa ));
    }
}

void Ave::editar(){
    utils::printTitle("Editar Ave", 60);

    this->editarBase2();
}