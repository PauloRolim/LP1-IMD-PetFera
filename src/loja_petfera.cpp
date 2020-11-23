#include <iostream>

#include "loja_petfera.hpp"

int 
loja_petfera::getQadro_de_funcionarios(){
    return this -> quadro_de_funcionarios;
}

void 
loja_petfera::addVeterinario(veterinario* novo){
    if (quadro_de_funcionarios < CAPACIDADE_MAX)
    {
        veterinarios[quadro_de_funcionarios++] = novo;
    } else
    {
        std::cout << "Capacidade maxia atingida!" << std::endl;
        std::cout << "Entre em contato com o administrador do sistema." << std::endl;
    }
}

void 
loja_petfera::remove_Veterinario_PeloId(std::string Id){
    bool encontrou = false;

    for (int i = 0; i < this -> quadro_de_funcionarios; ++i)
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
        delete veterinarios[this->quadro_de_funcionarios];
        this->quadro_de_funcionarios--;
        std::cout << "Veterinario removido!" << std::endl;
    }    
}

void 
loja_petfera::listarVeterinarios(){
    for (int i = 0; i < this->quadro_de_funcionarios; ++i)
    {   
        std::cout <<  "Id: " << veterinarios[i]->getId() <<
        " Nome: " << veterinarios[i]->getNome() << std::endl;
    }
}

void 
loja_petfera::remove_Tratador_PeloId(std::string Id){
    bool encontrou = false;

    for (int i = 0; i < this -> quadro_de_funcionarios; ++i)
    {
        if (this -> tratadores[i]->getId() == Id)
        {
            tratador* temp = tratadores[i];
            tratadores[i] = tratadores[i+1];
            tratadores[i+1] = temp;
            encontrou = true;
        }
    }

    if (encontrou == true)
    {
        delete tratadores[this->quadro_de_funcionarios];
        this->quadro_de_funcionarios--;
        std::cout << "Tratador removido!" << std::endl;
    } 
}