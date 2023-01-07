#pragma once
#include "Cliente.h"

#define CANT_MAX_OBRAS 10

class Adulto :
    public Cliente
{
private:

public:
    Adulto(int ci, string nombre);
    Adulto(int ci);
    ~Adulto();
    void mostrar();
    static void mostrar(Adulto* Adulto);
    string toString();
};




