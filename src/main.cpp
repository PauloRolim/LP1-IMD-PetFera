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

// para testar -----------------------------------------------------------

    void menuPrincipal(Loja* lj) {
	char opcao;
	limpaTela();
	do {	
		cout<< endl << "Opções: ";
		cout<< endl << "========";
		cout<< endl << "V - Adicionar um Vetenirario.";
		cout<< endl << "R - Remover um Vetenirario.";
		cout<< endl << "L - Listar Vetenirarios.";
		cout<< endl << "D - Total de Vetenirarios.";
		cout<< endl << "T - Adicionar um Tratador.";
		cout<< endl << "I - Remover um Tratador.";
		cout<< endl << "O - Listar Tratadores.";
		cout<< endl << "E - Total de Tratadores.";
		cout<< endl << "A - Adicionar um Animal.";
		cout<< endl << "H - Remover um Animal.";
		cout<< endl << "G - Listar Animais.";
		cout<< endl << "K - Total de Animais.";
		cout<< endl << "---------";
		cout<< endl << endl << "X - Encerrar.";

		cout<< endl << endl << "Selecione a opção: ";

		cin >> opcao;

		limpaTela();
		 
		switch(opcao)
		{
			case 'V' :
			case 'v' :{ lj->addVeterinario(Veterinario* novo);}
			break;
			case 'R' :
			case 'r' :{ lj->removerVeterinarioPeloId(int Id);}
			break;
			case 'L' :
			case 'l' :{ lj->listarVeterinarios();}
			break;
			case 'D' :
			case 'd' :{ lj->getTotalVeterinarios();}
			break;
			case 'T' :
			case 't' :{ lj->addTratador(Tratador* novo);}
			break;
			case 'I' :
			case 'i' :{ lj->removerTratadorPeloId(int Id);}
			break;
			case 'O' :
			case 'o' :{ lj->listarTratadores();}
			break;
			case 'E' :
			case 'e' :{ lj->getTotalTratadores();}
			break;
			case 'A' :
			case 'a' :{ lj->addAnimal(Animal* novo);}
			break;
			case 'H' :
			case 'h' :{ lj->removerAnimalPeloId(int Id);}
			break;
			case 'G' :
			case 'g' :{ lj->listarAnimais();}
			break;
			case 'K' :
			case 'k' :{ lj->getTotalAnimais();}
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

int main(int argc, char const *argv[])
{

	Loja* lj1 = new Loja("PetFera");

	menuPrincipal(lj1);

	return 0;
}


