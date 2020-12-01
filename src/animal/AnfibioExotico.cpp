#include "../../include/animal/AnfibioExotico.hpp"
#include "../../include/utils.hpp"

AnfibioExotico::AnfibioExotico(): Anfibio(){}
    
AnfibioExotico::~AnfibioExotico(){}

void Anfibio::solicitaDados(){
    utils::printTitle("Adicionar Anfibio", 60);

    this->solicitaDadosBase2();
    this->solicitaDadosExotico();
}

void Anfibio::ver(){
    utils::printTitle("Anfibio", 60);

    std::cout << "Tipo: Exótico" << std::endl;
    this->verBase2();
    this->vetExotico();
}

void Anfibio::editar(){
    utils::printTitle("Editar Anfibio", 60);

    this->editarBase2();
    this->editarExotico();
}