#pragma once

#include <iostream>

#include "funcionario.hpp"

class veterinario : public funcionario
{
private:
    std::string numeroCRMV;
public:
    veterinario (/* args */);
    veterinario (std::string numeroCRMV, std::string Id, std::string nome, std::string cpf, double salario, std::string cargo);
    ~veterinario ();

    /*getters*/
    std::string getNumeroCRMV();
    std::string getId() const;
    std::string getNome() const;
    std::string getCpf() const;
    double getSalario() const;
    std::string getCargo() const;

    /*setters*/
    void setNumeroCRMV(std::string numeroCRMV);
    void setId(std::string Id);
    void setNome(std::string nome);
    void setCpf(std::string cpf);
    void setSalario(double salario);
    void setCargo(std::string cargo);
};