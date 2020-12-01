#include "../../include/animal/Exotico.hpp"

Exotico::Exotico() {}
Exotico::Exotico(std::string paisOrigem) : paisOrigem(paisOrigem) {}
Exotico::~Exotico() {}

std::string Exotico::getPaisOrigem() const{
    return this->paisOrigem;
}

void Exotico::setPaisOrigem(std::string paisOrigem){
    this->paisOrigem = paisOrigem;
}

void Exotico::solicitaDadosExotico() {}
void Exotico::verExotico() {}
void Exotico::editarExotico() {}