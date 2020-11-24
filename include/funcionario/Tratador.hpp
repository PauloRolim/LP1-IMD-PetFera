#pragma once

#include <iostream>

#include "Funcionario.hpp"

class Tratador : public Funcionario {
    private:
        std::string cor_uniforme;

    public:    
        /*construtores*/
        Tratador(std::string nome, std::string cpf, double salario, std::string cor_uniforme);

        /*getters*/
        std::string getCorUniforme() const;

        /*setters*/
        void setCorUniforme(std::string cor_uniforme);
};