#pragma once
#include "Cuenta.h"
class CuentaCortoPlazo :
    public Cuenta
{
protected:
    int mensualidad;
public:
    CuentaCortoPlazo(int id, string tipo, int saldo, int cantMaxTransacciones, int mensualidad);
    ~CuentaCortoPlazo();
    virtual void deposito(Transaccion* transaccion) = 0;
    virtual void retiro(Transaccion* transaccion) = 0;
};

