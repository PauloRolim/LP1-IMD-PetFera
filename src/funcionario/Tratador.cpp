#include <iostream>

#include "../../include/utils.hpp"
#include "../../include/funcionario/Tratador.hpp"

Tratador::Tratador(): Funcionario() {}

Tratador::Tratador(
	std::string nome,
	std::string cpf,
	double salario,
	std::string cor_uniforme
) : Funcionario(nome, cpf, salario) {
    this->setCorUniforme(cor_uniforme);
}

std::string Tratador::getCorUniforme() const {
    return this->cor_uniforme;
}

void Tratador::setCorUniforme(std::string cor_uniforme) {
    this->cor_uniforme = cor_uniforme;
}

void Tratador::solicitaDados(){
    utils::printTitle("Adicionar Tratador", 60);

    this->solicitaDadosBase();

    std::string cor_uniforme;

    std::cout << "Cor do uniforme: ";
    std::cin.ignore();
    getline(std::cin, cor_uniforme);
    this->setCorUniforme(cor_uniforme);
}

void Tratador::ver(){
    utils::printTitle("Tratador", 60);

    this->verBase();

    std::cout << "Cor do uniforme: " << this->getCorUniforme() << std::endl;
}

void Tratador::editar(){
    utils::printTitle("Editar Tratador", 60);

    this->editarBase();

    std::string cor_uniforme;

    char opcao;

    std::cout << "Editar Cor do uniforme? (s: sim, n: não)";
    std::cin >> opcao;

    if(opcao == 'S' || opcao == 's') {
        std::cout << "Cor do uniforme: ";
        std::cin.ignore();
        getline(std::cin, cor_uniforme);
        this->setCorUniforme(cor_uniforme);
    }
}