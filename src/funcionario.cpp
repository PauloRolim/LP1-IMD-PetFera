#include "funcionario.hpp"

funcionario::funcionario(){}

funcionario::funcionario(std::string Id, std::string nome, double salario, std::string admissao)
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

double 
funcionario::getSalario() const{
    return this -> salario;
}

std::string 
funcionario::getAdmissao() const{
    return this -> admissao;
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
funcionario::setSalario(double salario){
    this -> salario = salario;
}

void 
funcionario::setAdmissao(std::string admissao){
    this -> admissao = admissao;
}