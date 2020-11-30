#include "../../include/animal/Mamifero.hpp"
#include "../../include/animal/Exotico.hpp"

class MamiferoExotico: public Mamifero, public Exotico
{
protected:
    /* data */
public:
    MamiferoExotico();
    MamiferoExotico(
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
        requer_gaiola gaiola_tipo,
        std::string pais_de_origem
    );
    virtual ~MamiferoExotico();
};