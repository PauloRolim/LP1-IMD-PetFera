#include "tratador.hpp"

tratador::tratador(){}

tratador::tratador(std::string corUniforme, std::string Id, std::string nome, double salario, std::string admissao){}

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

double 
tratador::getSalario() const{
    return this -> salario;
}

std::string 
tratador::getAdmissao() const{
    return this -> admissao;
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
tratador::setSalario(double salario){
    this -> salario = salario;
}

void 
tratador::setAdmissao(std::string admissao){
    this -> admissao = admissao;
}