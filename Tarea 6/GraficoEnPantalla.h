#pragma once

#include "ElementoGrafico.h"
#include "Punto.h"
#include "Linea.h"
#include "GarabatoPuntos.h"
#include "GarabatoLineas.h"

#define MAX_ELEMENTOS 10


class GraficoEnPantalla :
    public ElementoGrafico
{
private:
    ElementoGrafico* elementos[MAX_ELEMENTOS];
    int ind;
public:
    GraficoEnPantalla(int id);
    ~GraficoEnPantalla();
    void dibujar();
    void borrar();
    void agregarPunto(int id, int x, int y);
    void agregarLinea(int id, int x, int y, int tam, string orientacion);
    void agregarGarabatoPuntos(int id, int cantMaxPuntos);
    void agregarGarabatoPuntos2(int id, int cantMaxPuntos);
    void agregarGarabatoLineas(int id, int cantMaxLineas);
    void agregarPuntoGarabato(int id, int x, int y, GarabatoPuntos *p1);
    void menu();
};

