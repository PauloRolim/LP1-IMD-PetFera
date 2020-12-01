#include "../../include/animal/Reptil.hpp"
#include "../../include/animal/Exotico.hpp"

class ReptilExotico: public Reptil, public Exotico
{
protected:
    /* data */
public:
    ReptilExotico();
    
    virtual ~ReptilExotico();

    void solicitaDados() override;

    void ver() override;

    void editar() override;
};