#include <iostream>

#include "Loja.hpp"

Loja::Loja(std::string nome) {
    this->setNome(nome);
}

// Veterinario
void Loja::addVeterinario(Veterinario* novo) {
    veterinarios.push_back(novo);
}

void Loja::removerVeterinarioPeloId(int id) {
    for (const auto& veterinario : this->veterinarios) {
        if (veterinario->getId() == id) {
            std::string nome_removido = veterinario->getNome();
            std::remove(this->veterinarios.begin(), this->veterinarios.end(), veterinario);

            std::cout << "Veterinário " << nome_removido << " removido." << std::endl;
        }
    }
}

void Loja::listarVeterinarios() {
    if(!this->veterinarios.empty()){
        std::cout <<  "id | Nome" << std::endl;
        for (const auto& veterinario : this->veterinarios) {
            std::cout << veterinario->getId() << " | " << veterinario->getNome() << std::endl;
        }
    } else {
        std::cout <<  "Nenhum veterinário foi adicionado." << std::endl;
    }
}

int Loja::getTotalVeterinarios() {
    return this->veterinarios.size();
}

// Tratador
void Loja::addTratador(Tratador* novo) {
    tratadores.push_back(novo);
}

void Loja::removerTratadorPeloId(int id) {
    for (const auto& tratador : this->tratadores) {
        if (tratador->getId() == id) {
            std::string nome_removido = tratador->getNome();
            std::remove(this->tratadores.begin(), this->tratadores.end(), tratador);

            std::cout << "Tratador " << nome_removido << " removido." << std::endl;
        }
    }
}

void Loja::listarTratadores() {
    if(!this->tratadores.empty()){
        std::cout <<  "id | Nome" << std::endl;
        for (const auto& tratador : this->tratadores) {
            std::cout << tratador->getId() << " | " << tratador->getNome() << std::endl;
        }
    } else {
        std::cout <<  "Nenhum tratador foi adicionado." << std::endl;
    }
}

int Loja::getTotalTratadores() {
    return this->tratadores.size();
}

// Animal
void Loja::addAnimal(Animal* novo) {
    animais.push_back(novo);
}

void Loja::removerAnimalPeloId(int id) {
    for (const auto& animal : this->animais) {
        if (animal->getId() == id) {
            std::string nome_removido = animal->getNome();
            std::remove(this->animais.begin(), this->animais.end(), animal);

            std::cout << "Animal " << nome_removido << " removido." << std::endl;
        }
    }
}

void Loja::listarAnimais() {
    if(!this->animais.empty()){
        std::cout <<  "id | Classe | Espécie | Nome" << std::endl;
        for (const auto& animal : this->animais) {
            std::cout << animal->getId() << " | " << animal->getClasse() << " | " << animal->getEspecie() << " | " << animal->getNome() << std::endl;
        }
    } else {
        std::cout <<  "Nenhum animal foi adicionado." << std::endl;
    }
}

int Loja::getTotalAnimais() {
    return this->animais.size();
}