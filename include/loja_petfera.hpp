#pragma once

#include <iostream>

#include "veterinario.hpp"
#include "tratador.hpp"

#define CAPACIDADE_MAX 10

class loja_petfera
{
private:

    int quadro_de_funcionarios = 0;
    veterinario* veterinarios[CAPACIDADE_MAX];
    tratador* tratadores[CAPACIDADE_MAX];

public:    

    int getQadro_de_funcionarios();
    void addVeterinario(veterinario* novo);
    void addTratador(tratador* novo);
    void remove_Veterinario_PeloId(std::string Id);
    void remove_Tratador_PeloId(std::string Id);
    void listarVeterinarios();
};