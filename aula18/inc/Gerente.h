#ifndef GERENTE_H
#define GERENTE_H

#include <string>
#include "Funcionario.h"

class Gerente : public Funcionario {
    public:
        Gerente(const std::string& nome);
        std::string toString();
};

#endif
