#include <iostream>

#include "../../include/animal/Anfibio.hpp"
#include "../../include/animal/Exotico.hpp"


class AnfibioExotico: public Anfibio, public Exotico
{
protected:
    
public:
    AnfibioExotico();
    
    virtual ~AnfibioExotico();
};