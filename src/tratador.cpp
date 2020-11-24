#include "tratador.hpp"

tratador::tratador(){}

tratador::tratador(std::string corUniforme, std::string Id, std::string nome, std::string cpf, double salario, std::string cargo){}

tratador::~tratador(){}

std::string 
tratador::getCorUniforme() const{
    return this -> corUniforme;
}

std::string
tratador::getId() const{
    return this -> Id;
}

std::string 
tratador::getNome() const{
    return this -> nome;
}

std::string
tratador::getCpf() const{
    return this -> cpf;
}

double 
tratador::getSalario() const{
    return this -> salario;
}

std::string 
tratador::getCargo() const{
    return this -> cargo;
}

void 
tratador::setCorUniforme(std::string corUniforme){
    this -> corUniforme = corUniforme;
}

void
tratador::setId(std::string Id){
    this -> Id = Id;
}

void 
tratador::setNome(std::string nome){
    this -> nome = nome;
}

void 
tratador::setCpf(std::string cpf){
    this -> cpf = cpf;
}

void 
tratador::setSalario(double salario){
    this -> salario = salario;
}

void 
tratador::setCargo(std::string cargo){
    this -> cargo = cargo;
}