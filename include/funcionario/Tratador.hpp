#pragma once

#include <iostream>

#include "Funcionario.hpp"

enum _corUniforme {
    azul,
    verde,
    vermelho
};

class Tratador : public Funcionario {
    private:
        _corUniforme cor_uniforme;

    public:    
        /*construtores*/
        Tratador();
        Tratador(std::string nome, std::string cpf, double salario, _corUniforme cor_uniforme);

        /*getters*/
        _corUniforme getCorUniforme() const;
        std::string getCorUniformeTexto() const;

        /*setters*/
        void setCorUniforme(_corUniforme cor_uniforme);

        void solicitaDados() override;

        void ver() override;

        void editar() override;
};