#pragma once

#include <iostream>
#include <vector>

#include "Veterinario.hpp"
#include "Tratador.hpp"
#include "Animal.hpp"

class Loja {
	private:
		std::string nome;
	    std::vector<Veterinario*> veterinarios;
	    std::vector<Tratador*> tratadores;
	    std::vector<Animal*> animais;

	public:
		Loja(std::string nome);

		void setNome(std::string nome);
		std::string getNome();

	    void adicionarVeterinario();
	    void removerVeterinarioPeloId(int Id);
	    void listarVeterinarios();

	    void adicionarTratador();
	    void removerTratadorPeloId(int Id);
	    void listarTratadores();

	    void adicionarAnimal();
	    void removerAnimalPeloId(int Id);
	    void listarAnimais();
};