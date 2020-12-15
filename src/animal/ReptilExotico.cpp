#include "utils.hpp"
#include "animal/ReptilExotico.hpp"

ReptilExotico::ReptilExotico(): Reptil() {}

void ReptilExotico::solicitaDados(){
    utils::printTitle("Adicionar Reptil", 60);

    this->solicitaDadosBase2();
    this->solicitaDadosExotico();
}

void ReptilExotico::ver(){
    utils::printTitle("Anfibio", 60);

    std::cout << "Tipo: Exótico" << std::endl;
    this->verBase2();
    this->verExotico();
}

void ReptilExotico::editar(){
    utils::printTitle("Editar Anfibio", 60);

    this->editarBase2();
    this->editarExotico();
}