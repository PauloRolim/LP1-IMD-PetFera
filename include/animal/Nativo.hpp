#pragma once

#include <string>

class Nativo {
protected:
    std::string licencaIBAMA;
public:
    Nativo();
    Nativo(std::string licencaIBAMA);
    ~Nativo();

    std::string getLicencaIBAMA() const;
    void setLicencaIBAMA(std::string licencaIBAMA);

    void solicitaDadosNativo();
    void verNativo();
    void editarNativo();
};