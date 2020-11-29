#pragma once

#include "../../include/animal/Animal.hpp"

enum porte_do_mamifero 
{
    _pequeno,
    _medio,
    _grande 
};


enum requer_gaiola  
{
    sim,
    nao 
};


class Mamifero : public Animal {
    protected:
    porte_do_mamifero porte_tipo;
    requer_gaiola gaiola_tipo;

    public:
    
    /*construtores*/
    Mamifero();
    Mamifero(
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
        requer_gaiola gaiola_tipo
    );

    /*destrutor*/
    virtual ~Mamifero();

    /*geters*/
    porte_do_mamifero getPorte_tipo() const;
    requer_gaiola getGaiola_tipo() const;

    /*seters*/
    void setPorte_do_mamifero(porte_do_mamifero porte_tipo);
    void setRequer_gaiola(requer_gaiola gaiola_tipo);

};
