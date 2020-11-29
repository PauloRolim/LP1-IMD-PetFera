#pragma once

#include "../../include/animal/Animal.hpp"

enum tamanho_da_gaiola 
{
    pequena,
    media,
    grande 
};


enum ave_voadora 
{
    sim,
    nao
};


class Ave : public Animal {
    protected:
    tamanho_da_gaiola tamanho_tipo;
    ave_voadora voa_tipo;

    public:
    
    /*construtores*/
    Ave();
    Ave(tamanho_da_gaiola tamanho_tipo, ave_voadora voa_tipo);

    /*destrutor*/
    virtual ~Ave();

    /*geters*/
    tamanho_da_gaiola getTamanho_tipo() const;
    ave_voadora getVoa_tipo() const;

    /*seters*/
    void setTamanho_da_gaiola(tamanho_da_gaiola tamanho_tipo);
    void setAve_voadora(ave_voadora voa_tipo);

};

