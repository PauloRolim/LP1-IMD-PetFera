#include <iostream>

#include "../../include/animal/Anfibio.hpp"
#include "../../include/animal/Exotico.hpp"


class AnfibioExotico: public Anfibio, public Exotico
{
protected:
    
public:
    AnfibioExotico();
    
    virtual ~AnfibioExotico();

    void solicitaDados() override;

    void ver() override;

    void editar() override;
};

