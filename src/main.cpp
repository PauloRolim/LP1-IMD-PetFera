#include <iostream>

#include "Veterinario.hpp"
#include "Tratador.hpp"
#include "Loja.hpp"


// TODO: Os métodos limpaTela e pausar precisam ir para um arquivo (utils.cpp, por exemplo)
// 		para serem utilizados dentro de outras classes.

void limpaTela() {
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

void menuPrincipal(Loja* lj) {
	char opcao;
	limpaTela();
	do {	
		cout<< endl << "Opções: ";
		cout<< endl << "========";
		cout<< endl << "V - Adicionar um Veterinário.";
		cout<< endl << "B - Listar Veterinários.";
		cout<< endl << "T - Adicionar um Tratador.";
		cout<< endl << "Y - Listar Tratadores.";
		cout<< endl << "A - Adicionar um Animal.";
		cout<< endl << "S - Listar Animais.";
		cout<< endl << "---------";
		cout<< endl << endl << "X - Encerrar.";

		cout<< endl << endl << "Selecione a opção: ";

		cin >> opcao;

		limpaTela();

		switch (opcao) {
			case 'V' :
			case 'v' :{ lj->adicionarVeterinario(Veterinario* novo);}
			break;
			case 'B' :
			case 'b' :{ lj->listarVeterinarios();}
			break;
			case 'T' :
			case 't' :{ lj->adicionarTratador(Tratador* novo);}
			break;
			case 'Y' :
			case 'y' :{ lj->listarTratadores();}
			break;
			case 'A' :
			case 'a' :{ lj->adicionarAnimal(Animal* novo);}
			break;
			case 'S' :
			case 's' :{ lj->listarAnimais();}
			break;
			case 'X' :
			case 'x' :{ return;}
			break;
			default : cout << endl << "Opção inválida!";
		}
		cout << endl;

		pausar();
		limpaTela();
	
	} while (opcao != 'X' && opcao !='x');
}

int main(int argc, char const *argv[]) {

	Loja* lj1 = new Loja("PetFera");

	menuPrincipal(lj1);

	return 0;
}


