#include <iostream>

#include "quadro_veterinarios.hpp"

int 
quadro_veterinarios::getCapacidade(){
    return this -> capacidade;
}

void 
quadro_veterinarios::addVeterinario(veterinario* novo){
    if (capacidade < CAPACIDADE_MAX)
    {
        veterinarios[capacidade++] = novo;
    } else
    {
        std::cout << "Capacidade maxia atingida!" << std::endl;
        std::cout << "Entre em contato com o administrador do sistema." << std::endl;
    }
    
}

void 
quadro_veterinarios::removePeloId(std::string Id){
    bool encontrou = false;

    for (int i = 0; i < this -> capacidade; ++i)
    {
        if (this -> veterinarios[i]->getId() == Id)
        {
            veterinario* temp = veterinarios[i];
            veterinarios[i] = veterinarios[i+1];
            veterinarios[i+1] = temp;
            encontrou = true;
        }
    }
    
    if (encontrou == true)
    {
        delete veterinarios[this->capacidade];
        this->capacidade--;
    }
    

}

void 
quadro_veterinarios::listarVeterinarios(){
    for (int i = 0; i < this->capacidade; ++i)
    {   
        std::cout <<  "Id: " << veterinarios[i]->getId() <<
        " Nome: " << veterinarios[i]->getNome() << std::endl;
    }
    
}