#pragma once

#include "Animal.hpp"


enum _tamanho_da_gaiola 
{
    pequena,
    media,
    grande 
};


enum _ave_voadora 
{
    sim,
    nao
};


class Ave : public Animal {
    protected:
    _tamanho_da_gaiola tamanho_tipo;
    _ave_voadora voa_tipo;

    public:
    
    /*construtores*/
    Ave();
   
    /*destrutor*/
    virtual ~Ave();

    /*geters*/
    _tamanho_da_gaiola getTamanho_Tipo() const;
    std::string getTamanho_tipoTexto() const;
    _ave_voadora getVoa_Tipo() const;
    std::string getVoa_TipoTexto() const;

    /*seters*/
    void setTamanho_da_gaiola(_tamanho_da_gaiola tamanho_tipo);
    void setAve_voadora(_ave_voadora voa_tipo);

    void solicitaDadosBase2();
    void solicitaDados() override;

    void verBase2();
    void ver() override;

    void editarBase2();
    void editar() override;

};

