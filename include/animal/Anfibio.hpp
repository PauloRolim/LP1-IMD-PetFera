#pragma once

#include <iostream>

#include "../../include/animal/Animal.hpp"

enum tamanho_do_habitat 
{
    pequeno,
    medio,
    grande 
};


enum tipo_do_habitat 
{
    aquatico,
    hibrido,
    umido 
};


class Anfibio : public Animal {
    protected:
     tamanho_do_habitat tamanho_tipo;
     tipo_do_habitat habitat_tipo;

    public:
    
    /*construtores*/
    Anfibio();
    Anfibio(tamanho_do_habitat tamanho_tipo, tipo_do_habitat habitat_tipo);

    /*destrutor*/
    virtual ~Anfibio();

    /*geters*/
    tamanho_do_habitat getTamanho_tipo() const;
    tipo_do_habitat getHabitat_tipo() const;

    /*seters*/
    void setTamanho_do_habitat(tamanho_do_habitat tamanho_tipo);
    void setTipo_do_habitat(tipo_do_habitat habitat_tipo);

};
