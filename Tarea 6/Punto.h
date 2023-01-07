#pragma once
#include "ElementoSimple.h"
class Punto :
    public ElementoSimple
{
public:
    Punto(int id, int x, int y);
    ~Punto();
    void dibujar();
    void borrar();
};


