#include <iostream>

#include "../../include/animal/Animal.hpp"

Animal::Animal() {
    this->setId();
    this->setClasse("");
    this->setEspecie("");
    this->setNome("");
    this->setPreco(0.0);

    this->setTratadorResponcavel(nullptr);
    this->setVetResponcavel(nullptr);

    // this->setSexo(sexo); 
    // this->setRisco(risco);
    // this->setComida(comida);
}

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

std::string Animal::getSexoTexto() const{
    switch (this->getSexo()) {
        case _sexo::femea:
            return "Fêmea";
            break;
        case _sexo::macho:
            return "Macho";
            break;
        default:
            return "";
    }
}

_classificacaoRisco Animal::getRisco() const{
    return this->risco;
}

std::string Animal::getRiscoTexto() const{
    switch (this->getRisco()) {
        case _classificacaoRisco::venenoso:
            return "Venenoso";
            break;
        case _classificacaoRisco::perigoso:
            return "Perigoso";
            break;
        case _classificacaoRisco::peconhento:
            return "Peçonhento";
            break;
        case _classificacaoRisco::semRisco:
            return "Sem Risco";
            break;
        default:
            return "";
    }
}

_alimentacao Animal::getComida() const{
    return this->comida;
}

std::string Animal::getComidaTexto() const{
    switch (this->getRisco()) {
        case _alimentacao::herbivoro:
            return "Herbívoro";
            break;
        case _alimentacao::onivoro:
            return "Onívoro";
            break;
        case _alimentacao::carnivoro:
            return "Carnívoro";
            break;
        default:
            return "";
    }
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

void Animal::solicitaDadosBase(){
    std::string classe;
    std::string especie;
    std::string nome;
    double preco;
    int sexo; // pegando como int para depois transformar no enum
    int risco;
    int comida;

    std::cout << "Classe: ";
    std::cin.ignore(); 
    getline(std::cin, classe);
    this->setClasse(classe);

    std::cout << "Espécie: ";
    std::cin.ignore();
    getline(std::cin, especie);
    this->setEspecie(especie);

    std::cout << "Nome: ";
    std::cin.ignore();
    getline(std::cin, nome);
    this->setNome(nome);

    std::cout << "Preço em R$: ";
    std::cin >> preco;
    this->setPreco(preco);

    std::cout << "Sexo (0: fêmea, 1: macho): ";
    std::cin >> sexo;
    this->setSexo(static_cast<_sexo>( sexo ));

    std::cout << "Classificação de risco (0: venenoso, 1: perigoso, 2: peçonhento, 3:Sem Risco): ";
    std::cin >> risco;
    this->setRisco(static_cast<_classificacaoRisco>( risco ));

    std::cout << "Alimentação (0: herbívoro, 1: onívoro, 2: carnívoro): ";
    std::cin >> comida;
    this->setComida(static_cast<_alimentacao>( comida ));
}

void Animal::solicitaDados(){
    this->solicitaDadosBase();
}

void Animal::verBase(){
    std::cout << "Classe: " << this->getClasse() << std::endl;
    std::cout << "Espécie: " << this->getEspecie() << std::endl;
    std::cout << "Nome: " << this->getNome() << std::endl;
    std::cout << "Preço em R$: " << this->getPreco() << std::endl;
    std::cout << "Sexo: " << this->getSexo() << std::endl;
    std::cout << "Classificação de risco: " << this->getRisco() << std::endl;
    std::cout << "Alimentação: " << this->getComida() << std::endl;
}

void Animal::ver(){
    this->verBase();
}

void Animal::editarBase(){
    this->solicitaDadosBase();
}

void Animal::editar(){
    this->editarBase();
}

Animal& Animal::operator=(const Animal &a2) {
    this->setClasse(a2.getClasse());
    this->setEspecie(a2.getEspecie());
    this->setNome(a2.getNome());
    this->setPreco(a2.getPreco());
    this->setTratadorResponcavel(a2.getTratadorResponcavel());
    this->setVetResponcavel(a2.getVetResponcavel());
    this->setSexo(a2.getSexo()); 
    this->setRisco(a2.getRisco());
    this->setComida(a2.getComida());

    return *this;
}

bool Animal::operator==(const Animal &a2) const {
    return this->getClasse() != ""
        && this->getEspecie() != ""
        && this->getNome() != ""
        && this->getClasse() == a2.getClasse()
        && this->getEspecie() == a2.getEspecie()
        && this->getNome() == a2.getNome();
}
