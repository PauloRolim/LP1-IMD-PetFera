#pragma once

#include <string>

class Funcionario {
    protected:
        int id;
        std::string nome;
        std::string cpf;
        double salario;

    public:
        static int NEXT_ID;

        /*construtores*/
        Funcionario();
        Funcionario(std::string nome, std::string cpf, double salario);
        Funcionario(const Funcionario &f2);

        /*destrutor*/
        virtual ~Funcionario();

        /*getters*/
        int getId() const;
        std::string getNome() const;
        std::string getCpf() const;
        double getSalario() const;

        /*setters*/
        void setId();
        void setNome(std::string nome);
        void setCpf(std::string cpf);
        void setSalario(double salario);
};