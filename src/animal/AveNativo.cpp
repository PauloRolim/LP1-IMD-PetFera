#include "utils.hpp"
#include "animal/AveNativo.hpp"

AveNativo::AveNativo(): Ave() {}

void AveNativo::solicitaDados(){
    utils::printTitle("Adicionar Ave", 60);

    this->solicitaDadosBase2();
    this->solicitaDadosNativo();
}

void AveNativo::ver(){
    utils::printTitle("Ave", 60);

    std::cout << "Tipo: Nativo" << std::endl;
    this->verBase2();
    this->verNativo();
}

void AveNativo::editar(){
    utils::printTitle("Editar Ave", 60);

    this->editarBase2();
    this->editarNativo();
}