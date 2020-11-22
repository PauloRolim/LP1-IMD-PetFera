#pragma once

#include <iostream>

#include "funcionario.hpp"

class tratador : public funcionario {
    private:
    std::string corUniforme;

    public:
    
    /*construtores*/
    tratador();
    tratador(std::string corUniforme, std::string Id, std::string nome, double salario, std::string admissao);

    /*destrutor*/
    ~tratador();

    /*geters*/
    std::string getCorUniforme() const;
    std::string getId() const;
    std::string getNome() const;
    double getSalario() const;
    std::string getAdmissao() const;

    /*seters*/
    void setCorUniforme(std::string corUniforme);
    void setId(std::string Id);
    void setNome(std::string nome);
    void setSalario(double salario);
    void setAdmissao(std::string admissao);
};