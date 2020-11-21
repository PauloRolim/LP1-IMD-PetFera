#include <iostream>

class funcionario : public tratador {
    private:
    std::string corUniforme;

    public:
    
    tratador(std::string corUniforme, std::string nome, double salario, std::string admissao);
    ~tratador();

    std::string getCorUniforme() const;

    std::string getNome() const;
    double getSalario() const;
    std::string getAdmissao() const;

    void setCorUniforme(std::string corUniforme);

    void setNome(std::string nome);
    void setSalario(double salario);
    void setAdmissao(std::string admissao);
}