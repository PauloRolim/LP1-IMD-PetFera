#include <iostream>

#include "animal/Nativo.hpp"

Nativo::Nativo() {}
Nativo::Nativo(std::string licencaIBAMA) : licencaIBAMA(licencaIBAMA) {}
Nativo::~Nativo() {}

std::string Nativo::getLicencaIBAMA() const{
    return this->licencaIBAMA;
}

void Nativo::setLicencaIBAMA(std::string licencaIBAMA){
    this->licencaIBAMA = licencaIBAMA;
}

void Nativo::solicitaDadosNativo() {
    std::string licencaIBAMA;

    std::cout << "Licença IBAMA: ";
    std::cin.ignore();
    getline(std::cin, licencaIBAMA);
    this->setLicencaIBAMA(licencaIBAMA);
}

void Nativo::verNativo() {
    std::cout << "Licença IBAMA: " << this->getLicencaIBAMA() << std::endl;
}

void Nativo::editarNativo() {
    char opcao;
    std::string licencaIBAMA;

    std::cout << "Editar Licença IBAMA? (s: sim, n: não) ";
    std::cin >> opcao;

    if(opcao == 'S' || opcao == 's') {
        std::cout << "Licença IBAMA: ";
	    std::cin.ignore();
	    getline(std::cin, licencaIBAMA);
	    this->setLicencaIBAMA(licencaIBAMA);
    }
}