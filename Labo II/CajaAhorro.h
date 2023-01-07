#pragma once
#include "CuentaCortoPlazo.h"
class CajaAhorro :
    public CuentaCortoPlazo
{
public:
    CajaAhorro(int id, string tipo, int saldo, int cantMaxTransacciones,int mensualidad);
    ~CajaAhorro();
    void deposito(Transaccion* transaccion);
    void retiro(Transaccion* transaccion);
    void actualizacion();
    void mostrar();
};

