#include <iostream>

#include "utils.hpp"
#include "funcionario/Veterinario.hpp"
#include "funcionario/Tratador.hpp"
#include "Loja.hpp"

void menuPrincipal(Loja* lj) {
	char opcao;

	utils::limpaTela();

	do {
		utils::printTitle(lj->getNome(), 60);

		std::cout << std::endl << "==========================";
		std::cout << std::endl << "Opções: ";
		std::cout << std::endl << "==========================";
		std::cout << std::endl << "V - Adicionar um Veterinário.";
		std::cout << std::endl << "B - Listar/Editar/Remover Veterinários.";
		std::cout << std::endl << "T - Adicionar um Tratador.";
		std::cout << std::endl << "Y - Listar/Editar/Remover Tratadores.";
		std::cout << std::endl << "A - Adicionar um Animal.";
		std::cout << std::endl << "S - Listar/Editar/Remover Animais.";
		std::cout << std::endl << "---------------------------";
		std::cout << std::endl << std::endl << "X - Encerrar.";

		std::cout << std::endl << std::endl << "Selecione a opção: ";
		std::cin >> opcao;

		utils::limpaTela();

		switch (opcao) {
			case 'V' :
			case 'v' : { lj->adicionarVeterinario(); }
			break;
			case 'B' :
			case 'b' : { lj->listarVeterinarios(); }
			break;
			case 'T' :
			case 't' : { lj->adicionarTratador(); }
			break;
			case 'Y' :
			case 'y' : { lj->listarTratadores(); }
			break;
			case 'A' :
			case 'a' : { lj->adicionarAnimal(); }
			break;
			case 'S' :
			case 's' : { lj->listarAnimais(); }
			break;
			case 'X' :
			case 'x' : { return; }
			break;
			default : std::cout << std::endl << "Opção inválida!";
		}
		std::cout << std::endl;

		utils::pausar();
		utils::limpaTela();
	
	} while (opcao != 'X' && opcao !='x');
}

int main(int argc, char const *argv[]) {
	Loja* lj1 = new Loja("PetFera");

	menuPrincipal(lj1);

	return 0;
}
