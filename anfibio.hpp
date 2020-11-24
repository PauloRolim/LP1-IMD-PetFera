#pragma once

#include <iostream>

#include "animal.hpp"

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


class anfibio : public animal {
    private:
     tamanho_do_habitat tamanho_tipo;
     tipo_do_habitat habitat_tipo;

    public:
    
    /*construtores*/
    anfibio();
    anfibio(tamanho_do_habitat tamanho_tipo, tipo_do_habitat habitat_tipo);

    /*destrutor*/
    ~anfibio();

    /*geters*/
    tamanho_do_habitat getTamanho_tipo() const;
    tipo_do_habitat getHabitat_tipo() const;

    /*seters*/
    void setTamanho_do_habitat(tamanho_tipo);
    void setTipo_do_habitat(habitat_tipo);

};
