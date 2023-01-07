#pragma once
#include "Obra.h"
class Pintura :
    public Obra
{
private:
    int ancho;
    int alto;
public:
    Pintura(int codigo,string titulo, string autor, int alto,int ancho);
    Pintura(int codigo);
    ~Pintura();
    void mostrar();
    string toString();
};



