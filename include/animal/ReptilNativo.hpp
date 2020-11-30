<<<<<<< HEAD
#pragma once
=======
#include <iostream>
>>>>>>> 89f69e570c600d668f188fcf5436dfc071e8fec1

#include "../../include/animal/Reptil.hpp"
#include "../../include/animal/Nativo.hpp"

class ReptilNativo: public Reptil, public Nativo
{
<<<<<<< HEAD
private:
    /* data */
=======
protected:
 
>>>>>>> 89f69e570c600d668f188fcf5436dfc071e8fec1
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
<<<<<<< HEAD
    ~ReptilNativo();
};
=======

    virtual ~ReptilNativo();
};
>>>>>>> 89f69e570c600d668f188fcf5436dfc071e8fec1
