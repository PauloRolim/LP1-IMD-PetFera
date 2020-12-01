#pragma once
#include <iostream>

#include "../../include/animal/Reptil.hpp"
#include "../../include/animal/Nativo.hpp"

class ReptilNativo: public Reptil, public Nativo
{
protected:
 
public:
    ReptilNativo();
    
    virtual ~ReptilNativo();

    void solicitaDados() override;

    void ver() override;

    void editar() override;
};
