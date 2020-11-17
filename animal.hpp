#pragma once

#include <iostream>
#include <string>

enum classificacaoTipo
{
    exotico,
    domestico,
    nativo
};

class animal
{
private:
    
    classificacaoTipo tipo;
    std::string nome_do_proprietario;

public:
    animal(classificacaoTipo tipo, std::string nome_do_proprietario);
    ~animal();

    std::string getNome_do_proprietario() const;
    void setNome_do_proprietario(std::string nome_do_proprietario);
};

animal::animal(classificacaoTipo tipo, std::string nome_do_proprietario)
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