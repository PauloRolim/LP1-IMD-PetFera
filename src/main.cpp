#include <iostream>

#include "funcionario.hpp"
#include "veterinario.hpp"
#include "tratador.hpp"
#include "quadro_veterinarios.hpp"

int main(){

    veterinario* vet01 = new veterinario();

    tratador* trat01 = new tratador();

    veterinario* vet02 = new veterinario("0220", "03", "G. Lima", 500.15, "01/01/2020");

    quadro_veterinarios PetFera;

    vet01->setNome("Nailson Gomes");
    vet01->setNumeroCRMV("0123");
    vet01->setId("0120");

    trat01->setNome("Paulo Jardel");
    trat01->setCorUniforme("verde");

    PetFera.addVeterinario(vet01);
    PetFera.addVeterinario(vet02);

    PetFera.listarVeterinarios();

    return 0;
}