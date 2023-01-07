#pragma once

#include "ElementoGrafico.h"
#include "Linea.h"

class GarabatoLineas :
    public ElementoGrafico
{
private:
    Linea** lineas;
    int cantMaxLineas;
    int ind;
public:
    GarabatoLineas(int id, int cantMaxLineas);
    ~GarabatoLineas();
    void crearLinea(int id, int x, int y, int tam, string orientacion);
    void dibujar();
    void borrar();
};





