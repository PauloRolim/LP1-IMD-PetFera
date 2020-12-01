#include "../../include/animal/Nativo.hpp"

Nativo::Nativo() {}
Nativo::Nativo(std::string licencaIBAMA) : licencaIBAMA(licencaIBAMA) {}
Nativo::~Nativo() {}

std::string Nativo::getLicencaIBAMA() const{
    return this->licencaIBAMA;
}

void Nativo::setLicencaIBAMA(std::string licencaIBAMA){
    this->licencaIBAMA = licencaIBAMA;
}
