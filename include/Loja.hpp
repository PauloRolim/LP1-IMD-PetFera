#pragma once

#include <iostream>
#include <vector>

#include "funcionario/Veterinario.hpp"
#include "funcionario/Tratador.hpp"
#include "animal/Anfibio.hpp"
#include "animal/AnfibioExotico.hpp"
#include "animal/AnfibioNativo.hpp"
#include "animal/Ave.hpp"
#include "animal/AveExotico.hpp"
#include "animal/AveNativo.hpp"
#include "animal/Mamifero.hpp"
#include "animal/MamiferoExotico.hpp"
#include "animal/MamiferoNativo.hpp"
#include "animal/Reptil.hpp"
#include "animal/ReptilExotico.hpp"
#include "animal/ReptilNativo.hpp"

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
	    void listarAnimaisVeterinario(int id);

	    void adicionarTratador();
	    void verTratador(int id);
	    void editarTratador(int id);
	    void removerTratador(int id);
	    void listarTratadores();
	    void listarAnimaisTratador(int id);

	    void adicionarAnimal();
	    void verAnimal(int id);
	    void editarAnimal(int id);
	    void removerAnimal(int id);
	    void listarAnimais();
	    void designarAnimalVeterinario(int id);
	    void designarAnimalTratador(int id);
};