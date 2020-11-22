#pragma once

#include <iostream>

#include "animal.hpp"

enum porte_do_mamifero 
{
    pequeno,
    medio,
    grande 
};


enum requer_gaiola  
{
    sim,
    nao 
};


class mamifero : public animal {
    private:
     porte_do_mamifero porte_tipo;
     requer_gaiola gaiola_tipo;

    public:
    
    /*construtores*/
    mamifero();
    mamifero(porte_do_mamifero porte_tipo, requer_gaiola gaiola_tipo);

    /*destrutor*/
    ~mamifero();

    /*geters*/
    porte_do_mamifero getPorte_tipo() const;
    requer_gaiola getGaiola_tipo() const;

    /*seters*/
    void setPorte_do_mamifero(porte_tipo);
    void setRequer_gaiola(gaiola_tipo);

};
