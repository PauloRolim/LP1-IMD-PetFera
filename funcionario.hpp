#pragma once

#include <string>

class funcionario
{
private:
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

funcionario::funcionario(std::string nome, double salario, std::string admissao)
{
}

funcionario::~funcionario()
{
}

std::string 
funcionario::getNome() const{
    return this -> nome;
}

double 
funcionario::getSalario() const{
    return this -> salario;
}

std::string 
funcionario::getAdmissao() const{
    return this -> admissao;
}

void 
funcionario::setNome(std::string nome){
    this -> nome = nome;
}

void 
funcionario::setSalario(double salario){
    this -> salario = salario;
}

void 
funcionario::setAdmissao(std::string admissao){
    this -> admissao = admissao;
}