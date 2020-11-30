#include <iostream>

#include "../../include/animal/Anfibio.hpp"
#include "../../include/animal/Nativo.hpp"


class AnfibioNativo: public Anfibio, public Nativo
{
protected:
    
public:
    AnfibioNativo();
    AnfibioNativo(
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
        std::string licenca_IBAMA
    );
    virtual ~AnfibioNativo();
};
