#pragma once

#include <iostream>
#include <string> 

#include "Tratador.hpp"
#include "Veterinario.hpp"

enum classificacaoRisco {
    venenoso,
    perigoso,
    peconhento // esses 3 seriam todos classificados para a mesma cor de tratador, no caso seria um venenoso_perigoso e um normal para diferenciar eu acredito
};

class Animal {
    private:
        classificacaoRisco tipo;
        std::string classe;
        std::string especie;
        std::string nome;
        double preco;
        Tratador* tratador_responcavel;
        Veterinario* vet_responcavel;

    public:
        Animal(
            std::string classe,
            std::string especie,
            std::string nome,
            double preco,
            Tratador* tratador_responcavel,
            Veterinario* vet_responcavel
        );

        ~Animal();

        std::string getClasse() const;
        std::string getEspecie() const;
        std::string getNome() const;
        double getPreco() const;
        Tratador* getTratadorResponcavel() const;
        Veterinario* getVetResponcavel() const;

        void setClasse(std::string classe);
        void setEspecie(std::string especie);
        void setNome(std::string nome);
        void setPreco(double preco);
        void setTratadorResponcavel(Tratador* tratador_responcavel);
        void setVetResponcavel(Veterinario* vet_responcavel);
};
