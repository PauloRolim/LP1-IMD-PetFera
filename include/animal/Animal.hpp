#pragma once

#include <iostream>
#include <string> 

enum _classificacaoRisco {
    venenoso,
    perigoso,
    peçonhento
};

enum _alimentacao {
    herbivoro,
    onivoro,
    carnivoro
};

enum _sexo {
    femea,
    macho
};

class Animal {
    protected:
        std::string classe;                
        std::string especie;
        std::string id_pet;
        std::string tratador_responcavel;
        std::string vet_responcavel;
        double preco;
        _sexo sexo;
        _classificacaoRisco risco;
        _alimentacao comida;

    public:
        static int NEXT_ID;

        /*construtores*/
        Animal(
            std::string classe,
            std::string especie,
            std::string nome,
            double preco,
            Tratador* tratador_responcavel,
            Veterinario* vet_responcavel,
            _sexo sexo,
            _classificacaoRisco risco,
            _alimentacao comida
        );
        Animal(const Animal &a2);

        /*destrutor*/
        ~Animal();

        /*getters*/
        int getId() const;
        std::string getClasse() const;
        std::string getEspecie() const;
        std::string getNome() const;
        double getPreco() const;
        Tratador* getTratadorResponcavel() const;
        Veterinario* getVetResponcavel() const;
        _sexo getSexo() const;
        _classificacaoRisco getRisco() const;
        _alimentacao getComida() const;

        /*setters*/
        void setId();
        void setClasse(std::string classe);
        void setEspecie(std::string especie);
        void setNome(std::string nome);
        void setPreco(double preco);
        void setTratadorResponcavel(Tratador* tratador_responcavel);
        void setVetResponcavel(Veterinario* vet_responcavel);
};
