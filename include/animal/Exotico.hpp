#pragma once

#include <string>

class Exotico {
protected:
    std::string paisOrigem;
    
public:
    Exotico();
    Exotico(std::string paisOrigem);
    ~Exotico();

    std::string getPaisOrigem() const;
    void setPaisOrigem(std::string paisOrigem);

    void solicitaDadosExotico();
    void verExotico();
    void editarExotico();
};