#pragma once
#include "Obra.h"
class Pintura :
    public Obra
{
private:
    int ancho;
    int largo;
public:
    Pintura(string titulo, string autor, string tipo, int precio,int ancho, int largo);
    ~Pintura();
    void mostrar();
};

