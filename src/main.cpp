#include "veterinario.hpp"
#include "tratador.hpp"

int main(){

    veterinario* vet01 = new veterinario("0123", "01", "Paulo Jardel", 1045.15, "01/01/2020");

    tratador* trat01 = new tratador("azul", "02", "Nailson Gomes", 600.50, "01/02/2020");

    std::cout << vet01->getNome() << std::endl;

    std::cout << trat01->getNome() << std::endl;

    return 0;
}