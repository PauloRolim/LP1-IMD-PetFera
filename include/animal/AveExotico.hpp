#include <iostream>

#include "../../include/animal/Ave.hpp"
#include "../../include/animal/Exotico.hpp"

class AveExotico: public Ave, public Exotico
{
protected:
    /* data */
public:
    AveExotico();
    virtual ~AveExotico();

    void solicitaDados() override;

    void ver() override;

    void editar() override;
};