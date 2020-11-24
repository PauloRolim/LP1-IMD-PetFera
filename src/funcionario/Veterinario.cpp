#include "Veterinario.hpp"

Veterinario::Veterinario (std::string nome, std::string cpf, double salario, std::string numero_CRMV) {
    Funcionario(nome, cpf, salario);
    this->setNumeroCRMV(numero_CRMV);
}

std::string Veterinario::getNumeroCRMV() {
    return this->numero_CRMV;
}

void Veterinario::setNumeroCRMV(std::string numero_CRMV) {
    this->numero_CRMV = numero_CRMV;
}
