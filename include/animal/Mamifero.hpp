#pragma once

#include "../../include/animal/Animal.hpp"

enum _porte {
    pequeno,
    medio,
    grande 
};

enum _requerGaiola {
    sim,
    nao 
};

class Mamifero : public Animal {
    protected:
    _porte porte;
    _requerGaiola requerGaiola;

    public:
    
    /*construtores*/
    Mamifero();

    /*geters*/
    _porte getPorte() const;
    std::string getPorteTexto() const;
    _requerGaiola getRequerGaiola() const;
    std::string getRequerGaiolaTexto() const;

    /*seters*/
    void setPorte(_porte porte);
    void setRequerGaiola(_requerGaiola requerGaiola);

    void solicitaDadosBase2();
    void solicitaDados() override;

    void verBase2();
    void ver() override;

    void editarBase2();
    void editar() override;
};
