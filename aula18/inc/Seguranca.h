#ifndef SEGURANCA_H
#define SEGURANCA_H

#include <string>
#include "Funcionario.h"

class Seguranca : public Funcionario {
    public:
        Seguranca(const std::string& nome);
        std::string toString();
};

#endif
