 #include "../../include/animal/Mamifero.hpp"

Mamifero::Mamifero(porte_do_mamifero porte_tipo, 
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