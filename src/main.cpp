#include <iostream>

#include "Veterinario.hpp"
#include "Tratador.hpp"
#include "Loja.hpp"


void limpaTela()
{
#if defined _WIN32
    system("cls");
#elif defined (__LINUX__) || defined(__gnu_linux__) || defined(__linux__)
    system("clear");
#elif defined (__APPLE__)
    system("clear");
#endif
}

void pausar() {
cout << "Pressione qualquer tecla para continuar...";
cin.get();
cin.ignore();
}


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
