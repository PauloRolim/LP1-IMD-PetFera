#include "utils.hpp"
#include "animal/ReptilNativo.hpp"

ReptilNativo::ReptilNativo(): Reptil() {}

void ReptilNativo::solicitaDados(){
    utils::printTitle("Adicionar Réptil", 60);

    this->solicitaDadosBase2();
    this->solicitaDadosNativo();
}

void ReptilNativo::ver(){
    utils::printTitle("Réptil", 60);

    std::cout << "Tipo: Nativo" << std::endl;
    this->verBase2();
    this->verNativo();
}

void ReptilNativo::editar(){
    utils::printTitle("Editar Réptil", 60);

    this->editarBase2();
    this->editarNativo();
}
