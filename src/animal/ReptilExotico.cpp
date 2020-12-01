#include "../../include/animal/ReptilExotico.hpp"
#include "../../include/utils.hpp"

ReptilExotico::ReptilExotico(): Reptil()    
{ }

void Reptil::solicitaDados(){
    utils::printTitle("Adicionar Reptil", 60);

    this->solicitaDadosBase2();
    this->solicitaDadosExotico();
}

void Reptil::ver(){
    utils::printTitle("Anfibio", 60);

    std::cout << "Tipo: Exótico" << std::endl;
    this->verBase2();
    this->vetExotico();
}

void Reptil::editar(){
    utils::printTitle("Editar Anfibio", 60);

    this->editarBase2();
    this->editarExotico();
}