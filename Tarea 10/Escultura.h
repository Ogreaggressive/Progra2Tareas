#pragma once
#include "Obra.h"
class Escultura :
    public Obra
{
private:
    int peso;
public:
    Escultura(string titulo, string autor, string tipo, int precio, int peso);
    ~Escultura();
    void mostrar();
};

