#include <iostream>

#include "utils.hpp"
#include "funcionario/Veterinario.hpp"

Veterinario::Veterinario(): Funcionario() {}

Veterinario::Veterinario (
	std::string nome,
	std::string cpf,
	double salario,
	std::string numero_CRMV
) : Funcionario(nome, cpf, salario) {
    this->setNumeroCRMV(numero_CRMV);
}

std::string Veterinario::getNumeroCRMV() {
    return this->numero_CRMV;
}

void Veterinario::setNumeroCRMV(std::string numero_CRMV) {
    this->numero_CRMV = numero_CRMV;
}

void Veterinario::solicitaDados(){
    utils::printTitle("Adicionar Veterinário", 60);

    this->solicitaDadosBase();

    std::string vet_numero_CRMV;

    std::cout << "Número do CRMV: ";
    std::cin.ignore();
    getline(std::cin, vet_numero_CRMV);
    this->setNumeroCRMV(vet_numero_CRMV);
}

void Veterinario::ver(){
    utils::printTitle("Veterinário", 60);

    this->verBase();

    std::cout << "Número do CRMV: " << this->getNumeroCRMV() << std::endl;
}

void Veterinario::editar(){
    utils::printTitle("Editar Veterinário", 60);

    this->editarBase();

    std::string vet_numero_CRMV;

    char opcao;

    std::cout << "Editar numero do CRMV? (s: sim, n: não)";
    std::cin >> opcao;

    if(opcao == 'S' || opcao == 's') {
        std::cout << "Número do CRMV: ";
        std::cin.ignore();
        getline(std::cin, vet_numero_CRMV);
        this->setNumeroCRMV(vet_numero_CRMV);
    }
}