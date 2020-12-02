#include "../../include/animal/AveExotico.hpp"
#include "../../include/utils.hpp"

AveExotico::AveExotico(): Ave(){}

void AveExotico::solicitaDados(){
    utils::printTitle("Adicionar Ave", 60);

    this->solicitaDadosBase2();
    this->solicitaDadosExotico();
}

void AveExotico::ver(){
    utils::printTitle("Ave", 60);

    std::cout << "Tipo: Exótico" << std::endl;
    this->verBase2();
    this->verExotico();
}

void AveExotico::editar(){
    utils::printTitle("Editar Ave", 60);

    this->editarBase2();
    this->editarExotico();
}