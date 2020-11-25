#include "../../include/animal/Animal.hpp"

Animal::Animal() {}

Animal::Animal(
    std::string classe,
    std::string especie,
    std::string nome,
    double preco,
    Tratador* tratador_responcavel,
    Veterinario* vet_responcavel,
    _sexo sexo, 
    _classificacaoRisco risco,
    _alimentacao comida
) {
    this->setId();
    this->setClasse(classe);
    this->setEspecie(especie);
    this->setNome(nome);
    this->setPreco(preco);
    this->setTratadorResponcavel(tratador_responcavel);
    this->setVetResponcavel(vet_responcavel);
    this->setSexo(sexo); 
    this->setRisco(risco);
    this->setComida(comida);
}

Animal::Animal(const Animal &a2) {
    this->setId();
    this->setClasse(a2.getClasse());
    this->setEspecie(a2.getEspecie());
    this->setNome(a2.getNome());
    this->setPreco(a2.getPreco());
    this->setTratadorResponcavel(a2.getTratadorResponcavel());
    this->setVetResponcavel(a2.getVetResponcavel());
    this->setSexo(a2.getSexo()); 
    this->setRisco(a2.getRisco());
    this->setComida(a2.getComida());
}

Animal::~Animal() {}

int Animal::NEXT_ID = 1;

/*getters*/
int Animal::getId() const {
    return this->id;
}

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

_sexo Animal::getSexo() const{
    return this->sexo;
}

_classificacaoRisco Animal::getRisco() const{
    return this->risco;
}

_alimentacao Animal::getComida() const{
    return this->comida;
}

/*setters*/
void Animal::setId() {
    this->id = this->NEXT_ID++;
}

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

void Animal::setSexo(_sexo sexo){
    this->sexo = sexo;
}

void Animal::setRisco(_classificacaoRisco risco){
    this->risco = risco;
}

void Animal::setComida(_alimentacao comida){
    this->comida = comida;
}
