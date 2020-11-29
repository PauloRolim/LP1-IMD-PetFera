#include <iostream>

class Nativo
{
protected:
    std::string licenca_IBAMA;
public:
    Nativo(/* args */);
    Nativo(std::string licenca_IBAMA);
    ~Nativo();

    std::string getLicenca_IBAMA() const;
    void setLicenca_IBAMA(std::string licenca_IBAMA);
};