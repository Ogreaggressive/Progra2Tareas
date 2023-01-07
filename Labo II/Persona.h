#pragma once

#include "Cliente.h"

class Persona :
    public Cliente
{
private:
    int CI;
public:
    Persona(string codigo, string nombre, int fono, string direccion, int cantMaxCuentas,int CI);
    ~Persona();
    void mostrar();
};

