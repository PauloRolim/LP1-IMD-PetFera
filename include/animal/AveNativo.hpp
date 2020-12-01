#pragma once
#include <iostream>


#include "../../include/animal/Ave.hpp"
#include "../../include/animal/Nativo.hpp"

class AveNativo: public Ave, public Nativo
{
   
public:
    AveNativo();
    
    virtual ~AveNativo();

    void solicitaDados() override;

    void ver() override;

    void editar() override;
};
