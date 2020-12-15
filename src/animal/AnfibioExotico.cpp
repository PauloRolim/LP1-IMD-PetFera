#include "utils.hpp"
#include "animal/AnfibioExotico.hpp"

AnfibioExotico::AnfibioExotico(): Anfibio(){}
    
AnfibioExotico::~AnfibioExotico(){}

void AnfibioExotico::solicitaDados(){
    utils::printTitle("Adicionar Anfibio", 60);

    this->solicitaDadosBase2();
    this->solicitaDadosExotico();
}

void AnfibioExotico::ver(){
    utils::printTitle("Anfibio", 60);

    std::cout << "Tipo: Exótico" << std::endl;
    this->verBase2();
    this->verExotico();
}

void AnfibioExotico::editar(){
    utils::printTitle("Editar Anfibio", 60);

    this->editarBase2();
    this->editarExotico();
}