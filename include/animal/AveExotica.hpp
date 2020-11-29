#include <iostream>

#include "../../include/animal/Ave.hpp"
#include "../../include/animal/Exotico.hpp"

class AveExotica: public Ave, public Exotico
{
protected:
    /* data */
public:
    AveExotica();
    AveExotica(
        std::string classe,
        std::string especie,
        std::string nome,
        double preco,
        Tratador* tratador_responcavel,
        Veterinario* vet_responcavel,
        _sexo sexo,
        _classificacaoRisco risco,
        _alimentacao comida,
        tamanho_da_gaiola tamanho_tipo, 
        ave_voadora voa_tipo,
        std::string pais_de_origem
    );
    virtual ~AveExotica();
};