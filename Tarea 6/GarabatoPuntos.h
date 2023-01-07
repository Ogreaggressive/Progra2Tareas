#pragma once

#include "ElementoGrafico.h"
#include "Punto.h"

class GarabatoPuntos :
    public ElementoGrafico
{
private:
    Punto** puntos;
    int cantMaxPuntos;
    int ind;
public:
    GarabatoPuntos(int id, int cantMaxPuntos);
    ~GarabatoPuntos();
    void crearPunto(int id, int x, int y);
    void dibujar();
    void borrar();
};

