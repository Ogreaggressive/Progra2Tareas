#pragma once
#include "Cliente.h"

#define CANT_MAX_OBRAS 10

class Menor :
    public Cliente
{
private:

public:
    Menor(int ci, string nombre);
    Menor(int ci);
    ~Menor();
    void mostrar();
    static void mostrar(Menor* Menor);
    string toString();
};






