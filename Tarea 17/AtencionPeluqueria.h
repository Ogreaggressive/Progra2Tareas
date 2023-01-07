#pragma once
#include "Atencion.h"
class AtencionPeluqueria :
    public Atencion
{
private:
    int duracion;
public:
    AtencionPeluqueria(int codigo, string descripcion, int costo, int duracion);
    AtencionPeluqueria(int codigo);
    ~AtencionPeluqueria();
    void mostrar();
    string toString();
};

