#pragma once

#include "../../include/animal/Reptil.hpp"
#include "../../include/animal/Nativo.hpp"

class ReptilNativo: public Reptil, public Nativo
{
private:
    /* data */
public:
    ReptilNativo();
    ReptilNativo(
        std::string classe,
        std::string especie,
        std::string nome,
        double preco,
        Tratador* tratador_responcavel,
        Veterinario* vet_responcavel,
        _sexo sexo,
        _classificacaoRisco risco,
        _alimentacao comida,
        tamanho_do_habitat tamanho_tipo, 
        tipo_do_habitat habitat_tipo, 
        requer_luz_uv luz_tipo,
        std::string licenca_IBAMA
    );
    ~ReptilNativo();
};