
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
    arido,
    hibrido,
    umido 
};

enum requer_luz_uv  
{
    sim,
    nao
};


class reptil : public animal {
    private:
     tamanho_do_habitat tamanho_tipo;
     tipo_do_habitat habitat_tipo;
     requer_luz_uv luz_tipo;

    public:
    
    /*construtores*/
    reptil();
    reptil(tamanho_do_habitat tamanho_tipo, tipo_do_habitat habitat_tipo, requer_luz_uv luz_tipo);

    /*destrutor*/
    ~reptil();

    /*geters*/
    tamanho_do_habitat getTamanho_tipo() const;
    tipo_do_habitat getHabitat_tipo() const;
    requer_luz_uv getLuz_tipo() const;

    /*seters*/
    void setTamanho_do_habitat(tamanho_tipo);
    void setTipo_do_habitat(habitat_tipo);
    void setRequer_luz_uv(luz_tipo);

};
