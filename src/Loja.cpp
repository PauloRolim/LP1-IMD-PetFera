#include <iostream>
#include <algorithm>
#include <iomanip>
#include <limits>
#include <sstream>

#include "../include/utils.hpp"
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
    vet->solicitaDados();

    this->veterinarios.push_back(vet);

    std::cout << std::endl << "O veterinário " << vet->getNome() << " foi adicionado.";
}

void Loja::verVeterinario(int id) {
    for (const auto& veterinario : this->veterinarios) {
        if (veterinario->getId() == id) {
            utils::limpaTela();

            veterinario->ver();

            utils::pausar();
            utils::limpaTela();
            return;
        }
    }

    std::cout << "Nenhum veterinário foi encontrado com o ID informado." << std::endl;
}

void Loja::editarVeterinario(int id) {
    for (const auto& veterinario : this->veterinarios) {
        if (veterinario->getId() == id) {
            utils::limpaTela();

            veterinario->editar();

            utils::pausar();
            utils::limpaTela();
            return;
        }
    }

    std::cout << "Nenhum veterinário foi encontrado com o ID informado." << std::endl;
}

void Loja::removerVeterinario(int id) {
    for (const auto& veterinario : this->veterinarios) {
        if (veterinario->getId() == id) {
            std::string nome_removido = veterinario->getNome();

            auto it = std::find(this->veterinarios.begin(), this->veterinarios.end(), veterinario);
            this->veterinarios.erase(it);

            std::cout << "O veterinário " << nome_removido << " removido." << std::endl;

            return;
        }
    }

    std::cout << "Nenhum veterinário foi encontrado com o ID informado." << std::endl;
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
        char opcao;
        int id;

        do {
            utils::printTitle("Lista de Veterinários", 60);
            std::cout <<
            std::left << "| " << std::setfill(' ') << std::setw(2) << "id" <<
            std::left << " | " << std::setfill(' ') << std::setw(20) << "Nome" <<
            std::left << " | " << std::setfill(' ') << std::setw(15) << "CPF" <<
            std::left << " | " << std::setfill(' ') << std::setw(11) << "Salário" <<
            std::left << " | " << std::setfill(' ') << std::setw(6) << "CRMV" <<
            " |" << std::endl;
            std::cout << "------------------------------------------------------------" << std::endl;

            for (const auto& veterinario : this->veterinarios) {
                std::cout <<
                std::left << "| " << std::setfill(' ') << std::setw(2) << veterinario->getId() << 
                std::left << " | " << std::setfill(' ') << std::setw(20) << veterinario->getNome() << 
                std::left << " | " << std::setfill(' ') << std::setw(15) << veterinario->getCpf() << 
                std::left << " | " << std::setfill(' ') << std::setw(10) << std::fixed << std::setprecision(2) << veterinario->getSalario() << 
                std::left << " | " << std::setfill(' ') << std::setw(6) << veterinario->getNumeroCRMV() << 
                " |" << std::endl;
            }

            std::cout << std::endl << "==========================";
            std::cout << std::endl << "Opções: ";
            std::cout << std::endl << "==========================";
            std::cout << std::endl << "V - Ver.";
            std::cout << std::endl << "E - Editar.";
            std::cout << std::endl << "R - Remover.";
            std::cout << std::endl << "---------------------------";
            std::cout << std::endl << std::endl << "X - Voltar.";

            std::cout << std::endl << std::endl << "Selecione a opção: ";
            std::cin >> opcao;

            switch (opcao) {
                case 'V' :
                case 'v' : {
                    std::cout << std::endl << std::endl << "Informe o id: ";
                    std::cin >> id;
                    this->verVeterinario(id);
                }
                break;
                case 'E' :
                case 'e' : {
                    std::cout << std::endl << std::endl << "Informe o id: ";
                    std::cin >> id;
                    this->editarVeterinario(id);
                }
                break;
                case 'R' :
                case 'r' : {
                    std::cout << std::endl << std::endl << "Informe o id: ";
                    std::cin >> id;
                    this->removerVeterinario(id);
                }
                break;
                case 'X' :
                case 'x' : { return;}
                break;
                default : std::cout << std::endl << "Opção inválida!";
            }
            std::cout << std::endl;

            utils::pausar();
            utils::limpaTela();
        } while (opcao != 'X' && opcao !='x');
    } else {
        std::cout << "Nenhum veterinário foi adicionado." << std::endl;
    }
}

// Tratador
void Loja::adicionarTratador() {
    Tratador* trat = new Tratador();
    trat->solicitaDados();

    this->tratadores.push_back(trat);

    std::cout << std::endl << "O tratador " << trat->getNome() << " foi adicionado.";
}

void Loja::verTratador(int id) {
    for (const auto& tratador : this->tratadores) {
        if (tratador->getId() == id) {
            utils::limpaTela();

            tratador->ver();

            utils::pausar();
            utils::limpaTela();
            return;
        }
    }

    std::cout << "Nenhum tratador foi encontrado com o ID informado." << std::endl;
}

void Loja::editarTratador(int id) {
    for (const auto& tratador : this->tratadores) {
        if (tratador->getId() == id) {
            utils::limpaTela();

            tratador->editar();

            utils::pausar();
            utils::limpaTela();
            return;
        }
    }

    std::cout << "Nenhum tratador foi encontrado com o ID informado." << std::endl;
}

void Loja::removerTratador(int id) {
    for (const auto& tratador : this->tratadores) {
        if (tratador->getId() == id) {
            std::string nome_removido = tratador->getNome();

            auto it = std::find(this->tratadores.begin(), this->tratadores.end(), tratador);
            this->tratadores.erase(it);

            std::cout << "O tratador " << nome_removido << " removido." << std::endl;

            break;
        }
    }
}

void Loja::listarTratadores() {
    if(!this->tratadores.empty()) {
        char opcao;
        int id;

        do {
            utils::printTitle("Lista de Tratadores", 60);
            std::cout <<
            std::left << "| " << std::setfill(' ') << std::setw(2) << "id" <<
            std::left << " | " << std::setfill(' ') << std::setw(20) << "Nome" <<
            std::left << " | " << std::setfill(' ') << std::setw(15) << "CPF" <<
            std::left << " | " << std::setfill(' ') << std::setw(11) << "Salário" <<
            std::left << " | " << std::setfill(' ') << std::setw(6) << "Uniforme" <<
            " |" << std::endl;
            std::cout << "------------------------------------------------------------" << std::endl;

            for (const auto& tratador : this->tratadores) {
                std::cout <<
                std::left << "| " << std::setfill(' ') << std::setw(2) << tratador->getId() << 
                std::left << " | " << std::setfill(' ') << std::setw(20) << tratador->getNome() << 
                std::left << " | " << std::setfill(' ') << std::setw(15) << tratador->getCpf() << 
                std::left << " | " << std::setfill(' ') << std::setw(10) << std::fixed << std::setprecision(2) << tratador->getSalario() << 
                std::left << " | " << std::setfill(' ') << std::setw(6) << tratador->getCorUniforme() << 
                " |" << std::endl;
            }

            std::cout << std::endl << "==========================";
            std::cout << std::endl << "Opções: ";
            std::cout << std::endl << "==========================";
            std::cout << std::endl << "V - Ver.";
            std::cout << std::endl << "E - Editar.";
            std::cout << std::endl << "R - Remover.";
            std::cout << std::endl << "---------------------------";
            std::cout << std::endl << std::endl << "X - Voltar.";

            std::cout << std::endl << std::endl << "Selecione a opção: ";
            std::cin >> opcao;

            switch (opcao) {
                case 'V' :
                case 'v' : {
                    std::cout << std::endl << std::endl << "Informe o id: ";
                    std::cin >> id;
                    this->verTratador(id);
                }
                break;
                case 'E' :
                case 'e' : {
                    std::cout << std::endl << std::endl << "Informe o id: ";
                    std::cin >> id;
                    this->editarTratador(id);
                }
                break;
                case 'R' :
                case 'r' : {
                    std::cout << std::endl << std::endl << "Informe o id: ";
                    std::cin >> id;
                    this->removerTratador(id);
                }
                break;
                case 'X' :
                case 'x' : { return;}
                break;
                default : std::cout << std::endl << "Opção inválida!";
            }
            std::cout << std::endl;

            utils::pausar();
            utils::limpaTela();
        } while (opcao != 'X' && opcao !='x');
    } else {
        std::cout << "Nenhum tratador foi adicionado." << std::endl;
    }
}

// Animal
void Loja::adicionarAnimal() {
    Animal* ani = new Animal();
    ani->solicitaDados();
    
    this->animais.push_back(ani);

    std::cout << std::endl << "O animal " << ani->getNome() << " foi adicionado.";
}

void Loja::verAnimal(int id) {
    for (const auto& animal : this->animais) {
        if (animal->getId() == id) {
            utils::limpaTela();

            animal->ver();

            utils::pausar();
            utils::limpaTela();
            return;
        }
    }

    std::cout << "Nenhum animal foi encontrado com o ID informado." << std::endl;
}

void Loja::editarAnimal(int id) {
    for (const auto& animal : this->animais) {
        if (animal->getId() == id) {
            utils::limpaTela();

            animal->editar();

            utils::pausar();
            utils::limpaTela();
            return;
        }
    }

    std::cout << "Nenhum animal foi encontrado com o ID informado." << std::endl;
}

void Loja::removerAnimal(int id) {
    for (const auto& animal : this->animais) {
        if (animal->getId() == id) {
            std::string nome_removido = animal->getNome();

            auto it = std::find(this->animais.begin(), this->animais.end(), animal);
            this->animais.erase(it);

            std::cout << "O animal " << nome_removido << " removido." << std::endl;
        }
    }
}

void Loja::listarAnimais() {
    if(!this->animais.empty()) {
        char opcao;
        int id;

        do {
            utils::printTitle("Lista de Animais", 60);
            std::cout <<
            std::left << "| " << std::setfill(' ') << std::setw(2) << "id" <<
            std::left << " | " << std::setfill(' ') << std::setw(12) << "Classe" <<
            std::left << " | " << std::setfill(' ') << std::setw(12) << "Espécie" <<
            std::left << " | " << std::setfill(' ') << std::setw(20) << "Nome" <<
            " |" << std::endl;
            std::cout << "------------------------------------------------------------" << std::endl;

            for (const auto& animal : this->animais) {
                std::cout <<
                std::left << "| " << std::setfill(' ') << std::setw(2) << animal->getId() << 
                std::left << " | " << std::setfill(' ') << std::setw(12) << animal->getClasse() << 
                std::left << " | " << std::setfill(' ') << std::setw(12) << animal->getEspecie() << 
                std::left << " | " << std::setfill(' ') << std::setw(20) << animal->getNome() << 
                " |" << std::endl;
            }

            std::cout << std::endl << "==========================";
            std::cout << std::endl << "Opções: ";
            std::cout << std::endl << "==========================";
            std::cout << std::endl << "V - Ver.";
            std::cout << std::endl << "E - Editar.";
            std::cout << std::endl << "R - Remover.";
            std::cout << std::endl << "---------------------------";
            std::cout << std::endl << std::endl << "X - Voltar.";

            std::cout << std::endl << std::endl << "Selecione a opção: ";
            std::cin >> opcao;

            switch (opcao) {
                case 'V' :
                case 'v' : {
                    std::cout << std::endl << std::endl << "Informe o id: ";
                    std::cin >> id;
                    this->verAnimal(id);
                }
                break;
                case 'E' :
                case 'e' : {
                    std::cout << std::endl << std::endl << "Informe o id: ";
                    std::cin >> id;
                    this->editarAnimal(id);
                }
                break;
                case 'R' :
                case 'r' : {
                    std::cout << std::endl << std::endl << "Informe o id: ";
                    std::cin >> id;
                    this->removerAnimal(id);
                }
                break;
                case 'X' :
                case 'x' : { return;}
                break;
                default : std::cout << std::endl << "Opção inválida!";
            }
            std::cout << std::endl;

            utils::pausar();
            utils::limpaTela();
        } while (opcao != 'X' && opcao !='x');
    } else {
        std::cout << "Nenhum animal foi adicionado." << std::endl;
    }
}
