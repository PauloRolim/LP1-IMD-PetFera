#include <iostream>

#include "animal/Exotico.hpp"

Exotico::Exotico() {}
Exotico::Exotico(std::string paisOrigem) : paisOrigem(paisOrigem) {}
Exotico::~Exotico() {}

std::string Exotico::getPaisOrigem() const{
    return this->paisOrigem;
}

void Exotico::setPaisOrigem(std::string paisOrigem){
    this->paisOrigem = paisOrigem;
}

void Exotico::solicitaDadosExotico() {
    std::string pais;

    std::cout << "País de origem: ";
    std::cin.ignore();
    getline(std::cin, pais);
    this->setPaisOrigem(pais);
}

void Exotico::verExotico() {
    std::cout << "País de origem: " << this->getPaisOrigem() << std::endl;
}

void Exotico::editarExotico() {
    char opcao;
    std::string pais;

    std::cout << "Editar País de origem? (s: sim, n: não) ";
    std::cin >> opcao;

    if(opcao == 'S' || opcao == 's') {
        std::cout << "País de origem: ";
	    std::cin.ignore();
	    getline(std::cin, pais);
	    this->setPaisOrigem(pais);
    }
}