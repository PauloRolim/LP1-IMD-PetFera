#include <iostream>

#include "funcionario.hpp"
#include "veterinario.hpp"
#include "tratador.hpp"
#include "quadro_veterinarios.hpp"

int main(){

    veterinario* vet01 = new veterinario();

    veterinario* vet02 = new veterinario();

    quadro_veterinarios PetFera;

    vet01->setNome("Nailson Gomes");
    vet01->setNumeroCRMV("0123");
    vet01->setId("0120");

    vet02->setNome("Paulo Jardel");
    vet02->setId("0220");

    PetFera.addVeterinario(vet01);
    PetFera.addVeterinario(vet02);

    PetFera.listarVeterinarios();

    PetFera.removePeloId("0120");

    PetFera.listarVeterinarios();

    return 0;
}