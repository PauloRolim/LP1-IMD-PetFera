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
	    void verVeterinario(int id);
	    void editarVeterinario(int id);
	    void removerVeterinario(int id);
	    void listarVeterinarios();

	    void adicionarTratador();
	    void verTratador(int id);
	    void editarTratador(int id);
	    void removerTratador(int id);
	    void listarTratadores();
	    void menuListaTratador();

	    void adicionarAnimal();
	    void verAnimal(int id);
	    void editarAnimal(int id);
	    void removerAnimal(int id);
	    void listarAnimais();
	    void menuListaAnimal();
};