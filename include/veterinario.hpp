#include <iostream>

#include "funcionario.hpp"

class veterinario : public funcionario
{
private:
    std::string numeroCRMV;
public:
    veterinario (/* args */);
    ~veterinario ();

    /*getters*/
    std::string getNumeroCRMV();
    std::string getId() const;
    std::string getNome() const;
    double getSalario() const;
    std::string getAdmissao() const;

    /*setters*/
    void setNumeroCRMV(std::string numeroCRMV);
    void setId(std::string Id);
    void setNome(std::string nome);
    void setSalario(double salario);
    void setAdmissao(std::string admissao);
};