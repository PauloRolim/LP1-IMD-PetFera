#pragma once

#include <string>

class funcionario
{
protected:
    std::string Id; 
    std::string nome;
    std::string cpf;
	double salario;
	std::string cargo;

public:
    /*construtores*/
    funcionario();
    funcionario(std::string Id, std::string nome, std::string cpf, double salario, std::string cargo);

    /*destrutor*/
    virtual ~funcionario();

    /*getters*/
    std::string getId() const;
    std::string getNome() const;
    std::string getCpf() const;
    double getSalario() const;
    std::string getCargo() const;

    /*setters*/
    void setId(std::string Id);
    void setNome(std::string nome);
    void setCpf(std::string cpf);
    void setSalario(double salario);
    void setCargo(std::string cargo);
    
};