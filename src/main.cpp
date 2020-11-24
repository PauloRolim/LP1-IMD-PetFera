#include <iostream>

#include "Veterinario.hpp"
#include "Tratador.hpp"
#include "Loja.hpp"

int main(){
    Veterinario* vet01 = new Veterinario("Geraldo Azevedo", "111.222.333-44", 2000.00, "1234");
    Veterinario* vet02 = new Veterinario();

    Loja* PetFera = new Loja('PetFera');

    vet02->setNome("Nailson Gomes");
    vet02->setCpf("999.888.777-66");
    vet02->setSalario(1500);
    vet02->setNumeroCRMV("9876");

    PetFera->addVeterinario(vet01);
    PetFera->addVeterinario(vet02);

    PetFera->listarVeterinarios();

    PetFera->removerPeloId(2);

    PetFera->listarVeterinarios();

    return 0;
}