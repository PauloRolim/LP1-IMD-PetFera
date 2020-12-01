#pragma once

#include "../../include/animal/Animal.hpp"

enum _porte {
    porte_p,
    porte_m,
    porte_g 
};

enum _requerGaiola {
    gaiola_sim,
    gaiola_nao 
};

class Mamifero : public Animal {
    protected:
    _porte porte;
    _requerGaiola requerGaiola;

    public:
    
    /*construtores*/
    Mamifero();

    /*destrutor*/
    ~Mamifero();

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
