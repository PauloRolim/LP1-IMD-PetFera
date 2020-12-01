#pragma once

#include <iostream>

#include "Animal.hpp"

enum _tamanhoHabitat {
    pequeno,
    medio,
    grande
};


enum _tipoHabitat {
    mata_fechada,
    tropical_umido,
    varzea_tropical 
};

class Anfibio : public Animal {
    protected:
    _tamanhoHabitat tamanhoHabitat;
    _tipoHabitat tipoHabitat;

    public:
    
    /*construtores*/
    Anfibio();

    /*destrutor*/
    ~Anfibio();

    /*geters*/
    _tamanhoHabitat getTamanhoHabitat() const;
    std::string getTamanhoHabitatTexto() const;
    _tipoHabitat getTipoHabitat() const;
    std::string getTipoHabitatTexto() const;

    /*seters*/
    void setTamanhoHabitat(_tamanhoHabitat tamanhoHabitat);
    void setTipoHabitat(_tipoHabitat tipoHabitat);

    void solicitaDadosBase2();
    void solicitaDados() override;

    void verBase2();
    void ver() override;

    void editarBase2();
    void editar() override;
};
