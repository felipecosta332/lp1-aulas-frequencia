#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <string>

class Funcionario {
    private:
        std::string nome;
        std::string cpf;
        double salario;
    public:
        std::string toString();
        std::string getNome();
        std::string getCPF();
        double getSalario();
        void setNome(const std::string &nome);
        void setCPF(const std::string &cpf);
        void setSalario(double salario);
};

#endif