#pragma once
#include "Funcion.h"
class Pelicula :
    public Funcion
{
private:
    string genero;
public:
    Pelicula(int fecha, int hora, string detalles, string titulo, string director, string genero);
    ~Pelicula();
    void mostrar();
};

