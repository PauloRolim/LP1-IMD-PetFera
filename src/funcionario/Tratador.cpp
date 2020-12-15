#include <iostream>

#include "utils.hpp"
#include "funcionario/Tratador.hpp"

Tratador::Tratador(): Funcionario() {}

Tratador::Tratador(
	std::string nome,
	std::string cpf,
	double salario,
	_corUniforme cor_uniforme
) : Funcionario(nome, cpf, salario) {
    this->setCorUniforme(cor_uniforme);
}

_corUniforme Tratador::getCorUniforme() const{
    return this->cor_uniforme;
}

std::string Tratador::getCorUniformeTexto() const{
    switch (this->getCorUniforme()) {
        case _corUniforme::azul:
            return "Azul";
            break;
        case _corUniforme::verde:
            return "Verde";
            break;
        case _corUniforme::vermelho:
            return "Vermelho";
            break;
        default:
            return "";
    }
}

void Tratador::setCorUniforme(_corUniforme cor_uniforme) {
    this->cor_uniforme = cor_uniforme;
}

void Tratador::solicitaDados(){
    int cor;

    utils::printTitle("Adicionar Tratador", 60);

    this->solicitaDadosBase();

    std::string cor_uniforme;

    std::cout << "Cor do uniforme (0: azul, 1: verde, 2: vermelho): ";
    std::cin >> cor;
    this->setCorUniforme(static_cast<_corUniforme>( cor ));
}

void Tratador::ver(){
    utils::printTitle("Tratador", 60);

    this->verBase();

    std::cout << "Cor do uniforme: " << this->getCorUniformeTexto() << std::endl;
}

void Tratador::editar(){
    int cor;

    utils::printTitle("Editar Tratador", 60);

    this->editarBase();

    std::string cor_uniforme;

    char opcao;

    std::cout << "Editar Cor do uniforme? (s: sim, n: não) ";
    std::cin >> opcao;

    if(opcao == 'S' || opcao == 's') {
        std::cout << "Cor do uniforme (0: azul, 1: verde, 2: vermelho): ";
        std::cin >> cor;
        this->setCorUniforme(static_cast<_corUniforme>( cor ));
    }
}