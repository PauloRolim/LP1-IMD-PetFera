#include <iostream>

#include "../../include/animal/Ave.hpp"
#include "../../include/animal/Nativo.hpp"

class AveNativa: public Ave, public Nativo
{
protected:
   
public:
    AveNativa();
    AveNativa(
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
        std::string licenca_IBAMA
    );
    virtual ~AveNativa();
};
