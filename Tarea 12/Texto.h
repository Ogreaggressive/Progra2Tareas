#pragma once
#include "Mensaje.h"
class Texto :
    public Mensaje
{
private:
    string contenido;
public:
    Texto(long fono, string contenido);
    ~Texto();
    void mostrar();
};



