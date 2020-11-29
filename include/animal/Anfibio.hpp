#pragma once

#include <iostream>

#include "../../include/animal/Animal.hpp"

enum tamanho_do_habitat 
{
    pequeno,
    medio,
    gigante
};


enum tipo_do_habitat 
{
    mata_fechada,
    tropical_humido,
    varzea_tropical 
};


class Anfibio : public Animal {
    protected:
     tamanho_do_habitat tamanho_tipo;
     tipo_do_habitat habitat_tipo;

    public:
    
    /*construtores*/
    Anfibio();
    Anfibio(
        std::string classe,
        std::string especie,
        std::string nome,
        double preco,
        Tratador* tratador_responcavel,
        Veterinario* vet_responcavel,
        _sexo sexo,
        _classificacaoRisco risco,
        _alimentacao comida,
        tamanho_do_habitat tamanho_tipo, 
        tipo_do_habitat habitat_tipo);

    /*destrutor*/
    virtual ~Anfibio();

    /*geters*/
    tamanho_do_habitat getTamanho_tipo() const;
    tipo_do_habitat getHabitat_tipo() const;

    /*seters*/
    void setTamanho_do_habitat(tamanho_do_habitat tamanho_tipo);
    void setTipo_do_habitat(tipo_do_habitat habitat_tipo);

};
