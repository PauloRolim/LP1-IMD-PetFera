#pragma once

#include <string>

class funcionario
{
protected:
    std::string Id; //falta definir gets e sets
    std::string nome;
	double salario;
	std::string admissao;

public:
    funcionario(std::string nome, double salario, std::string admissao);
    ~funcionario();

    std::string getNome() const;
    double getSalario() const;
    std::string getAdmissao() const;

    void setNome(std::string nome);
    void setSalario(double salario);
    void setAdmissao(std::string admissao);
    
};