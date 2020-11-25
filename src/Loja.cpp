#include <iostream>

#include "../include/Loja.hpp"

Loja::Loja(std::string nome) {
    this->setNome(nome);
}

void Loja::setNome(std::string nome) {
    this->nome = nome;
}

std::string Loja::getNome(){
    return this->nome;
}

// Veterinario
void Loja::adicionarVeterinario() {
    Veterinario* vet = new Veterinario();
    
    // TODO: Solicitar dados do veterinário
    // TODO: Inserir no veterinário conforme for recendo utilizando os vet->set

    veterinarios.push_back(vet);
}

void Loja::removerVeterinarioPeloId(int id) {
    // for (const auto& veterinario : this->veterinarios) {
    //     if (veterinario->getId() == id) {
    //         std::string nome_removido = veterinario->getNome();
    //         std::remove(this->veterinarios.begin(), this->veterinarios.end(), veterinario);

    //         std::cout << "Veterinário " << nome_removido << " removido." << std::endl;

    //         break;
    //     }
    // }
}

void Loja::listarVeterinarios() {
    // TODO: Listar veterinários mostrando apenas dados básicos (id, nome e cpf, por exemplo)
    // TODO: Mostrar opções para o usuário escolher (ver, editar, remover) e pausar para esperar.
    //      Ao escolher uma opção, solicitar (cin) o id. Obs.: Não apagar a tela antes do usuário
    //      inserir o id para que ele possa continuar vendo a lista. Utilizar mesma lógica utilizada no main.
    // TODO: Fazer o método ver em Funcionario. Ele deve mostrar (cout) todos os dados do funcionario
    //      e listar os animais que ele cuida.
    // TODO: Fazer o método editar em Funcionario. Ele deve ir mostrando item por item de um Funcionario
    //      e ir pausando com a pergunta para o usuário se ele quer editar aquele item. Caso a resposta
    //      seja sim, deve solicitar (cin) que o usuário insira a nova informação para aquele item.
    //      Obs.: Não editar id.
    // TODO: Ver e Editar precisam ter um médoto base em Funcionario e um que é defino em seus filhos
    //      (Tratador e Veterinario). O dos filhos para mostrar/editar apenas os itens específicos deles.
    //      O Ver/Editar chamado aqui é o dos filhos.
    // TODO: Trocar opção do X para Voltar, ao invés de encerrar. Já que vai voltar para opções da main.

    if(!this->veterinarios.empty()) {
        std::cout <<  "id | Nome" << std::endl;
        for (const auto& veterinario : this->veterinarios) {
            std::cout << veterinario->getId() << " | " << veterinario->getNome() << std::endl;
        }
    } else {
        std::cout <<  "Nenhum veterinário foi adicionado." << std::endl;
    }
}

// Tratador
void Loja::adicionarTratador() {
    Tratador* trat = new Tratador();
    
    // Solicitar dados do tratador (cin)
    // Inserir no tratador conforme for recendo utilizando os trat->set

    tratadores.push_back(trat);
}

void Loja::removerTratadorPeloId(int id) {
    // for (const auto& tratador : this->tratadores) {
    //     if (tratador->getId() == id) {
    //         std::string nome_removido = tratador->getNome();
    //         std::remove(this->tratadores.begin(), this->tratadores.end(), tratador);

    //         std::cout << "Tratador " << nome_removido << " removido." << std::endl;
    //     }
    // }
}

void Loja::listarTratadores() {
    // TODO: Replicar lógica descrita no listarVeterinarios

    if(!this->tratadores.empty()) {
        std::cout <<  "id | Nome" << std::endl;
        for (const auto& tratador : this->tratadores) {
            std::cout << tratador->getId() << " | " << tratador->getNome() << std::endl;
        }
    } else {
        std::cout <<  "Nenhum tratador foi adicionado." << std::endl;
    }
}

// Animal
void Loja::adicionarAnimal() {
    Animal* ani = new Animal();
    
    // Solicitar dados do animal (cin)
    // Inserir no animal conforme for recendo utilizando os ani->set

    animais.push_back(ani);
}

void Loja::removerAnimalPeloId(int id) {
    // for (const auto& animal : this->animais) {
    //     if (animal->getId() == id) {
    //         std::string nome_removido = animal->getNome();
    //         std::remove(this->animais.begin(), this->animais.end(), animal);

    //         std::cout << "Animal " << nome_removido << " removido." << std::endl;
    //     }
    // }
}

void Loja::listarAnimais() {
    // TODO: Replicar lógica, de maneira análoga, descrita no listarVeterinarios

    if(!this->animais.empty()) {
        std::cout <<  "id | Classe | Espécie | Nome" << std::endl;
        for (const auto& animal : this->animais) {
            std::cout << animal->getId() << " | " << animal->getClasse() << " | " << animal->getEspecie() << " | " << animal->getNome() << std::endl;
        }
    } else {
        std::cout <<  "Nenhum animal foi adicionado." << std::endl;
    }
}
