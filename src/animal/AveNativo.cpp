#include "../../include/animal/AveNativo.hpp"
#include "../../include/utils.hpp"

AveNativo::AveNativo(): Ave()
{
}

void Ave::solicitaDados(){
    utils::printTitle("Adicionar Ave", 60);

    this->solicitaDadosBase2();
    this->solicitaDadosNativo();
}

void Ave::ver(){
    utils::printTitle("Ave", 60);

    std::cout << "Tipo: Nativo" << std::endl;
    this->verBase2();
    this->verNativo();
}

void Ave::editar(){
    utils::printTitle("Editar Ave", 60);

    this->editarBase2();
    this->editarNativo();
}