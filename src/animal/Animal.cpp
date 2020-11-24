#include "animal.hpp"

animal::animal(){}

animal::animal(std::string _classe, std::string especie, std::string id_pet,
               std::string tratador_responcavel, std::string vet_responcavel, double preco, _sexo sexo, 
               classificacaoRisco risco, alimentacao comida)
{
}

animal::~animal()
{
}

std::string 
animal::get_classe() const {
    return this -> _classe;
}

std::string
animal::getEspecie() const {
    return this -> especie;
}

std::string 
animal::getId_pet() const {
    return this -> id_pet;
}

std::string
animal::getTratador_responcavel() const {
    return this -> tratador_responcavel;
}

std::string 
animal::getVet_responcavel() const {
    return this -> vet_responcavel;
}

double
animal::getPreco() const {
    return this -> preco;
}

_sexo
animal::getSexo() const{
    return this -> sexo;
}

classificacaoRisco
animal:: getRisco() const{
    return this -> risco;
}

alimentacao
animal::getComida() const{
    return this -> comida;
}
