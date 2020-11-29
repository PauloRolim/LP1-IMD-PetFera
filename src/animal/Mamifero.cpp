 #include "../../include/animal/Mamifero.hpp"

Mamifero::Mamifero(): Animal() {}

Mamifero::Mamifero(
            std::string classe,
            std::string especie,
            std::string nome,
            double preco,
            Tratador* tratador_responcavel,
            Veterinario* vet_responcavel,
            _sexo sexo,
            _classificacaoRisco risco,
            _alimentacao comida,
            porte_do_mamifero porte_tipo, 
            requer_gaiola gaiola_tipo){}


porte_do_mamifero 
Mamifero::getPorte_tipo() const{
    return this-> porte_tipo;
}

requer_gaiola 
Mamifero::getGaiola_tipo() const{
    return this-> gaiola_tipo;
}

void 
Mamifero::setPorte_do_mamifero(porte_do_mamifero porte_tipo){
    porte_do_mamifero porte_tipo = porte_tipo;
}

void 
Mamifero::setRequer_gaiola(requer_gaiola gaiola_tipo){
    requer_gaiola gaiola_tipo = gaiola_tipo;
}