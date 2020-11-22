#include "veterinario.hpp"

veterinario::veterinario (/* args */)
{
}

veterinario::veterinario (std::string numeroCRMV, std::string Id, std::string nome, double salario, std::string admissao)
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

double 
veterinario::getSalario() const{
    return this -> salario;
}

std::string 
veterinario::getAdmissao() const{
    return this -> admissao;
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
veterinario::setSalario(double salario){
    this -> salario = salario;
}

void 
veterinario::setAdmissao(std::string admissao){
    this -> admissao = admissao;
}