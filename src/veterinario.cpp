#include "veterinario.hpp"

veterinario::veterinario (/* args */)
{
}

veterinario::veterinario (std::string numeroCRMV, std::string Id, std::string nome, std::string cpf, double salario, std::string cargo)
{
}

veterinario::~veterinario ()
{
}


std::string 
veterinario::getNumeroCRMV(){
    return this -> numeroCRMV;
}

std::string 
veterinario::getId() const{
    return this -> Id;
}

std::string 
veterinario::getNome() const{
    return this -> nome;
}

std::string
veterinario::getCpf() const{
    return this -> cpf;
}

double 
veterinario::getSalario() const{
    return this -> salario;
}

std::string 
veterinario::getCargo() const{
    return this -> cargo;
}

void 
veterinario::setNumeroCRMV(std::string numeroCRMV){
    this -> numeroCRMV = numeroCRMV;
}

void 
veterinario::setId(std::string Id){
    this -> Id = Id;
}

void 
veterinario::setNome(std::string nome){
    this -> nome = nome;
}

void
veterinario::setCpf(std::string cpf){
    this -> cpf = cpf;
}

void 
veterinario::setSalario(double salario){
    this -> salario = salario;
}

void 
veterinario::setCargo(std::string cargo){
    this -> cargo = cargo;
}