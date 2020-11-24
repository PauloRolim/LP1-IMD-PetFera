#include "Animal.hpp"

Animal::Animal(
    std::string classe,
    std::string especie,
    std::string nome,
    double preco,
    Tratador* tratador_responcavel,
    Veterinario* vet_responcavel) {
    this->setClasse(classe);
    this->setEspecie(especie);
    this->setNome(nome);
    this->setpreco(preco);
    this->setTratadorResponcavel(tratador_responcavel);
}

Animal::~Animal() {
}

/* getters */ 
std::string Animal::getClasse() const {
    return this->classe;
}

std::string Animal::getEspecie() const {
    return this->especie;
}

std::string Animal::getNome() const {
    return this->nome;
}

double Animal::getPreco() const {
    return this->preco;
}

Tratador* Animal::getTratadorResponcavel() const {
    return this->tratador_responcavel;
}

Veterinario* Animal::getVetResponcavel() const {
    return this->vet_responcavel;
}

/* setters */ 
void Animal::setClasse(std::string classe) {
    this->classe = classe;
}

void Animal::setEspecie(std::string especie) {
    this->especie = especie;
}

void Animal::setNome(std::string nome) {
    this->nome = nome;
}

void Animal::setPreco(double preco) {
    this->preco = preco;
}

void Animal::setTratadorResponcavel(Tratador* tratador_responcavel) {
    this->tratador_responcavel = tratador_responcavel;
}

void Animal::setVetResponcavel(Veterinario* vet_responcavel) {
    this->vet_responcavel = vet_responcavel;
}
