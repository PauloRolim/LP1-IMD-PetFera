#include <iostream>
#include <iomanip>
#include <limits>
#include <sstream>

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

    std::string vet_nome; 
    std::string vet_cpf;
    double vet_salario;
    std::string vet_numero_CRMV;

    Veterinario* vet = new Veterinario();

    vet->setId();

    this -> printTitle("Adicionar Veterinario", 60);

    std::cout << "Nome: " << std::endl;
    std::cin.ignore(); 
    getline(std::cin, vet_nome);
    vet->setNome(vet_nome);

    std::cout << "Numero do CPF: " << std::endl;
    std::cin.ignore();
    getline(std::cin, vet_cpf);
    vet->setCpf(vet_cpf);

    std::cout << "Valor do salario em R$: " << std::endl;
    std::cin >> vet_salario;
    vet->setSalario(vet_salario);

    std::cout << "Numero do CRMV: " << std::endl;
    std::cin.ignore();
    getline(std::cin, vet_numero_CRMV);
    vet->setNumeroCRMV(vet_numero_CRMV);

    veterinarios.push_back(vet);
    
    // TODO: Solicitar dados do veterinário
    // TODO: Inserir no veterinário conforme for recendo utilizando os vet->set
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
        this->printTitle("Listagem de Veterinarios", 60);
        std::cout << std::right << std::setfill(' ') << std::setw(1) << "id" << 
        std::setfill(' ') << std::setw(9) << "Nome" << 
        std::setfill(' ') << std::setw(17) << "CPF" << 
        std::setfill(' ') << std::setw(13) << "Salario" <<
		std::setfill(' ') << std::setw(6) << "CRMV" << std::endl;

        for (const auto& veterinario : this->veterinarios) {
            std::cout << veterinario->getId() << "  | " << veterinario->getNome() << " | " << veterinario->getCpf() 
            << " | " << std::fixed << std::setprecision(2) << veterinario->getSalario() << " | " << veterinario->getNumeroCRMV() << " | "  << std::endl; 
        }
    } else {
        std::cout <<  "Nenhum veterinário foi adicionado." << std::endl;
    }
}

// Tratador
void Loja::adicionarTratador() {

    std::string trat_nome; 
    std::string trat_cpf;
    double trat_salario;
    std::string trat_cor_uniforme;

    Tratador* trat = new Tratador();

    trat->setId();

    this -> printTitle("Adicionar Veterinario", 60);

    std::cout << "Nome: " << std::endl;
    std::cin.ignore(); 
    getline(std::cin, trat_nome);
    trat->setNome(trat_nome);

    std::cout << "Numero do CPF: " << std::endl;
    std::cin.ignore();
    getline(std::cin, trat_cpf);
    trat->setCpf(trat_cpf);

    std::cout << "Valor do salario em R$: " << std::endl;
    std::cin >> trat_salario;
    trat->setSalario(trat_salario);

    std::cout << "Cor do uniforme: " << std::endl;
    std::cin.ignore();
    getline(std::cin, trat_cor_uniforme);
    trat->setCorUniforme(trat_cor_uniforme);

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

        this->printTitle("Listagem de Tratadores", 60);
        std::cout << std::right << std::setfill(' ') << std::setw(1) << "id" << 
        std::setfill(' ') << std::setw(9) << "Nome" << 
        std::setfill(' ') << std::setw(17) << "CPF" << 
        std::setfill(' ') << std::setw(13) << "Salario" <<
		std::setfill(' ') << std::setw(6) << "Unifome" << std::endl;

        for (const auto& tratador : this->tratadores) {
            std::cout << tratador->getId() << " | " << tratador->getNome() << tratador->getCpf() <<
            " | " << std::fixed << std::setprecision(2) << tratador->getSalario() << " | " << 
            tratador->getCorUniforme() << std::endl;
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

void 
Loja::printTitle(std::string title, int largura) {
	int spaceOnLeft = (largura-title.length())/2;
	int spaceExtra = title.length()%2;
	std::cout << std::setfill('*') << std::setw(largura) << ""<< std::endl;
	std::cout << "**" 
		<< std::setfill(' ') << std::setw(spaceOnLeft-2) << ""
		<< title 
		<< std::setfill(' ') << std::setw(spaceOnLeft-2+spaceExtra) << ""
		<< "**" << std::endl;
	std::cout << std::setfill('*') << std::setw(largura) << "" << std::endl;
}
