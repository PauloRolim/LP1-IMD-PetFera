#include "funcionario.hpp"

funcionario::funcionario(){}

funcionario::funcionario(std::string Id, std::string nome, std::string cpf, double salario, std::string cargo)
{
}

funcionario::~funcionario()
{
}

std::string
funcionario::getId() const{
    return this -> Id;
}

std::string 
funcionario::getNome() const{
    return this -> nome;
}

std::string 
funcionario::getCpf() const{
    return this -> cpf;
}

double 
funcionario::getSalario() const{
    return this -> salario;
}

std::string 
funcionario::getCargo() const{
    return this -> cargo;
}

void
funcionario::setId(std::string Id){
    this -> Id = Id;
}

void 
funcionario::setNome(std::string nome){
    this -> nome = nome;
}

void
funcionario::setCpf(std::string cpf){
    this -> cpf = cpf;
}

void 
funcionario::setSalario(double salario){
    this -> salario = salario;
}

void 
funcionario::setCargo(std::string cargo){
    this -> cargo = cargo;
}