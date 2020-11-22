#include <iostream>

#include "funcionario.hpp"
#include "veterinario.hpp"
#include "tratador.hpp"

int main(){

    veterinario* vet01 = new veterinario();
    tratador* trat01 = new tratador();

    veterinario* vet02 = new veterinario("0220", "03", "G. Lima", 500.15, "01/01/2020");

    vet01->setNome("Nailson Gomes");
    vet01->setNumeroCRMV("0123");

    trat01->setNome("Paulo Jardel");
    trat01->setCorUniforme("verde");

    std::cout << vet01->getNome() << " " << vet01->getNumeroCRMV() << std::endl;

    std::cout << trat01->getNome() << " " << trat01->getCorUniforme() << std::endl;

    std::cout << "Contratado em " << vet02->getAdmissao() << std::endl;

    return 0;
}