
#pragma once

#include <iostream>

#include "../../include/animal/Animal.hpp"

enum _tamanhoHabitatReptil {
    habitat_pequeno,
    habitat_medio,
    habitat_grande 
};


enum _tipoHabitatReptil {
    habitat_arido,
    habitat_hibrido,
    habitat_umido 
};

enum _requerLuzUv {
    luz_s,
    luz_n
};


class Reptil : public Animal {
    protected:
    _tamanhoHabitatReptil tamanhoHabitat;
    _tipoHabitatReptil tipoHabitat;
    _requerLuzUv requerLuzUv;

    public:
    
    /*construtores*/
    Reptil();

    /*destrutor*/
    ~Reptil();

    /*geters*/
    _tamanhoHabitatReptil getTamanhoHabitat() const;
    std::string getTamanhoHabitatTexto() const;
    _tipoHabitatReptil getTipoHabitat() const;
    std::string getTipoHabitatTexto() const;
    _requerLuzUv getRequerLuzUv() const;
    std::string getRequerLuzUvTexto() const;

    /*seters*/
    void setTamanhoHabitat(_tamanhoHabitatReptil tamanhoHabitat);
    void setTipoHabitat(_tipoHabitatReptil tipoHabitat);
    void setRequerLuzUv(_requerLuzUv requerLuzUv);

    void solicitaDadosBase2();
    void solicitaDados() override;

    void verBase2();
    void ver() override;

    void editarBase2();
    void editar() override;
};
