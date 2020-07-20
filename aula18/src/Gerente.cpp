#include "Gerente.h"

Gerente::Gerente(const std::string &nome) {
    this->setNome(nome);
}
std::string Gerente::toString() {
    return "Gerente: " + this->getNome();
}