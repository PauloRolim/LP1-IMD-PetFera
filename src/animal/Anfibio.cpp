#include "../../include/animal/Anfibio.hpp"

Anfibio::Anfibio(): Animal() {}

Anfibio::Anfibio(
    std::string classe,
    std::string especie,
    std::string nome,
    double preco,
    Tratador* tratador_responcavel,
    Veterinario* vet_responcavel,
    _sexo sexo,
    _classificacaoRisco risco,
    _alimentacao comida,
    tamanho_do_habitat tamanho_tipo, 
    tipo_do_habitat habitat_tipo){
        
        classe = "Anfibio";
    }

tamanho_do_habitat 
Anfibio::getTamanho_tipo() const{
    return this->tamanho_tipo;
}

tipo_do_habitat 
Anfibio::getHabitat_tipo() const{
    return this->habitat_tipo;
}

void 
Anfibio::setTamanho_do_habitat(tamanho_do_habitat tamanho_tipo){
    tamanho_tipo = tamanho_tipo;
}

void 
Anfibio::setTipo_do_habitat(tipo_do_habitat habitat_tipo){
    habitat_tipo = habitat_tipo;
}

void Anfibio::solicitaDadosBase2(){

    int tamanho_tipo;
    int habitat_tipo;

    Animal::solicitaDadosBase();
  
    std::cout << "Tamanho do Habitat (0: pequeno, 1: medio, 2: gigante): ";
    std::cin >> tamanho_tipo;
    this->setTamanho_do_habitat(static_cast<tamanho_do_habitat>( tamanho_tipo ));

    std::cout << "Tipo do Habitat (0: herbívoro, 1: onívoro, 2: carnívoro): ";
    std::cin >> habitat_tipo;
    this->setTipo_do_habitat(static_cast<tipo_do_habitat>( habitat_tipo ));
}

void Anfibio::verBase(){
    
    std::cout << "Tamanho do Habitat:  " << this->getTamanho_tipo() << std::endl;
    std::cout << "Tipo do Habitat: " << this->getHabitat_tipo() << std::endl;
}

void Anfibio::ver(){
    this->verBase();
}

void Anfibio::editarBase(){
    this->solicitaDadosBase2();
}

void Anfibio::editar(){
    this->editarBase();
}