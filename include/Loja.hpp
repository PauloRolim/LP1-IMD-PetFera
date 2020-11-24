#pragma once

#include <iostream>
#include <vector>

#include "Veterinario.hpp"
#include "Tratador.hpp"
#include "Animal.hpp"

class Loja {
	private:
		std::string nome;
		// vector<Funcionario*> funciona, mas é necessário uma forma de
		// 	  identificar quando é veterinario e quando é tratador
	    std::vector<Veterinario*> veterinarios;
	    std::vector<Tratador*> tratadores;
	    std::vector<Animal*> animais;

	public:
		Loja(std::string nome);

		void setNome(std::string nome);
		std::string getNome();

	    void addVeterinario(Veterinario* novo);
	    void removerVeterinarioPeloId(int Id);
	    void listarVeterinarios();
	    int getTotalVeterinarios();

	    void addTratador(Tratador* novo);
	    void removerTratadorPeloId(int Id);
	    void listarTratadores();
	    int getTotalTratadores();

	    void addAnimal(Animal* novo);
	    void removerAnimalPeloId(int Id);
	    void listarAnimais();
	    int getTotalAnimais();
};