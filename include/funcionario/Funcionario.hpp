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

        void solicitaDadosBase();
        virtual void solicitaDados();

        void verBase();
        virtual void ver();

        void editarBase();
        virtual void editar();

        Funcionario& operator=(const Funcionario &f2);
        bool operator==(const Funcionario &f2) const;
};