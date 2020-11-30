#pragma once

#include "../../include/animal/Mamifero.hpp"
#include "../../include/animal/Nativo.hpp"

class MamiferoNativo: public Mamifero, public Nativo
{
private:
    /* data */
public:
    MamiferoNativo();
    MamiferoNativo(
        std::string classe,
        std::string especie,
        std::string nome,
        double preco,
        Tratador* tratador_responcavel,
        Veterinario* vet_responcavel,
        _sexo sexo,
        _classificacaoRisco risco,
        _alimentacao comida,
        porte_do_mamifero porte_tipo, 
        requer_gaiola gaiola_tipo,
        std::string licenca_IBAMA
    );
    ~MamiferoNativo();
};