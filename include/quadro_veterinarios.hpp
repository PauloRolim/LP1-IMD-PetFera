#pragma once

#include <iostream>

#include "veterinario.hpp"

#define CAPACIDADE_MAX 10

class quadro_veterinarios
{
private:

    int capacidade = 0;
    veterinario* veterinarios[CAPACIDADE_MAX];

public:    

    int getCapacidade();
    void addVeterinario(veterinario* novo);
    void removePeloId(std::string Id);
    void listarVeterinarios();
};