#pragma once
#include "Cliente.h"
class Empresa :
    public Cliente
{
private:
    int NIT;
    string tipo; //S.A Y S.R.L
public:
    Empresa(string codigo, string nombre, int fono, string direccion, int cantMaxCuentas,int NIT, string tipo);
    ~Empresa();
    void mostrar();
};

