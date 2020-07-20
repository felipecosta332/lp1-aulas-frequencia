#include "Seguranca.h"

Seguranca::Seguranca(const std::string &nome) {
    this->setNome(nome);
}

std::string Seguranca::toString() {
    return "Seguranca: " + this->getNome();
}