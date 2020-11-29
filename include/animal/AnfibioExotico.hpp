#include <iostream>

#include "../../include/animal/Anfibio.hpp"
#include "../../include/animal/Exotico.hpp"


class AnfibioExotico: public Anfibio, public Exotico
{
protected:
    
public:
    AnfibioExotico();
    AnfibioExotico(
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
        tipo_do_habitat habitat_tipo,
        std::string pais_de_origem
    );
    virtual ~AnfibioExotico();
};