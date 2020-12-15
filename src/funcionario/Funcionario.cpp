#include <iostream>
#include <algorithm>
#include <iomanip>
#include <limits>
#include <sstream>

#include "utils.hpp"
#include "funcionario/Funcionario.hpp"
#include "animal/Animal.hpp"

Funcionario::Funcionario() {
    this->setId();
    this->setNome("");
    this->setCpf("");
    this->setSalario(0.0);
}

Funcionario::Funcionario(std::string nome, std::string cpf, double salario) {
    this->setId();
    this->setNome(nome);
    this->setCpf(cpf);
    this->setSalario(salario);
}

Funcionario::Funcionario(const Funcionario &f2) {
    this->setId();
    this->setNome(f2.getNome());
    this->setCpf(f2.getCpf());
    this->setSalario(f2.getSalario());
}

Funcionario::~Funcionario() {}

int Funcionario::NEXT_ID = 1;

/*getters*/
int Funcionario::getId() const {
    return this->id;
}

std::string Funcionario::getNome() const {
    return this->nome;
}

std::string Funcionario::getCpf() const {
    return this->cpf;
}

double Funcionario::getSalario() const {
    return this->salario;
}

/*setters*/
void Funcionario::setId() {
    this->id = this->NEXT_ID++;
}

void Funcionario::setNome(std::string nome) {
    this->nome = nome;
}

void Funcionario::setCpf(std::string cpf) {
    this->cpf = cpf;
}

void Funcionario::setSalario(double salario) {
    this->salario = salario;
}

void Funcionario::solicitaDadosBase(){
    std::string vet_nome; 
    std::string vet_cpf;
    double vet_salario;

    std::cout << "Nome: ";
    std::cin.ignore(); 
    getline(std::cin, vet_nome);
    this->setNome(vet_nome);

    std::cout << "Numero do CPF: ";
    std::cin.ignore(0,' ');
    getline(std::cin, vet_cpf);
    this->setCpf(vet_cpf);

    std::cout << "Valor do salario em R$: ";
    std::cin >> vet_salario;
    this->setSalario(vet_salario);
}

void Funcionario::solicitaDados(){
    this->solicitaDadosBase();
}

void Funcionario::verBase(){
    std::cout << "Nome: " << this->getNome() << std::endl;
    std::cout << "Numero do CPF: " << this->getCpf() << std::endl;
    std::cout << "Valor do salario em R$: " << this->getSalario() << std::endl;
}

void Funcionario::ver(){
    this->verBase();
}

void Funcionario::editarBase(){
    std::string vet_nome; 
    std::string vet_cpf;
    double vet_salario;

    char opcao;

    std::cout << "Editar nome? (s: sim, n: não)";
    std::cin >> opcao;

    if(opcao == 'S' || opcao == 's') {
        std::cout << "Nome: ";
        std::cin.ignore();
        getline(std::cin, vet_nome);
        this->setNome(vet_nome);
    }

    std::cout << "Editar CPF? (s: sim, n: não)";
    std::cin >> opcao;

    if(opcao == 'S' || opcao == 's') {
        std::cout << "Numero do CPF: ";
        std::cin.ignore();
        getline(std::cin, vet_cpf);
        this->setCpf(vet_cpf);
    }

    std::cout << "Editar Salário? (s: sim, n: não)";
    std::cin >> opcao;

    if(opcao == 'S' || opcao == 's') {
        std::cout << "Valor do salario em R$: ";
        std::cin >> vet_salario;
        this->setSalario(vet_salario);
    }
}

void Funcionario::editar(){
    this->editarBase();
}

void Funcionario::adicionaAnimal(Animal* ani){
    this->animais.push_back(ani);
}

void Funcionario::removeAnimal(int id){
    for (const auto& animal : this->animais) {
        if (animal->getId() == id) {
            std::string nome_removido = animal->getNome();

            auto it = std::find(this->animais.begin(), this->animais.end(), animal);
            this->animais.erase(it);

            std::cout << "O animal " << nome_removido << " foi removido." << std::endl;

            break;
        }
    }
}

void Funcionario::listaAnimais(){
    if(!this->animais.empty()) {
        utils::printTitle("Lista de animais aos cuidados de " + this->getNome(), 60);
        std::cout <<
        std::left << "| " << std::setfill(' ') << std::setw(2) << "id" <<
        std::left << " | " << std::setfill(' ') << std::setw(12) << "Classe" <<
        std::left << " | " << std::setfill(' ') << std::setw(12) << "Espécie" <<
        std::left << " | " << std::setfill(' ') << std::setw(20) << "Nome" <<
        " |" << std::endl;
        std::cout << "------------------------------------------------------------" << std::endl;

        for (const auto& animal : this->animais) {
            std::cout <<
            std::left << "| " << std::setfill(' ') << std::setw(2) << animal->getId() << 
            std::left << " | " << std::setfill(' ') << std::setw(12) << animal->getClasseTexto() << 
            std::left << " | " << std::setfill(' ') << std::setw(12) << animal->getEspecie() << 
            std::left << " | " << std::setfill(' ') << std::setw(20) << animal->getNome() << 
            " |" << std::endl;
        }
    } else {
        std::cout << "Nenhum animal para listar." << std::endl;
    }
}

Funcionario& Funcionario::operator=(const Funcionario &f2) {
    this->setNome(f2.getNome());
    this->setCpf(f2.getCpf());
    this->setSalario(f2.getSalario());

    return *this;
}

bool Funcionario::operator==(const Funcionario &f2) const {
    return this->getCpf() != "" && this->getCpf() == f2.getCpf();
}