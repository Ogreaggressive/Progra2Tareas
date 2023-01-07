#pragma once

#include "ElementoGrafico.h"

class ElementoSimple :
    public ElementoGrafico
{
protected:
    int x;
    int y;
public:
    ElementoSimple(int id, int x, int y);
    ~ElementoSimple();
};

