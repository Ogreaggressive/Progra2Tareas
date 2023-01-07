#pragma once
#include "CuentaCortoPlazo.h"
class CuentaCorriente :
    public CuentaCortoPlazo
{
public:
    CuentaCorriente(int id, string tipo, int saldo, int cantMaxTransacciones,int mensualidad);
    ~CuentaCorriente();
    void deposito(Transaccion* transaccion);
    void retiro(Transaccion* transaccion);
    void actualizacion();
    void mostrar();
};



