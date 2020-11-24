#pragma once

#include <iostream>
#include <string> 

enum classificacaoRisco
{
    venenoso,
    perigoso,
    peçonhento
};

enum alimentacao
{
    herbivoro,
    onivoro,
    carnivoro
};

enum _sexo
{
    femea,
    macho
};

class animal
{
protected:
    
    std::string _classe;                
    std::string especie;
    std::string id_pet;
    std::string tratador_responcavel;
    std::string vet_responcavel;
    double preco;
    _sexo sexo;
    classificacaoRisco risco;
    alimentacao comida;

public:
    animal();

    animal(std::string _classe, std::string especie, std::string id_pet,
           std::string tratador_responcavel, std::string vet_responcavel, double preco, _sexo sexo, 
           classificacaoRisco risco, alimentacao comida);
    
    ~animal();

    std::string get_classe() const;
    std::string getEspecie() const;
    std::string getId_pet() const;
    std::string getTratador_responcavel() const;
    std::string getVet_responcavel() const;
    double getPreco() const;
    _sexo getSexo() const;
    classificacaoRisco getRisco() const;
    alimentacao getComida() const;


    void setNome_do_proprietario(std::string nome_do_proprietario);
    void setClasse(std::string classe);
    void setEspecie(std::string especie);
    void setTratador_responcavel(std::string tratador_responcavel);
    void setVet_responcavel(std::string vet_responcavel);
};
