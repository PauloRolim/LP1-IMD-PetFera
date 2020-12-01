#include "../../include/animal/Mamifero.hpp"
#include "../../include/animal/Exotico.hpp"

class MamiferoExotico: public Mamifero, public Exotico {
public:
    MamiferoExotico();
    ~MamiferoExotico();

    void solicitaDados() override;

    void ver() override;

    void editar() override;
};