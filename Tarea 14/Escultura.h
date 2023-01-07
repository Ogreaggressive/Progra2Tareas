#pragma once

#include "Obra.h"

class Escultura :
    public Obra
{
private:
    int peso;
public:
    Escultura(int codigo,string titulo, string autor, int peso);
    Escultura(int codigo);
    ~Escultura();
    void mostrar();
    string toString();
};



