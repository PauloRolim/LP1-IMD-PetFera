#include "utils.hpp"
#include "animal/MamiferoNativo.hpp"

MamiferoNativo::MamiferoNativo(): Mamifero(){}

void MamiferoNativo::solicitaDados(){
    utils::printTitle("Adicionar Mamífero", 60);

    this->solicitaDadosBase2();
    this->solicitaDadosNativo();
}

void MamiferoNativo::ver(){
    utils::printTitle("Mamífero", 60);

    std::cout << "Tipo: Nativo" << std::endl;
    this->verBase2();
    this->verNativo();
}

void MamiferoNativo::editar(){
    utils::printTitle("Editar Mamífero", 60);

    this->editarBase2();
    this->editarNativo();
}
