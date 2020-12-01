#include "../../include/animal/MamiferoNativo.hpp"
#include "../../include/utils.hpp"

MamiferoNativo::MamiferoNativo(): Mamifero(){}

void Mamifero::solicitaDados(){
    utils::printTitle("Adicionar Mamífero", 60);

    this->solicitaDadosBase2();
    this->solicitaDadosNativo();
}

void Mamifero::ver(){
    utils::printTitle("Mamífero", 60);

    std::cout << "Tipo: Nativo" << std::endl;
    this->verBase2();
    this->verNativo();
}

void Mamifero::editar(){
    utils::printTitle("Editar Mamífero", 60);

    this->editarBase2();
    this->editarNativo();
}
