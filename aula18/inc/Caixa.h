#ifndef CAIXA_H
#define CAIXA_H

#include <string>
#include "Funcionario.h"

class Caixa : public Funcionario {
    public:
        Caixa(const std::string& nome);
        std::string toString();
};

#endif
