#pragma once
#include "Participante.h"

class Tenista :
    public Participante
{
private:
    int ci;
    string nombre;
    int telefono;
public:
    Tenista(string codReg, int ci, string nombre, int telefono);
    ~Tenista();
    void mostrar();
};

