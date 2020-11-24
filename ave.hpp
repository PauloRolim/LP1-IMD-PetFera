#pragma once

#include <iostream>

#include "animal.hpp"

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


class ave : public animal {
    private:
     tamanho_da_gaiola tamanho_tipo;
     ave_voadora voa_tipo;

    public:
    
    /*construtores*/
    ave();
    ave(tamanho_da_gaiola tamanho_tipo, ave_voadora voa_tipo);

    /*destrutor*/
    ~ave();

    /*geters*/
    tamanho_da_gaiola getTamanho_tipo() const;
    ave_voadora getVoa_tipo() const;

    /*seters*/
    void setTamanho_da_gaiola(tamanho_tipo);
    void setAve_voadora(voa_tipo);

};

