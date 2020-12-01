#pragma once
#include <iostream>

#include "../../include/animal/Mamifero.hpp"
#include "../../include/animal/Nativo.hpp"

class MamiferoNativo: public Mamifero, public Nativo
{
protected:
    
public:
    MamiferoNativo();
    
    virtual ~MamiferoNativo();

    void solicitaDados() override;

    void ver() override;

    void editar() override;
};
