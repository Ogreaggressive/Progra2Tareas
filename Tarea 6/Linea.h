#pragma once
#include "ElementoSimple.h"
class Linea :
    public ElementoSimple
{
private:
    int tam;
    string orientacion;
public:
    Linea(int id, int x, int y, int tam, string orientacion);
    ~Linea();
    void dibujar();
    void borrar();
};

