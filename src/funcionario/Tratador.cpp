#include "Tratador.hpp"

Tratador::Tratador(std::string nome, std::string cpf, double salario, std::string cor_uniforme) {
    Funcionario(nome, cpf, salario);
    this->setCorUniforme(cor_uniforme);
}

std::string Tratador::getCorUniforme() const {
    return this->cor_uniforme;
}

void Tratador::setCorUniforme(std::string cor_uniforme) {
    this->cor_uniforme = cor_uniforme;
}
