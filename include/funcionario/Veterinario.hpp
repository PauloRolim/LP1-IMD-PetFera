#pragma once

#include <iostream>

#include "Funcionario.hpp"

class Veterinario : public Funcionario {
    private:
        std::string numero_CRMV;

    public:
        /*construtores*/
        Veterinario(std::string nome, std::string cpf, double salario, std::string numero_CRMV);

        /*getters*/
        std::string getNumeroCRMV();
        
        /*setters*/
        void setNumeroCRMV(std::string numero_CRMV);
};