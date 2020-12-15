#include "utils.hpp"
#include "animal/MamiferoExotico.hpp"

MamiferoExotico::MamiferoExotico() : Mamifero(), Exotico() {}
MamiferoExotico::~MamiferoExotico() {}


void MamiferoExotico::solicitaDados(){
    utils::printTitle("Adicionar Mamífero", 60);

    this->solicitaDadosBase2();
    this->solicitaDadosExotico();
}

void MamiferoExotico::ver(){
    utils::printTitle("Mamífero", 60);

    std::cout << "Tipo: Exótico" << std::endl;
    this->verBase2();
    this->verExotico();
}

void MamiferoExotico::editar(){
    utils::printTitle("Editar Mamífero", 60);

    this->editarBase2();
    this->editarExotico();
}