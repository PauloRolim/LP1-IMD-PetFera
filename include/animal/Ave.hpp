#pragma once

#include "Animal.hpp"

enum _tamanhoGaiola {
    gaiola_p,
    gaiola_m,
    gaiola_g
};

enum _voadora {
    voadora_s,
    voadora_n
};

class Ave : public Animal {
    protected:
    _tamanhoGaiola tamanhoGaiola;
    _voadora voadora;

    public:
    
    /*construtores*/
    Ave();
   
    /*destrutor*/
    ~Ave();

    /*geters*/
    _tamanhoGaiola getTamanhoGaiola() const;
    std::string getTamanhoGaiolaTexto() const;
    _voadora getVoadora() const;
    std::string getVoadoraTexto() const;

    /*seters*/
    void setTamanhoGaiola(_tamanhoGaiola tamanhoGaiola);
    void setVoadora(_voadora voadora);

    void solicitaDadosBase2();
    void solicitaDados() override;

    void verBase2();
    void ver() override;

    void editarBase2();
    void editar() override;
};

