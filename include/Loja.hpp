#pragma once

#include <iostream>
#include <vector>

#include "funcionario/Veterinario.hpp"
#include "funcionario/Tratador.hpp"
#include "animal/Animal.hpp"

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