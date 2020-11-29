#include <iostream>

class Exotico
{
protected:
    std::string pais_de_origem;
    
public:
    Exotico();
    Exotico(std::string pais_de_origem);
    virtual ~Exotico();

    std::string getPais_de_origem() const;
    
    void setPais_de_origem(std::string pais_de_origem);
    
};