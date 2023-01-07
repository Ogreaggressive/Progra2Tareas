#pragma once
#include "Funcion.h"
class Obra :
    public Funcion
{
private:
    string compania;
    Cliente** actores;
public:
    Obra(int fecha, int hora, string detalles, string titulo, string director,string compania);
    ~Obra();
    void mostrar();
};

