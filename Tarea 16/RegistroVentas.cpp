#include "RegistroVentas.h"

RegistroVentas::RegistroVentas()
{
    cont = 0;
    tot = 0;
}

RegistroVentas::~RegistroVentas()
{

}

void RegistroVentas::cambiarContador(int valor)
{
    m.lock();
    cont = valor;
    m.unlock();
}

RegistroVentas& RegistroVentas::getInst()
{
    static RegistroVentas i;
    return i;
}

/*
int RegistroVentas::quitarElemento()
{

}*/

void RegistroVentas::aumentarVenta(Venta* v1)
{
    m.lock();
    ventas.registrar(v1);
    cont += 1;
    tot = tot + v1->getPrecio() * v1->getCant();
    m.unlock();
}

void RegistroVentas::cambiarCont(int& num)
{
    m.lock();
    num = cont;
    m.unlock();
}

float RegistroVentas::conseguirTotal()
{
    return tot;
}