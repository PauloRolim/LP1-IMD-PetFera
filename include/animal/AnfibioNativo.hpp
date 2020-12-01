#include <iostream>

#include "../../include/animal/Anfibio.hpp"
#include "../../include/animal/Nativo.hpp"

class AnfibioNativo: public Anfibio, public Nativo
{
private:
    /* data */
public:
    AnfibioNativo();
    
    virtual ~AnfibioNativo();

    void solicitaDados() override;

    void ver() override;

    void editar() override;
};