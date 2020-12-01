#include "../../include/animal/AveExotico.hpp"
#include "../../include/utils.hpp"

AveExotico::AveExotico(): Ave(){}

void Ave::solicitaDados(){
    utils::printTitle("Adicionar Ave", 60);

    this->solicitaDadosBase2();
    this->solicitaDadosExotico();
}

void Ave::ver(){
    utils::printTitle("Ave", 60);

    std::cout << "Tipo: Exótico" << std::endl;
    this->verBase2();
    this->vetExotico();
}

void Ave::editar(){
    utils::printTitle("Editar Ave", 60);

    this->editarBase2();
    this->editarExotico();
}