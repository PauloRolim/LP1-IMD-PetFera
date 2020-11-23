#pragma once

#include <iostream>

#include "funcionario.hpp"

class tratador : public funcionario {
    private:
    std::string corUniforme;

    public:
    
    /*construtores*/
    tratador();
    tratador(std::string corUniforme, std::string Id, std::string nome, std::string cpf, double salario, std::string cargo);

    /*destrutor*/
    ~tratador();

    /*geters*/
    std::string getCorUniforme() const;
    std::string getId() const;
    std::string getNome() const;
    std::string getCpf() const;
    double getSalario() const;
    std::string getCargo() const;

    /*seters*/
    void setCorUniforme(std::string corUniforme);
    void setId(std::string Id);
    void setNome(std::string nome);
    void setCpf(std::string cpf);
    void setSalario(double salario);
    void setCargo(std::string cargo);
};