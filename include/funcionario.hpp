#pragma once

#include <string>

class funcionario
{
protected:
    std::string Id; 
    std::string nome;
	double salario;
	std::string admissao;

public:
    /*construtores*/
    funcionario();
    funcionario(std::string Id, std::string nome, double salario, std::string admissao);

    /*destrutor*/
    virtual ~funcionario();

    /*getters*/
    std::string getId() const;
    std::string getNome() const;
    double getSalario() const;
    std::string getAdmissao() const;

    /*setters*/
    void setId(std::string Id);
    void setNome(std::string nome);
    void setSalario(double salario);
    void setAdmissao(std::string admissao);
    
};