#include "utils.hpp"
#include "animal/AnfibioNativo.hpp"

AnfibioNativo::AnfibioNativo(): Anfibio() {}

void AnfibioNativo::solicitaDados(){
    utils::printTitle("Adicionar Anfibio", 60);

    this->solicitaDadosBase2();
    this->solicitaDadosNativo();
}

void AnfibioNativo::ver(){
    utils::printTitle("Anfibio", 60);

    std::cout << "Tipo: Nativo" << std::endl;
    this->verBase2();
    this->verNativo();
}

void AnfibioNativo::editar(){
    utils::printTitle("Editar Anfibio", 60);

    this->editarBase2();
    this->editarNativo();
}