
#pragma once

#include <iostream>

#include "../../include/animal/Animal.hpp"

enum _tamanhoHabitat {
    pequeno,
    medio,
    grande 
};


enum _tipoHabitatReptil {
    arido,
    hibrido,
    umido 
};

enum _requerLuzUv {
    sim,
    nao
};


class Reptil : public Animal {
    protected:
    _tamanhoHabitat tamanhoHabitat;
    _tipoHabitatReptil tipoHabitat;
    _requerLuzUv requerLuzUv;

    public:
    
    /*construtores*/
    Reptil();

    /*destrutor*/
    ~Reptil();

    /*geters*/
    _tamanhoHabitat getTamanhoHabitat() const;
    std::string getTamanhoHabitatTexto() const;
    _tipoHabitatReptil getTipoHabitat() const;
    std::string getTipoHabitatTexto() const;
    _requerLuzUv getRequerLuzUv() const;
    std::string getRequerLuzUvTexto() const;

    /*seters*/
    void setTamanhoHabitat(_tamanhoHabitat tamanhoHabitat);
    void setTipoHabitat(_tipoHabitatReptil tipoHabitat);
    void setRequerLuzUv(_requerLuzUv requerLuzUv);

    void solicitaDadosBase2();
    void solicitaDados() override;

    void verBase2();
    void ver() override;

    void editarBase2();
    void editar() override;
};
