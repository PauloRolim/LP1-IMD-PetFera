#include <iostream>

#include "../../include/animal/Anfibio.hpp"
#include "../../include/animal/Nativo.hpp"

<<<<<<< HEAD
class AnfibioNativo: public Anfibio, public Nativo
{
private:
    /* data */
=======

class AnfibioNativo: public Anfibio, public Nativo
{
protected:
    
>>>>>>> 89f69e570c600d668f188fcf5436dfc071e8fec1
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
<<<<<<< HEAD
};
=======
};
>>>>>>> 89f69e570c600d668f188fcf5436dfc071e8fec1
