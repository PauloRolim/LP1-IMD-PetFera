#include "Funcionario.hpp"

Funcionario::Funcionario(){}

Funcionario::Funcionario(std::string nome, std::string cpf, double salario)
{
    this->setId();
    this->setNome(nome);
    this->setCpf(cpf);
    this->setSalario(salario);
}

Funcionario::Funcionario(const Funcionario &f2)
{
    this->setId();
    this->setNome(f2.getNome());
    this->setCpf(f2.getCpf());
    this->setSalario(f2.getSalario());
}

Funcionario::~Funcionario()
{
}

int Funcionario::NEXT_ID = 1;

int
Funcionario::getId() const{
    return this->id;
}

std::string 
Funcionario::getNome() const{
    return this->nome;
}

std::string 
Funcionario::getCpf() const{
    return this->cpf;
}

double 
Funcionario::getSalario() const{
    return this->salario;
}

void
Funcionario::setId(){
    this->id = this->NEXT_ID++;
}

void 
Funcionario::setNome(std::string nome){
    this->nome = nome;
}

void
Funcionario::setCpf(std::string cpf){
    this->cpf = cpf;
}

void 
Funcionario::setSalario(double salario){
    this->salario = salario;
}