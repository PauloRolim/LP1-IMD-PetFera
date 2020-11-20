#pragma once

#include <iostream>
#include <string> 

enum classificacaoRisco
{
    venenoso,
    perigoso,
    peçonhento
};

class animal
{
private:
    
    classificacaoRisco tipo;
    std::string nome_do_proprietario;
    std::string classe;
    std::string especie;
    std::string tratador_responcavel;
    std::string vet_responcavel;

public:
    animal(classificacaoRisco tipo, std::string nome_do_proprietario, std::string classe,std::string especie, 
           std::string tratador_responcavel, std::string vet_responcavel);
    
    ~animal();

    std::string getNome_do_proprietario() const;
    std::string getEspecie() const;
    std::string getClasse() const;
    std::string getTratador_responcavel() const;
    std::string getVet_responcavel() const;
    void setNome_do_proprietario(std::string nome_do_proprietario);
    void setClasse(std::string classe);
    void setEspecie(std::string especie);
    void setTratador_responcavel(std::string tratador_responcavel);
    void setVet_responcavel(std::string vet_responcavel);
};

animal::animal(classificacaoRisco tipo, std::string nome_do_proprietario, std::string classe, 
               std::string especie, std::string tratador_responcavel, std::string vet_responcavel)
{
}

animal::~animal()
{
}

std::string 
animal::getNome_do_proprietario() const {
    return this -> nome_do_proprietario;
}

void 
animal::setNome_do_proprietario(std::string nome_do_proprietario){
    this -> nome_do_proprietario = nome_do_proprietario;
}

std::string 
animal::getClasse() const {
    return this -> classe;
}

void 
animal::setClasse(std::string classe){
    this -> classe = classe;
}


std::string 
animal::getEspecie() const {
    return this -> especie;
}

void 
animal::setEspecie(std::string especie){
    this -> especie = especie;
}


std::string 
animal::getTratador_responcavel() const {
    return this -> tratador_responcavel;
}

void 
animal::setTratador_responcavel(std::string tratador_responcavel){
    this -> tratador_responcavel = tratador_responcavel;
}

std::string 
animal::getVet_responcavel() const {
    return this -> vet_responcavel;
}

void 
animal::setVet_responcavel(std::string vet_responcavel){
    this -> vet_responcavel = vet_responcavel;
}
