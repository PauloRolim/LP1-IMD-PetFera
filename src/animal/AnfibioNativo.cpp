#include "../../include/animal/AnfibioNativo.hpp"
#include "../../include/utils.hpp"

AnfibioNativo::AnfibioNativo(): Anfibio() {}

void Anfibio::solicitaDados(){
    utils::printTitle("Adicionar Anfibio", 60);

    this->solicitaDadosBase2();
    this->solicitaDadosNativo();
}

void Anfibio::ver(){
    utils::printTitle("Anfibio", 60);

    std::cout << "Tipo: Nativo" << std::endl;
    this->verBase2();
    this->verNativo();
}

void Anfibio::editar(){
    utils::printTitle("Editar Anfibio", 60);

    this->editarBase2();
    this->editarNativo();
}