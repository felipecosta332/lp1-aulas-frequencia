#include "Caixa.h"

Caixa::Caixa(const std::string &nome) {
    this->setNome(nome);
}

std::string Caixa::toString() {
    return "Caixa: " + this->getNome();
}
