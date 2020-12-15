#include <iostream>
#include <algorithm>
#include <iomanip>
#include <limits>
#include <sstream>

#include "utils.hpp"
#include "Loja.hpp"

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

            std::cout << "O veterinário " << nome_removido << " foi removido." << std::endl;

            return;
        }
    }

    std::cout << "Nenhum veterinário foi encontrado com o ID informado." << std::endl;
}

void Loja::listarVeterinarios() {
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
            std::cout << std::endl << "A - Listar animais de um veterinário.";
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
                case 'A' :
                case 'a' : {
                    std::cout << std::endl << std::endl << "Informe o id: ";
                    std::cin >> id;
                    this->listarAnimaisVeterinario(id);
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

void Loja::listarAnimaisVeterinario(int id){
    for (const auto& veterinario : this->veterinarios) {
        if (veterinario->getId() == id) {
            veterinario->listaAnimais();

            return;
        }
    }

    std::cout << "Nenhum veterinário foi encontrado com o ID informado." << std::endl;
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

            std::cout << "O tratador " << nome_removido << " foi removido." << std::endl;

            return;
        }
    }
    std::cout << "Nenhum tratador foi encontrado com o ID informado." << std::endl;
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
                std::left << " | " << std::setfill(' ') << std::setw(6) << tratador->getCorUniformeTexto() << 
                " |" << std::endl;
            }

            std::cout << std::endl << "==========================";
            std::cout << std::endl << "Opções: ";
            std::cout << std::endl << "==========================";
            std::cout << std::endl << "V - Ver.";
            std::cout << std::endl << "E - Editar.";
            std::cout << std::endl << "R - Remover.";
            std::cout << std::endl << "A - Listar animais de um tratador.";
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
                case 'A' :
                case 'a' : {
                    std::cout << std::endl << std::endl << "Informe o id: ";
                    std::cin >> id;
                    this->listarAnimaisTratador(id);
                }
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

void Loja::listarAnimaisTratador(int id){
    for (const auto& tratador : this->tratadores) {
        if (tratador->getId() == id) {
            tratador->listaAnimais();

            return;
        }
    }

    std::cout << "Nenhum tratador foi encontrado com o ID informado." << std::endl;
}

// Animal
void Loja::adicionarAnimal() {
    int classe;
    int origem;

    utils::printTitle("Adicionar Animal", 60);

    std::cout << "Classe (0: Anfíbio, 1: Ave, 2: Mamífero, 3: Réptil): ";
    std::cin >> classe;

    std::cout << "Origem (0: Silvestre Natívo, 1: Silvestre Exótico, 2: Doméstico): ";
    std::cin >> origem;

    Animal* ani = new Animal();

    switch (classe) {
        case 0:
            // Anfíbio;
            switch (origem) {
                case 0:
                    // Silvestre nativo;
                    ani = static_cast<AnfibioNativo*>(ani);
                    ani->setClasse(_classe::anfibio);
                    break;
                case 1:
                    // Silvestre exótico;
                    ani = static_cast<AnfibioExotico*>(ani);
                    ani->setClasse(_classe::anfibio);
                    break;
                case 2:
                    // Doméstico;
                    ani = static_cast<Anfibio*>(ani);
                    ani->setClasse(_classe::anfibio);
                    break;

                default:
                    return;
            }
            break;
        case 1:
            // Ave;
            switch (origem) {
                case 0:
                    // Silvestre nativo;
                    ani = static_cast<AveNativo*>(ani);
                    ani->setClasse(_classe::ave);
                    break;
                case 1:
                    // Silvestre exótico;
                    ani = static_cast<AveExotico*>(ani);
                    ani->setClasse(_classe::ave);
                    break;
                case 2:
                    // Doméstico;
                    ani = static_cast<Ave*>(ani);
                    ani->setClasse(_classe::ave);
                    break;

                default:
                    return;
            }
            break;
        case 2:
            // Mamífero;
            switch (origem) {
                case 0:
                    // Silvestre nativo;
                    ani = static_cast<MamiferoNativo*>(ani);
                    ani->setClasse(_classe::mamifero);
                    break;
                case 1:
                    // Silvestre exótico;
                    ani = static_cast<MamiferoExotico*>(ani);
                    ani->setClasse(_classe::mamifero);
                    break;
                case 2:
                    // Doméstico;
                    ani = static_cast<Mamifero*>(ani);
                    ani->setClasse(_classe::mamifero);
                    break;

                default:
                    return;
            }
            break;
        case 3:
            // Réptil;
            switch (origem) {
                case 0:
                    // Silvestre nativo;
                    ani = static_cast<ReptilNativo*>(ani);
                    ani->setClasse(_classe::reptil);
                    break;
                case 1:
                    // Silvestre exótico;
                    ani = static_cast<ReptilExotico*>(ani);
                    ani->setClasse(_classe::reptil);
                    break;
                case 2:
                    // Doméstico;
                    ani = static_cast<Reptil*>(ani);
                    ani->setClasse(_classe::reptil);
                    break;

                default:
                    std::cout << std::endl << "Origem inválida.";
                    return;
            }
            break;

        default:
            std::cout << std::endl << "Classe inválida.";
            return;
    }

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

            std::cout << "O animal " << nome_removido << " foi removido." << std::endl;
        }

        return;
    }

    std::cout << "Nenhum animal foi encontrado com o ID informado." << std::endl;
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
                std::left << " | " << std::setfill(' ') << std::setw(12) << animal->getClasseTexto() << 
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
            std::cout << std::endl << "T - Designar tratador de um animal.";
            std::cout << std::endl << "Y - Designar veterinário de um animal.";
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
                case 'T' :
                case 't' : {
                    std::cout << std::endl << std::endl << "Informe o id: ";
                    std::cin >> id;
                    this->designarAnimalTratador(id);
                }
                break;
                case 'Y' :
                case 'y' : {
                    std::cout << std::endl << std::endl << "Informe o id: ";
                    std::cin >> id;
                    this->designarAnimalVeterinario(id);
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

void Loja::designarAnimalTratador(int id) {
    bool flagMostrouTratador = false;

    if(!this->tratadores.empty()) {
        for (const auto& animal : this->animais) {
            if (animal->getId() == id) {
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
                    if(
                        (
                            (
                                animal->getRisco() == _classificacaoRisco::venenoso ||
                                animal->getRisco() == _classificacaoRisco::perigoso
                            ) &&
                            tratador->getCorUniforme() == _corUniforme::vermelho
                        ) ||
                        (
                            (
                                animal->getRisco() != _classificacaoRisco::venenoso &&
                                animal->getRisco() != _classificacaoRisco::perigoso
                            ) &&
                            (
                                tratador->getCorUniforme() == _corUniforme::azul ||
                                (
                                    tratador->getCorUniforme() == _corUniforme::verde &&
                                    (
                                        animal->getClasse() == _classe::ave ||
                                        animal->getClasse() == _classe::anfibio
                                    )
                                )
                            )
                        )
                    ) {
                        flagMostrouTratador = true;

                        std::cout <<
                        std::left << "| " << std::setfill(' ') << std::setw(2) << tratador->getId() << 
                        std::left << " | " << std::setfill(' ') << std::setw(20) << tratador->getNome() << 
                        std::left << " | " << std::setfill(' ') << std::setw(15) << tratador->getCpf() << 
                        std::left << " | " << std::setfill(' ') << std::setw(10) << std::fixed << std::setprecision(2) << tratador->getSalario() << 
                        std::left << " | " << std::setfill(' ') << std::setw(6) << tratador->getCorUniformeTexto() << 
                        " |" << std::endl;
                    }
                }

                if(flagMostrouTratador) {
                    int id;

                    std::cout << std::endl << std::endl << "Informe o id do tratador: ";
                    std::cin >> id;

                    for (const auto& tratador : this->tratadores) {
                        if (tratador->getId() == id) {
                            if(animal->getTratadorResponcavel() != nullptr) {
                                animal->getTratadorResponcavel()->removeAnimal(animal->getId());
                            }

                            tratador->adicionaAnimal(animal);

                            animal->setTratadorResponcavel(tratador);

                            std::cout << "O tratador " << tratador->getNome() <<
                                " foi vinculado ao animal " << animal->getNome() << "." << std::endl;
                        }
                    }

                    std::cout << "Nenhum tratador foi encontrado com o ID informado." << std::endl;
                } else {
                    std::cout << "Nenhum tratador qualificado para este animal foi encontrado." << std::endl;
                }
            }
        }

        std::cout << "Nenhum animal foi encontrado com o ID informado." << std::endl;
    } else {
        std::cout << "Nenhum tratador cadastrado. Cadastre primeiro um tratador." << std::endl;
    }
}

void Loja::designarAnimalVeterinario(int id) {
    if(!this->veterinarios.empty()) {
        for (const auto& animal : this->animais) {
            if (animal->getId() == id) {
                utils::printTitle("Lista de veterinários", 60);
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

                int id;

                std::cout << std::endl << std::endl << "Informe o id do veterinário: ";
                std::cin >> id;

                for (const auto& veterinario : this->veterinarios) {
                    if (veterinario->getId() == id) {
                        if(animal->getVetResponcavel() != nullptr) {
                            animal->getVetResponcavel()->removeAnimal(animal->getId());
                        }

                        veterinario->adicionaAnimal(animal);

                        animal->setVetResponcavel(veterinario);

                        std::cout << "O veterinário " << veterinario->getNome() <<
                            " foi vinculado ao animal " << animal->getNome() << "." << std::endl;
                    }
                }

                std::cout << "Nenhum animal foi encontrado com o ID informado." << std::endl;
            }
        }

        std::cout << "Nenhum animal foi encontrado com o ID informado." << std::endl;
    } else {
        std::cout << "Nenhum veterinário cadastrado. Cadastre primeiro um veterinário." << std::endl;
    }
}