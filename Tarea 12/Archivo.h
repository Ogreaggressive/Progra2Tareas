#pragma once
#include "Mensaje.h"
class Archivo :
    public Mensaje
{
private:
    string nombre;
    string ext;
public:
    Archivo(long fono, string nombre, string ext);
    ~Archivo();
    void mostrar();
};




