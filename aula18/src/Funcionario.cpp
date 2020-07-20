#include "Funcionario.h"

std::string Funcionario::toString() {
    return "Funcionário: " + nome;
}

std::string Funcionario::getNome() {
    return nome;
}

std::string Funcionario::getCPF() {
    return cpf;
}

double Funcionario::getSalario() {
    return salario;
}

void Funcionario::setNome(const std::string &nome) {
    this->nome = nome;
}

void Funcionario::setCPF(const std::string &cpf) {
    this->cpf = cpf;
}

void Funcionario::setSalario(double salario) {
    this->salario = salario;
}