<<<<<<< HEAD
#pragma once
=======
#include <iostream>
>>>>>>> 89f69e570c600d668f188fcf5436dfc071e8fec1

#include "../../include/animal/Mamifero.hpp"
#include "../../include/animal/Nativo.hpp"

class MamiferoNativo: public Mamifero, public Nativo
{
<<<<<<< HEAD
private:
    /* data */
=======
protected:
    
>>>>>>> 89f69e570c600d668f188fcf5436dfc071e8fec1
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
<<<<<<< HEAD
    ~MamiferoNativo();
};
=======
    virtual ~MamiferoNativo();
};
>>>>>>> 89f69e570c600d668f188fcf5436dfc071e8fec1
